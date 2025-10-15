#include<stdio.h>
#include<string.h>
struct Student
{
  int roll_no;
  char name[20];
  int m1,m2,m3;
  int tm;
};
int main()
{
  int n;
  struct Student loop[10];
  printf("Enter number of students: ");
  scanf("%d",&n);
  
  for(int i=0; i<n; i++)
  {
    printf("Enter details of student %d\n",i+1);
    
    printf("\nName: ");
    scanf("%s",loop[i].name);
    
    printf("Roll Number: ");
    scanf("%d",&loop[i].roll_no);
    
    printf("\nMarks in 3 subjects: ");
    scanf("%d%d%d",&loop[i].m1,&loop[i].m2,&loop[i].m3);
    
    loop[i].tm = loop[i].m1 + loop[i].m2 + loop[i].m3;
  }
  
  printf("RollNo\tName\tSub1\tSub2\tSub3\tTotal\n");
  for(int i=0; i<n; i++)
  {
    printf("%d\t%s\t%d\t%d\t%d\t%d\n",loop[i].roll_no,loop[i].name,loop[i].m1,loop[i].m2,loop[i].m3,loop[i].tm);
  }
  
  return 0;
}


