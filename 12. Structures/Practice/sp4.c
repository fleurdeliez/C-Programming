#include<stdio.h>


int main()
{
	char a;
	int mtoday, dtoday, i;
	
	struct date{
		int month, day, year;
	};
	
	struct record
	{
		char name[50];
		int age;
		struct date bdate;				//inner structure
	}buddies[3];			
						
	for(i = 0; i < 3; i++)
	{
		printf("Enter student%d name: ", i+1);
		gets(buddies[i].name);
		printf("Enter student age: ");
		scanf("%d", &buddies[i].age);
		printf("Enter birth month in number: ");
		scanf("%d",&buddies[i].bdate.month);
		printf("Enter birth day in number: ");
		scanf("%d", &buddies[i].bdate.day);
		printf("Enter birth year in number: ");
		scanf("%d", &buddies[i].bdate.year);
		
		printf("\nHello %s\n",buddies[i].name);
		printf("Enter current month in number: ");
		scanf("%d",&mtoday);
		printf("Enter current day in number: ");
		scanf("%d",&dtoday);

		printf("Your birthday is %d-%d-%d!\n",buddies[i].bdate.month,
		buddies[i].bdate.day,buddies[i].bdate.year);
		
		if(buddies[i].bdate.month <= mtoday)
		{
		 	if(buddies[i].bdate.day <= dtoday)
		{
			printf("You are %d years old now!\n\n", buddies[i].age+1);
		}
			else
			printf("Wow you'll be %d soon!\n\n", buddies[i].age+1);
			scanf("%c", &a);
		}
		else
			printf("Wow you'll be %d soon!\n\n", buddies[i].age+1);
			scanf("%c", &a);
	}
}
