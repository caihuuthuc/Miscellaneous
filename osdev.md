```bash
DOWNLOAD_BINUTILS=binutils-2.39
DOWNLOAD_GCC=gcc-12.2.0
DOWNLOAD_GRUB=grub-2.02
DOWNLOAD_XORRISO=xorriso-1.4.8

TARGET=i686-elf
PREFIX=/usr/local


wget ftp://ftp.gnu.org/gnu/gcc/$DOWNLOAD_GCC/$DOWNLOAD_GCC.tar.gz && \
tar -xzf $DOWNLOAD_GCC.tar.gz && \
cd $DOWNLOAD_GCC && \
./contrib/download_prerequisites && \
mkdir build && cd build && \
../configure --target=$TARGET --prefix="$PREFIX" --disable-multilib --disable-nls --enable-languages=c,c++ --without-headers && \
make all-gcc && make all-target-libgcc && make install-gcc && make install-target-libgcc

wget -q http://ftp.gnu.org/gnu/binutils/$DOWNLOAD_BINUTILS.tar.gz && \
tar -xzf $DOWNLOAD_BINUTILS.tar.gz && \
cd $DOWNLOAD_BINUTILS && \
mkdir build && cd build \
../configure --target=$TARGET --prefix="$PREFIX" --with-sysroot --disable-multilib --disable-nls --disable-werror && \
make && make install
```
