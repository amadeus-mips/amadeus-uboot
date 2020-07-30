set endian little
set mipsfpu none
target remote 127.0.0.1:1234
symbol-file u-boot
# add-symbol-file boot/loader 0xbfc00000
