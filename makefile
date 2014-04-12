bitflip: bitflip.c
	gcc -Wall -o bitflip bitflip.c

bitflip-recursive: bitflip-recursive.c
	gcc -o bitflip-recursive -Wall bitflip-recursive.c

sponge: sponge.c
	gcc -o sponge -Wall sponge.c
