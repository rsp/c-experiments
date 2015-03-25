PROGRAMS=empty-defaults empty-defaults-stripped empty-phresnel empty-phresnel-stripped

all: $(PROGRAMS)

empty-defaults: Makefile empty.c
	gcc -o empty-defaults empty.c

empty-defaults-stripped: Makefile empty.c
	gcc -o empty-defaults-stripped empty.c
	#strip empty-defaults-stripped
	strip -R .note -R .comment -R .eh_frame -R .eh_frame_hdr -s empty-defaults-stripped

empty-phresnel: Makefile empty.c
	gcc empty.c -o empty-phresnel -Os -mfpmath=387 \
	-mfancy-math-387 -fmerge-all-constants -fsingle-precision-constant \
	-fno-math-errno -Wall -ldl -ffast-math -nostartfiles -nostdlib  \
	-fno-unroll-loops

empty-phresnel-stripped: Makefile empty.c
	gcc empty.c -o empty-phresnel-stripped -Os -mfpmath=387 \
	-mfancy-math-387 -fmerge-all-constants -fsingle-precision-constant \
	-fno-math-errno -Wall -ldl -ffast-math -nostartfiles -nostdlib  \
	-fno-unroll-loops
	strip -R .note -R .comment -R .eh_frame -R .eh_frame_hdr -s empty-phresnel-stripped

clean:
	rm -f $(PROGRAMS)
