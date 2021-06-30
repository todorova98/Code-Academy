#!/bin/bash

gcc ex2.c -o rez
echo `./rez`
READ=$?

if [ "$READ" -ne "0" ]
then
	echo "Unsuccess test,please try again"
else
	echo "Success test!"
fi
