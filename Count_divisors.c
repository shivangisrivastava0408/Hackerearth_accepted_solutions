#include<stdio.h>
int main()
{
    int l,r,k,count;
    scanf("%d%d%d",&l,&r,&k);
    count=0;
    for(int i=l;i<=r;i++){
        if(i%k==0)
            count+=1;
    }
    printf("%d",count);
    return 0;
}
