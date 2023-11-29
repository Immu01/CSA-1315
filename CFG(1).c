#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    printf("\nEnter the string :> \n");
    scanf("%s",str);
    if(str[0]=='0' && str[strlen(str)-1]=='1')
    {
        printf("\nThe given string >> %s accepts the CFG pattern",str);
    }
    else
    {
        printf("\nThe given string >> %s dose not accepts the CFG pattern",str);    
    }
}