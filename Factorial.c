#include<stdio.h>
int main()
{
    int a,fact=1;
    scanf("%d",&a);
    for(int i=2;i<=a;i++){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}
