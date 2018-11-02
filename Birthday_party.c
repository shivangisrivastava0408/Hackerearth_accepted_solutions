#include<stdio.h>
int main()
{
    int n, p, c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&p,&c);
        if(c%p==0){
            printf("\nYes");
        }
        else{
            printf("\nNo");
        }
    }
}
