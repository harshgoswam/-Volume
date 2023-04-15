#include<stdio.h>


  enum week { Sun,Mon,Tue,Wed,Thu,Fri,Sat };


main()
{
	int i;
	for (i=Sun;i<=Sat;i++)
	{
		printf("%d\n",i);
	}
}
