```bash
DOWNLOAD_BINUTILS=binutils-2.39
DOWNLOAD_GCC=gcc-12.2.0
DOWNLOAD_GRUB=grub-2.06
DOWNLOAD_XORRISO=xorriso-1.4.8

TARGET=i686-elf
PREFIX=/usr/local


wget -q http://ftp.gnu.org/gnu/binutils/$DOWNLOAD_BINUTILS.tar.gz && \
tar -xzf $DOWNLOAD_BINUTILS.tar.gz && \
cd $DOWNLOAD_BINUTILS && \
cd .. && mkdir build_binutils && cd build_binutils \
../$DOWNLOAD_BINUTILS/configure --target=$TARGET --prefix="$PREFIX" --with-sysroot --disable-multilib --disable-nls --disable-werror && \
make && make install


wget ftp://ftp.gnu.org/gnu/gcc/$DOWNLOAD_GCC/$DOWNLOAD_GCC.tar.gz && \
tar -xzf $DOWNLOAD_GCC.tar.gz && \
cd $DOWNLOAD_GCC && \
./contrib/download_prerequisites && \
cd .. && mkdir build_gcc && cd build_gcc && \
../$DOWNLOAD_GCC/configure --target=$TARGET --prefix="$PREFIX" --disable-multilib --disable-nls --enable-languages=c,c++ --without-headers && \
make all-gcc && make all-target-libgcc && make install-gcc && make install-target-libgcc

wget ftp://ftp.gnu.org/gnu/grub/$DOWNLOAD_GRUB.tar.gz  && 
tar -xzf $DOWNLOAD_GRUB.tar.gz  && 
cd $DOWNLOAD_GRUB  && 
export PYTHON=python3  && 
./autogen.sh  && 
cd ../ && mkdir build_grub && cd build_grub  && 
../$DOWNLOAD_GRUB/configure --disable-werror TARGET_CC=$TARGET-gcc TARGET_OBJCOPY=$TARGET-objcopy TARGET_STRIP=$TARGET-strip TARGET_NM=$TARGET-nm TARGET_RANLIB=$TARGET-ranlib --target=$TARGET  && 
make  && make install

```
