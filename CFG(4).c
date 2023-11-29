#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("\nEnter a string :> ");
    scanf("%s", str);
    int l = strlen(str);
    for (int i = 0; i < l; i++) 
    {
        if (str[i] != '0' && str[i] != '1') 
        {
            printf("\nString not valid");
            return 0;
        }
    }
    if (l % 2 != 0) 
    {
        printf("\nThe given string >> %s does not accepts the CFG pattern",str);
        return 0;
    }
    int halfLength = l / 2;
    for (int i = 0; i < halfLength; i++) 
    {
        if (str[i] != '0') 
        {
            printf("\nThe given string >> %s does not accepts the CFG pattern",str);
            return 0;
        }
    }
    for (int i = halfLength; i < l; i++) 
    {
        if (str[i] != '1') 
        {
            printf("\nThe given string >> %s does not accepts the CFG pattern",str);
            return 0;
        }
    }
    printf("\nThe given string >> %s accepts the CFG pattern",str);
}