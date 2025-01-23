#!/bin/bash

make > out
make > out2

DIFF=$(diff out out2)
if [[ $DIFF != "" ]]; then 
  echo "relinks :("
else 
  echo "Works Good"
fi

rm -f out out2
