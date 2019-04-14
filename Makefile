MYDIR = .
list: $(MYDIR)/*
	for file in $^ ; do \
		gcc -Wall -o Output $${file} -lm ; \
	done