#include <stdio.h>
#include <string.h>

main() {
	char data = 'a';
	char data2[10] = "Hello!";
	printf("char data = 'a';");
	printf(" => data variable can keep only 1 character\n");
	printf("char data2[10] = \"Hello!\";");
	printf(" => data2 variable can keep %d characters", strlen(data2));
}
