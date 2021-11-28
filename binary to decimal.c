# include <stdio.h>
#include<math.h>
int main()
{
    int i=0,l_num,num,dec=0,rem;
    printf("Enter a binary number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        l_num=num%10;
        dec+=l_num*pow(2,i);
        num=num/10;
        i++;
    }
    printf("The decimal number is %d",dec);
        
    return 0;
}