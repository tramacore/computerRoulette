#!/bin/bash
file=sample.txt
if test -f "$file";then
echo "Те повезло еще раз" >>  "$file"
else
touch "$file"
echo "Те повезло " >> "$file"
fi
