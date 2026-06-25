#include<stdio.h>
int main()
{
  int num, rev=0,rem=0,org,i;

  printf("Enter the number\n");
  scanf("%d",&num);
  org=num;

  while(num)
  {
          rem=num%10;
          num=num/10;
          rev=rev*10+rem;

  }

  printf("%d ",rev);
  if(org==rev)
  {
    printf("The number is palindrome\n");
  }
  else
  {
    printf("Not palindrome\n");
  }


}