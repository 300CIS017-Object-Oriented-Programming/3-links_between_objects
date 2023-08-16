@echo off
g++ -c guest.cpp
g++ -c hotel.cpp
g++ -c main.cpp
g++ -c reserve.cpp
g++ -c payment.cpp
g++ -c room.cpp
g++ guest.o main.o hotel.o reserve.o payment.o room.o -o main
del main.o
del guest.o
del hotel.o
del reserve.o
del payment.o
del room.o