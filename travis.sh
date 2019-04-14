#!/bin/bash
find "Source Codes"/*.c -type f -print0 | while IFS= read -r -d $'\0' file; do
	cp "$file" ../temp/
done
