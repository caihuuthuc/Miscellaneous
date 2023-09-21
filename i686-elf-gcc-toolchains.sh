DOWNLOAD_BINUTILS=binutils-2.26
DOWNLOAD_GCC=gcc-5.5.0
DOWNLOAD_GRUB=grub-2.02
DOWNLOAD_XORRISO=xorriso-1.4.8

BUILD_TARGET="i686-elf"
PREFIX=/usr/local

TEMP_BUILD_DIR=~/.local

WILL_BUILD_BINUTILS=true
WILL_BUILD_GCC=
WILL_BUILD_GRUB=true
WILL_BUILD_XORRISO=true
WILL_BUILD_YARN=true


echo "GCC_VERSION      = ${DOWNLOAD_GCC}"
echo "BINUTILS_VERSION      = ${DOWNLOAD_BINUTILS}"
echo "GRUB_VERSION     = ${DOWNLOAD_GRUB}"
echo "XORRISO_VERSION  = ${DOWNLOAD_XORRISO}"


if [[ $WILL_BUILD_BINUTILS == true ]]; then
    wget -q http://ftp.gnu.org/gnu/binutils/$DOWNLOAD_BINUTILS.tar.gz
    tar -xzf $DOWNLOAD_BINUTILS.tar.gz    -C $TEMP_BUILD_DIR
    mkdir -p $TEMP_BUILD_DIR/build_binutils
    cd $TEMP_BUILD_DIR/build_binutils
    $TEMP_BUILD_DIR/$DOWNLOAD_BINUTILS/configure --target=$TARGET --prefix="$PREFIX"  --with-sysroot --disable-multilib --disable-nls --disable-werror
    make
    make install
    rm -r $TEMP_BUILD_DIR/$DOWNLOAD_BINUTILS $TEMP_BUILD_DIR/build_binutils

fi


if [[ $WILL_BUILD_GCC == true ]]; then
    wget -q ftp://ftp.gnu.org/gnu/gcc/$DOWNLOAD_GCC/$DOWNLOAD_GCC.tar.gz
    tar -xzf $DOWNLOAD_GCC.tar.gz -C $TEMP_BUILD_DIR
    cd $TEMP_BUILD_DIR/$DOWNLOAD_GCC && contrib/download_prerequisites
    mkdir -p build_gcc
    cd build_gcc
    $TEMP_BUILD_DIR/$DOWNLOAD_GCC/configure --target=$TARGET \
                            --prefix="$PREFIX" --disable-multilib \
                            --disable-nls --enable-languages=c,c++ \
                            --without-headers
    make all-gcc
    make all-target-libgcc
    make install-gcc
    make install-target-libgcc
    rm -r $TEMP_BUILD_DIR/$DOWNLOAD_GCC
fi


if [[ $WILL_BUILD_GRUB == true ]]; then
    wget -q ftp://ftp.gnu.org/gnu/grub/$DOWNLOAD_GRUB.tar.gz
	 tar -xzf $DOWNLOAD_GRUB.tar.gz    -C  $TEMP_BUILD_DIR
	 cd /$DOWNLOAD_GRUB
	 export PYTHON=python3
	 ./autogen.sh
	 mkdir -p $TEMP_BUILD_DIR/build_grub
	 cd $TEMP_BUILD_DIR/build_grub
	 $TEMP_BUILD_DIR/$DOWNLOAD_GRUB/configure --disable-werror TARGET_CC=$TARGET-gcc       \
                                TARGET_OBJCOPY=$TARGET-objcopy              \
                                TARGET_STRIP=$TARGET-strip                  \
                                TARGET_NM=$TARGET-nm                        \
                                TARGET_RANLIB=$TARGET-ranlib                \
                                --target=$TARGET
	 make
	 make install
	 rm -r $TEMP_BUILD_DIR/$DOWNLOAD_GRUB $TEMP_BUILD_DIR/build_grub

fi


if [[ $WILL_BUILD_XORRISO == true ]]; then
    wget -q ftp://ftp.gnu.org/gnu/xorriso/$DOWNLOAD_XORRISO.tar.gz
	tar -xzf $DOWNLOAD_XORRISO.tar.gz   -C   $TEMP_BUILD_DIR
	cd $TEMP_BUILD_DIR/$DOWNLOAD_XORRISO
	./configure --prefix=/usr
	make
	make install
	rm -r $TEMP_BUILD_DIR/$DOWNLOAD_XORRISO
fi


if [[ $WILL_BUILD_YARN == true ]]; then
    curl -sS https://dl.yarnpkg.com/debian/pubkey.gpg | apt-key add -
	echo "deb https://dl.yarnpkg.com/debian/ stable main" | tee /etc/apt/sources.list.d/yarn.list
	apt-get update
	apt-get install yarn
fi
