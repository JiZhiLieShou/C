#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);
	int a, sum = 0;
	while (number)
	{
		a=number%10;
		sum=sum*10+a;
		number=number/10;
	}
	// printf("%d\n", sum);
	if(sum == number){
		printf("yes");
	}else{
		printf("no");
	}
}
