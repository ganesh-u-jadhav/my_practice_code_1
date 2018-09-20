#include <stdlib.h>
#include <stdio.h>

int main() {
	int i = 0;
	for (; i < 13*1024; i++) {
		void* p = malloc(1024*1024);
		if (p == NULL) {
			fprintf(stderr, "malloc() returned NULL on %dth request\n", i);
			return 1;
		}
	}
	printf("Allocated it all\n");
	return 0;
}
