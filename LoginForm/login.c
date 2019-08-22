#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
    char username[25];
    char password[25];

    // db username & password
    char user_db[25] = "admin";
    char password_db[25] = "admin";

    int attempt = 0;

    bool z = true;

    while(z){
    printf("Enter your username : "); scanf("%s",username);
    printf("Enter your password : "); scanf("%s",password);

    if(strcmp(username,user_db) == 0 && strcmp(password,password_db) == 0){
        printf("Login successful \n");
         z = false;
    }
    else{
        printf("Password not match !! \n");
        attempt++;
        if(attempt == 3){
            printf("PIN Block! \n");
             z = false;
        }
    }
    }
}
