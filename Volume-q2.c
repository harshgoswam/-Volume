#include<stdio.h>

struct Marks
{
    int  roll_no;
    char  name [100];
    int  chem_marks, maths_marks , phy_marks;
    
};

int main()
{
   int n,i;
   float percentage;
   struct Marks marks [5];
   
   printf("Enter size:");
   scanf("%d",&n);

   for(i=0;i<5;i++)
   {
        printf("Enter roll no. :\n");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name :\n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks :\n");
        scanf("%d", &marks[i].chem_marks);
        printf("Enter Maths marks :\n");
        scanf("%d", &marks[i].maths_marks);
        printf("Enter Physics marks :\n");
        scanf("%d", &marks[i].phy_marks);
    }
    for (i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
	    percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)*100/300;
	    
	   	printf("\nName=%s\nRoll-no=%d\nChemestry Marks=%d\nMaths Marks=%d\nPhysics Marks=%d\n",
		marks[i].name,marks[i].roll_no,marks[i].chem_marks,marks[i].maths_marks,marks[i].phy_marks);

	    printf("Percentage : %0.2f\n", percentage);	}
}
