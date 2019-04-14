MYDIR = .
list: $(MYDIR)/*
	for file in $^ ; do \
		echo $${file} -lm ; \
	done