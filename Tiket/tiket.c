#include <stdio.h>
#include <stdbool.h>

int main (){

    int nomorbangku;
    bool z = true;

    while(z){
    printf("\tTiket Bioskop \n");
    printf(" 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | \n");
    printf(" 9  | 10 | 11 | 12 | 13 | 14 | 15 | 16 | \n");
    printf(" 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | \n");
    printf("\n");
    printf("Masukkan pemilihan nomor bangku : "); scanf("%d",&nomorbangku);
    printf("\n");

    if(nomorbangku != 0  && nomorbangku <= 24){
        printf("Anda telah memilih bangku nomor %d",nomorbangku);
        printf("\n");
    }
    else{
        printf("Nomor bangku tidak ada. \n");
        z = false;
    }

    }

}
