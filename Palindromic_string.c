#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char dup[100];    
    int j=0;
    int p=0;
    scanf("%s",str);
    for(int i=strlen(str)-1;i>=0;i--){
        dup[j]=str[i];
        j++;
    }
    for(int k=0;k<strlen(str);k++){
        if(str[k]==dup[k]){
            p+=1;
        }
    
    }
    if(p!=strlen(str)){
        printf("NO");
    }
    else
        printf("YES");
        
    return 0;  
        
    
}
