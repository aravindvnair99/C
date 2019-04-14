MYDIR = .
list: $(MYDIR)/*
        for file in $^ ; do \
                echo "Hello" $${file} ; \
        done

# all:
# 	cd "Source Codes" && \
# 		gcc -Wall -o Output *.c -lm