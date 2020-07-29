# Changes to uboot

## mips revision

MIPS32 r1

## arch/mips/Kconfig

added configuration `MACH_PHOENIX`

source `arch/mips/mach-phoenix/Kconfig`

## arch/mips/Makefile

added macro `CONFIG_MACH_PHOENIX`


## arch/mips/mach-phoenix/Makefile

added Kconfig in `board/phoenix/Kconfig`

## board/phoenix/phoenix_artix7.c

Kconfig and init file

## arch/mips/dts/phoenix_artix7.dts

added device tree for phoenix 
- [ ] correct address for `phoenix_artix7`
- [ ] change spi flash to xilinx IP
- [ ] serial compatible for `ns16550` or `ns16550a`
- [ ] correct interrupt position

# arch/mips/dts/Makefile

`CONFIG_TARGET_PHOENIX_ARTIX7`

# include/configs/phoenix_artix7.h

removed config extra env settings
removed time measuring



# defconfig

## text base
`0xbfc20000`
