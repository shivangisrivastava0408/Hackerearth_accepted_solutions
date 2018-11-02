#include<stdio.h>
#include<string.h>
int main()
{
    int p=0;
    char str[1000];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        p+=str[i]-96;
    }
    printf("%d",p);
}
