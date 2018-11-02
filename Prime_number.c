#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        int p=0;
        for(int j=2;j<=i;j++){
            if (i%j==0 && i!=j){
                p+=1;
                break;
            }
        }
            
        if (p==0)
                printf("%d ",i);
        }
        
    
    return 0;
}
