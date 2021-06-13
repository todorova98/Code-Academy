#!/bin/bash
if [ -z $1 ]
then
	echo "No arguments, please enter string:"
	read FROM
else
	FROM=$1
fi
gcc ex4.c -o rez
echo `./rez $FROM` > output.txt
if [[ $(< output.txt) != $FROM ]]
then
	echo "Function Copy doesn't work properly"
else
	echo "Successful test. Function copy works!"
fi

