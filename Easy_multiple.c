#include<stdio.h>
int main()
{
    long long int t,n,i,j,sum;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld",&n);
        sum=0;
        for(int j=1;j<n;j++){
            if (j%3==0 || j%5==0) sum+=j;
        }
        printf("\n%lld",sum);
        
    }
    return 0;
}
