#include <stdio.h>
#include <string.h>
int simulateNFA(char *str) 
{
    int currentState = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
    {
        if (currentState == 0 && str[i] == 'b') 
        {
            currentState = 1;
        } else if (currentState == 1 && str[i] == 'a') 
        {
            currentState = 2;
        }
    }
    return currentState == 2;
}
int main() {
    char str[100];
    printf("\nEnter a string :> ");
    scanf("%s", str);

    if (simulateNFA(str)) 
    {
        printf("\nThe given string >> %s accepted by the NFA",str);
    } else 
    {
        printf("\nThe given string >> %s not accepted by the NFA",str);
    }
}