#include<stdio.h>
#include<string.h>

int main() {
	FILE *fp = fopen("./flag.txt", "r");
	char flag[0x100];
	fgets(flag, 0x100, fp);

	char input[0x100];
	fgets(input, 0x100, stdin);
	int len = strlen(input) - 1;

	if(strncmp(flag, input, len) == 0) {
		puts("Correct!!!");
	} else {
		puts("Incorrect...");
	}
}
