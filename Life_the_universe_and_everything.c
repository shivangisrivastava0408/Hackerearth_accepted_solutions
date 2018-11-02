#include<stdio.h>
int main()
{
    int p;
    for(int i=0;i<100000;i++){
        scanf("%d",&p);
        if (p!=42)
        printf("\n%d",p);
        else
        break;
    }
    return 0;
}
