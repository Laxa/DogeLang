#!/bin/bash

if [[ $# = 0 ]]
then
    make re && ./TestDoge tests/main.doge && cat tests/main.doge.c # && gcc tests/main.doge.c && tests/a.out
else
    for var in "$@"
    do
        make re && ./TestDoge $var && cat $var # && gcc tests/main.doge.c && tests/a.out
    done
fi
