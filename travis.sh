#!/bin/bash
find *.c -type f -print0 | while IFS= read -r -d $'\0' file; do
	cp "$file" ./temp/"$file"
done
