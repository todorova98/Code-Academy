#!/bin/bash
if [ -z $1 ]
then
	echo "No arguments, please enter string and integer:"
	read FROM
else
	FROM=$1
fi

if [ -z $2 ]
then
	echo "Please enter an integer:"
	read SYMBOLS
else
	SYMBOLS=$2
fi

gcc ex9.c -o rez
echo `./rez $FROM $SYMBOLS` > output.txt

READ=$?
if [ "$READ" -ne "0" ]
then
	echo "Unsuccess test,please try again"
fi

RESULT=${FROM:0:$(($SYMBOLS))}

if [[ $(< output.txt) != $RESULT ]]
then
	echo "Function strncopy() doesn't work properly"
else
	echo "Successful test. Function strncopy() works!"
fi

