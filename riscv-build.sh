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
-ffreestanding -fno-builtin -nostdlib \
--specs=nosys.specs -DCUSTOM_RISCV_PRINT -DCUSTOM_RAND_GENERATE_BLOCK -DWORDSIZE=32 -DUSER_NN_BIT_LEN=256 -DWITH_LIBECC_CONFIG_OVERRIDE -DWITH_CURVE_SECP256K1 -DWITH_HASH_SHA256 -DWITH_SIG_ECDSA -DWITH_ECCCDH" \
LFLAGS="-static -nostdlib --specs=nosys.specs -L /home/tuankiet/Workspace/RISCVConsole/software/RISCVConsoleCode/linker -T memory.lds -T link.lds" \
make build/libarith.a build/libec.a build/libsign.a
mkdir -p build-riscv/
cp build/*.a build-riscv/
#-------------------------------------------------------------#


