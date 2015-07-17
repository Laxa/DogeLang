#!/bin/bash

make re && ./TestDoge tests/main.doge && cat tests/main.doge.c
