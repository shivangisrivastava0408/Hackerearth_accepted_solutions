#include<stdio.h>
int main()
{
    int t,a,k,n;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        scanf("%d %d %d",&a,&k,&n);
        int p=0;
        p=p+(a+k*(n-1));
        printf("\n%d",p);
    }
    return 0;
    
}
