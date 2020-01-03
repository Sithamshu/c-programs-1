#include<stdio.h>
int main()

{
	int h;
	printf("enter the height");
	scanf("%f",&h);
	if (h<150)
	{
		if (h<165)
		printf(" average height");
	else if (h<190)
	printf("tall");
	else 
	printf(" abnormal height");
}
else   
     printf("dwarf");
return 0;
	
}
