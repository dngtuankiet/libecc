#! /bin/bash

#--------------------------LINUX build-----------------------#
export LIBECC_NOSTDLIB=0
make clean-linux
make static-lib
#-------------------------------------------------------------#