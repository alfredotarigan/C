#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int n,input;
    char str[50];

    printf("\t===Batu Gunting Kertas ===\n");
    printf("Masukkan nama User : "); scanf("%s",str);
    printf("Nama User : %s, Selamat bermain ! \n",str);
    printf("Pilihan ( User ) \n");
    printf("1. Batu \n");
    printf("2. Gunting \n");
    printf("3. Kertas \n");
    printf("Input User ? (1-3): "); scanf("%d",&input);

    srand((unsigned)time(NULL));

    n = rand() % 3 + 1;

    if(input ==1 && n == 2 ){
        printf("%s Menang, Computer kalah.\n",str);
    }
    else if(input == 1 && n == 3){
        printf("%s kalah, Computer menang.\n",str);
    }
    else if(input == 1 && n == 1){
        printf("%s dan Computer imbang.\n",str);
    }
    else if (input == 2 && n == 1){
        printf("%s kalah dan Computer menang.\n",str);
    }
    else if (input == 2 && n == 2){
        printf("%s dan Computer imbang.\n",str);
    }
    else if(input == 2 && n == 3){
        printf("%s menang, Computer kalah.\n",str);
    }
    else if(input == 3 && n == 1){
        printf("%s menang, Computer kalah.\n",str);
    }
    else if (input == 3 && n == 2){
        printf("%s kalah, Computer menang.\n",str);
    }
    else if (input == 3 && n == 3){
        printf("%s dan computer imbang.\n",str);
    }
}