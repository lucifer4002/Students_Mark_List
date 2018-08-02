#include<stdio.h>
struct stud
{
	int rno;
	char name[20];
	float m1,m2,m3;
};
int main()
{
	int i;
	float total[5];
	struct stud s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Roll_no,Name,Marks of Three subjects of %d student\n",i+1);
		scanf("%d%s%f%f%f",&s[i].rno,s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
	}
	for(i=0;i<5;i++)
	{
		 total[i]=s[i].m1+s[i].m2+s[i].m3;
		 
	}
	printf("\nRoll_no\tName\tTotal\n");
	printf("----------------------------\n");
	for(i=0;i<5;i++)
	printf("%d\t%s\t%f\n",s[i].rno,s[i].name,total[i]);
	return 0;
}
