PROGRAMS=empty-defaults empty-stripped

all: $(PROGRAMS)

empty-defaults: empty.c
	gcc -o empty-defaults empty.c

empty-stripped: empty.c
	gcc -o empty-stripped empty.c
	strip empty-stripped

clean:
	rm -f $(PROGRAMS)
