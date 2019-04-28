#include <stdio.h>

int main(int argc, char *argv[]) {
	int index;
	for(index = 1; index < argc; ++index) {
		FILE* file = fopen(argv[index], "rb");
		if(!file) {
			printf("Error: Cannot to open the file!");
		}
		else {
			int character;
			while((character = fgetc(file)) != EOF) {
				printf(" %02x", character);
				if(character == '\n') {
					printf("\n");
				}
			}
			fclose(file);
		}
	}
	return 0;
}
