all:
	cd "Source Codes" && \
	find *.c -type f -print0 | while IFS= read -r -d $'\0' file; do
		gcc "$file" -lm -o Output
	done