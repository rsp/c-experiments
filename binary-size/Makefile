PROGRAMS=empty-defaults empty-defaults-stripped empty-phresnel empty-phresnel-stripped

all: $(PROGRAMS)

empty-defaults: Makefile empty-main.c
	gcc -o empty-defaults empty-main.c

empty-defaults-stripped: Makefile empty-main.c
	gcc -o empty-defaults-stripped empty-main.c
	#strip empty-defaults-stripped
	strip -R .note -R .comment -R .eh_frame -R .eh_frame_hdr -s empty-defaults-stripped

empty-phresnel: Makefile empty-start.c
	gcc empty-start.c -o empty-phresnel -Os -mfpmath=387 \
	-mfancy-math-387 -fmerge-all-constants -fsingle-precision-constant \
	-fno-math-errno -Wall -ldl -ffast-math -nostartfiles -nostdlib  \
	-fno-unroll-loops

empty-phresnel-stripped: Makefile empty-start.c
	gcc empty-start.c -o empty-phresnel-stripped -Os -mfpmath=387 \
	-mfancy-math-387 -fmerge-all-constants -fsingle-precision-constant \
	-fno-math-errno -Wall -ldl -ffast-math -nostartfiles -nostdlib  \
	-fno-unroll-loops
	strip -R .note -R .comment -R .eh_frame -R .eh_frame_hdr -s empty-phresnel-stripped

clean:
	rm -f $(PROGRAMS)
