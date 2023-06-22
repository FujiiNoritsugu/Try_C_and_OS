hello: try_c.c
	gcc -Wall -O2 -o hello try_c.c
try_header: try_header.c
	gcc -Wall -O2 -o try_header try_header.c -lm
clean:
	rm -f hello
	rm -f try_header
