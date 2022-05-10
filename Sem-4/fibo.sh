#!/bin/bash
clear
    echo "Enter the number of Fibonnaci numbers needed: "
    read num 

    x=0
    y=1
    i=2

    while[$i -lt $num]
    do
        echo "$x"
        echo "$y"
        z = 'expr $x+$y'
        echo $z
        x = $y
        y = $z
    done
