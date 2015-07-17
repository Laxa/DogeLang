#!/bin/bash

make re && ./TestDoge tests/main.doge && cat tests/main.doge.c # && gcc tests/main.doge.c && tests/a.out
