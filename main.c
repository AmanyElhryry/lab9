#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
   int x ,y=0, z=0,i=0 ;
   printf("Enter binary number: ");
   scanf("%d",&x);
 while(x!=0){
        y=x%10;
        z+=y*pow(2,i);
        x=x/10;
        i++;
 }
 printf("%d",z);
    return 0;
}
