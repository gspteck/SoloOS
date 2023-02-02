FROM randomdude/gcc-cross-x86_64-elf

# install necessary packages
RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install -y nasm
RUN apt-get install -y xorriso
RUN apt-get install -y grub-pc-bin
RUN apt-get install -y grub-common

# setting file system
VOLUME /root/env
WORKDIR /root/env