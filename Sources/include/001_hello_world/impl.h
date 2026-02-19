#include <stdio.h>

void impl() {
	for (;;) {
		printf("Hello World\n");
		asm("nop");
	}
}
