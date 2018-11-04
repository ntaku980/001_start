#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* test */

int main (void) {

	FILE *fout;
	int c;

	if ((fout = fopen("file1.txt", "w")) == NULL) {
		perror("fopen");
		exit(1);
	}

	printf(" input any key \n");
	while ((c = getchar()) != EOF) {
		putc(c, fout);
	}

	fclose(fout);
	exit(0);
}
