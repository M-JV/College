#!/bin/bash
clear

echo "Enter the number: "
read n
fact=1
i=0
clear
while [ $i -lt $n ] 
do
	i=$(($i+1))
	fact=$(($i*$fact))	
	
	echo "$fact"
done

 
