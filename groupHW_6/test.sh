#! /bin/bash

FIRST=$1

if [ -z $1 ]
then
	echo "No arguments, please enter an integer."
	read FIRST
else
	FIRST=$1
fi


if [ "$FIRST" -le "0" ]
then
	echo "Please enter positive integer."
	read FIRST
fi

gcc ex8.c -o rez
echo `./rez $FIRST` > output.txt

READ=$?

if [ "$READ" -eq "0" ]
then
	echo "Success test"
else
	echo "Unsuccess test,please try again"
fi
