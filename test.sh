#!/bin/bash
if [ -z $1 ]
then
	echo "No arguments, please enter string:"
	read STR
else
	STR="'$*'"
fi

echo "STR: $STR"
gcc ex6.c -o rez
echo `./rez "$STR"` > output.txt


READ=$?

if [ "$READ" -ne "0" ]
then
	echo "Unsuccess test,please try again"
fi

EXPECTED="TRACE: ${STR}"
echo "Exp: $EXPECTED"

if [[ $(< output.txt) != $EXPECTED ]]
then
	echo "Macros MY_PRINT doesn't work properly"
else
	echo "Successful test. Macros MY_PRINT works!"
fi
