MYDIR = .
list: $(MYDIR)/*
	cd "Source Codes" && \
	for file in $^ ; do \
		gcc -Wall -o Output $${file} -lm ; \
	done