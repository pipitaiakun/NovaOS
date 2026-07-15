#!/bin/sh

echo "================================="
echo " NovaOS Build System"
echo "================================="

cd ..

make clean
make

echo
echo "Build selesai."
echo "Semua object file berhasil dibuat."
