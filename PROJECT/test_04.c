#include<stdio.h>
#include<conio.h>
main()
{
	int  money,ten,five,two,coin;
	printf("The amount you want to change : ",money);
	scanf("%d",&money);
	ten = (int)money/10;
	five = (int)money%10/5;
	two = (int)money%10%5/2;
	coin = (int)money%10%5%2;
	printf("Number of Ten Bath is %d coin\n",ten);
	printf("Number of Five Bat %d coin\n",coin);
	getch();h is %d coin\n",five);
	printf("Number of Two Bath is %d coin\n",two);
	printf("Number of One Bath is
	return 0;
}
