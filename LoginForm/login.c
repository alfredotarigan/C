#include <stdio.h>k
#include <string.h>
#include <stdbool.h>

int main(){

    char username[25];
    int attempt = 0;
    bool z = true;

    while(z){
    printf("Masukkan username anda : "); scanf("%s",username);
    if(strcmp(username,"Alfredo") == 0){
        printf("Anda berhasil login \n");
         z = false;
    }
    else{
        printf("Anda tidak berhasil login! \n");
        attempt++;
        if(attempt == 3){
            printf("PIN anda telah di blokir,silahkan hubungi ke kantor terdekat.\n");
             z = false;
        }
    }
    }
}