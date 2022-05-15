#!/bin/bash
clear

echo "Enter the number of Fibonacci terms to be found: "
read n
clear
x=0
y=1
i=2

echo "$x"

while [ $i -lt $n ]
do

	z=$(($x+$y))
	echo "$z"
        x=$y
	y=$z
	i=$(($i+1))
done



