#include <stdio.h>
int main()
{
// PENGULANGAN
	char repeat;
	mengulang:
	printf("Ingin mengulang? :");
	scanf("%s",&repeat);
	if(repeat=='y'||repeat=='Y')
		goto mengulang;
// LOOPING
	int x;
	for (x=1;x<21;x++){
		printf("%d ",x);
	}
	printf("\n");
// WHILE
	int a=0;
	while(a<=10){
		printf("%d. Hello\n",a);
		a++;
	}
}
