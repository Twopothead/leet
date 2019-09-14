#! /bin/bash
if [ $(head -n 10 file.txt | wc -l) -lt 10 ];then
:
else 
head -n 10 file.txt | tail -n 1
fi