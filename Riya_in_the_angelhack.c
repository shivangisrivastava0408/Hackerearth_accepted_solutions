#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%3==0 && n%5==0) printf("AngelHack!");
    else if (n%5==0) printf("Hack");
    else if (n%3==0) printf("Angel");
    else printf("%d",n);
    return 0;
}
