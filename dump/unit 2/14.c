#include <stdio.h>
int main()
{
    char username;
    int password;
    printf("Username:");
    scanf("%c", &username);
    printf("Password:");
    scanf("%d", &password);
    if (username == 'a')
    {
        if (password == 12345)
         {
            printf("Login Successful");
         }
        else
        {
            printf("Password is incorrect, Try again. ");
        }
    }  
        else
        {
            printf("Username is incorrect,Try again.");
        }
    return 0;
}