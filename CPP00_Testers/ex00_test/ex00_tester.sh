#!/bin/bash

RED='\e[0;31m'
WHITE='\e[0;37m'
GREEN='\e[0;32m'
YELLOW='\e[0;33m'

make fclean --quiet
make > out
make > out2

DIFF=$(diff out out2)

echo -e "$YELLOW This Tester is very simple that only tests few mandatory Conditons, You also need to do your own TESTS. \n"
echo -e -n "$YELLOW Makefile Relinks TEST:"
if [  "$DIFF" == "" ]; then 
  echo -e "$RED relinks :("
else 
  echo -e "$GREEN Works Good"
fi

echo -e -n "$YELLOW TEST 1 :"
./megaphone "shhhhh... I think the students are asleep..." > out
echo "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." > out2
if ! diff out out2 > /dev/null ; then
  echo -e "$RED Wrong Answer"
else
  echo -e  "$GREEN CORRECT"
fi
rm -f out out2
