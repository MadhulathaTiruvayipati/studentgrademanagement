#include<stdio.h>
int main()
{
  int n;
  float credits,gradepoints,totalcredits=0,totalgradepoints=0;
  float cgpa;
  printf("enter no of subjects:");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("enter credits for subjects %d:",i+1);
    scanf("%f",&credits);
    printf("enter gradepoints for subject %d:",i+1);
    scanf("%f",&gradepoints);
    totalcredits+=credits;
    totalgradepoints+=(gradepoints*credits);
  }
  cgpa=totalgradepoints/totalcredits;
  printf("CGPA:%f\n",cgpa);
  return 0;
}
