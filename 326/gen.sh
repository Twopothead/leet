#! /bin/bash
# // 
for i in `seq 1 31`
do
    if [$[3**i] < 2147483647]
    then
    echo  $[3**i]
    fi
done