#include<stdio.h>
int main()
{
    int sum=0,i,n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        if (m>0) sum+=m;
    }
    printf ("%d",sum);
    
}
    

