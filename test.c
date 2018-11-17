#include <stdio.h>

int main(int argv,char *argc[]) {

	int i = 1;
	int *p = &i;
	*p = 2;
	printf("%p\n",&i);
	printf("%p\n",p);
	printf("%s",argc[0]);
	return 0;
}
	

