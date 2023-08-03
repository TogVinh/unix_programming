#!/bin/bash

read amount
read -a index
echo ${#index[@]}
declare -i cum=0
declare -i candidate=0

#echo ${index[@]}

for num in ${index[@]}
do
    for iter in ${index[@]}
    do
        if [ $num -eq $iter ]
        then 
            ((cum+=1))
            #printf ">%d:%d " $num $cum
            if [ $cum -eq 1 ]; then candidate=$num; fi
        fi
    done
    
    if [ $cum -eq 1 ]
    then
        printf "%d" $candidate
        break
    else
        cum=0
    fi
    
done
