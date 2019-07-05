#! /bin/bash
for i in `seq 0 31`
do
    if [ $[3**i] -lt 2147483647 ];then
    echo  -ne "( n == $[3**i] ) ||"
    fi
done