#!/bin/bash

gcc -Wall ./2-4.c -o ./2-4
./2-4 $1 &
ps faxu
