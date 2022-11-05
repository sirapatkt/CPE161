#include<stdio.h>
#include<conio.h>
main()
{
	float base, height, area;
	printf("Insert base : ",base);
	scanf("%f",&base);
	printf("Insert height : ",height);
	scanf("%f",&height);
	area = 0.5 * base * height;
	printf("Area = %f",area);
	getch();
	return 0;
}
