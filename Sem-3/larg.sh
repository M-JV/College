#!/bin/sh 
clear
echo "A shell script to find the largest of two numbers"
 echo "Enter the first number: "
 read num1

 echo "Enter the second number: "
 read num2

 if test $num1 -gt $num2 
 then 
 echo "First number is greater!"
 else 
 echo "Second number is greater!"
 fi
