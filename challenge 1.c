#include<stdio.h>
int main()
{
	printf("Enter ur mark=");
	int mark=0;
	scanf("%d",&mark);
	printf("%s",mark>=85?"Grade A":(mark>=70?"Grade B":(mark>=55?"Grade C":(mark>=40?"Grade D":"Grade F"))));
	return 0;
}
