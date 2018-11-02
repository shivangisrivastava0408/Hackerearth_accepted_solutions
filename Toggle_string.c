#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    //char dup[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else
            str[i]=str[i]+32;
    }
    for(int i=0;i<strlen(str);i++)
        printf("%c",str[i]);
     return 0;
    
    
}
