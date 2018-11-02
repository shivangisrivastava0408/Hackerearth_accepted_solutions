#include<stdio.h>
int main()
{
    int L,N,W,H;
    scanf("%d%d",&L,&N);
    for(int i=1;i<=N;i++){
        scanf("%d%d",&W,&H);
        if (W<L || H<L)
            printf("\nUPLOAD ANOTHER");
        else {
            if(W==H)
            printf("\nACCEPTED");
            else 
            printf("\nCROP IT");
        }
      //  else{
        //    printf("crop it");
        }
        
    
    
    return 0;
}
