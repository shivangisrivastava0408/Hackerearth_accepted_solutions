#include<stdio.h>
int main()
{
    long long int arr[10],n,i,m;
    long long int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        if(1<=m && m<=10000000000)
            arr[i]=m;
    }
    for(i=0;i<n;i++) sum+=arr[i];
    printf("%lld",sum);
    return 0;
}
