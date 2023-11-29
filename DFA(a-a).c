#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    printf("\nEnter the string :> \n");
    scanf("%s",str);
    if(str[0]=='a' && str[strlen(str)-1]=='a')
    {
        printf("\nThe given string >> %s accepts the DFA pattern",str);
    }
    else
    {
        printf("\nThe given string >> %s dose not accepts the DFA pattern",str);    
    }
}