#!/bin/bash

for file in *.c; do
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c "$file" -o "${file%.c}"
done

