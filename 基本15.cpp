#include<stdio.h>
#include<stdlib.h>

int main()
{
	int hour,minute,time;
	printf("Please enter the time you want:\n");
	printf("Hours are (Not more than 24) :");
	scanf("%d",&hour);
	printf("Minutes are (Not more than 60) :");
	scanf("%d",&minute);
	if (minute<=60)
	{
		time=minute+(hour*60);
		if (time<450)
		printf("This time isn't class time yet\n");
		else if ((time>=450) && (time<1020))
		printf("This time is school time\n");
		else if ((time>=1020) && (time<1440))
		printf("This time is after school time\n");
		else if (time>=1440)
		printf("Please enter an appropriate time\n");
	}
	else
	printf("Please enter an appropriate time\n");
	
	system("pause");
	return 0;
}
