all: bitflip sponge bitflip-recursive gigaprint

bitflip: bitflip.c
	gcc -Wall -o bitflip bitflip.c

bitflip-recursive: bitflip-recursive.c
	gcc -o bitflip-recursive -Wall bitflip-recursive.c

sponge: sponge.c
	gcc -o sponge -Wall sponge.c

# Warning! This program sucks 4GB of memory!
gigaprint: gigaprint.c
	gcc -o gigaprint -Wall -O3 gigaprint.c
