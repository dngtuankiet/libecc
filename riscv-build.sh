#! /bin/bash

#--------------------------ARM build--------------------------#
# CROSS_COMPILE=arm-none-eabi- CC=gcc CFLAGS="$(TARGET_OPTS) -W -Wextra -Wall -Wunreachable-code \
# -pedantic -fno-builtin -std=c99 -Os \
# -ffreestanding -fno-builtin -nostdlib -DWORDSIZE=64" \
# make build/libsign.a
#-------------------------------------------------------------#

#--------------------------RISC-V build-----------------------#
export LIBECC_NOSTDLIB=1
make clean

CROSS_COMPILE=riscv64-unknown-elf- CC=gcc CFLAGS="-march=rv32imac -mabi=ilp32 -W -Wextra -Wall -Wunreachable-code \
-pedantic -fno-builtin -std=c99 -Os \
-ffreestanding -fno-builtin -nostdlib -DWORDSIZE=32 \
--specs=htif_nano.specs -DCUSTOM_RAND_GENERATE" \
LDFLAGS="-T htif.ld" \
make build/libarith.a build/libec.a
mkdir -p build-riscv/
cp build/*.a build-riscv/
#-------------------------------------------------------------#