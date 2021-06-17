#! /bin/bash

FIRST=$1

if [ -z $1 ]
then
	echo "No arguments, please enter a character."
	read FIRST
else
	FIRST=$1
fi

gcc ex4.c -o rez
./rez $FIRST 

READ=$?
if [ "$READ" -eq "0" ]
then
	echo "Success test"
else
	echo "Unsuccess test,please try again"
fi
