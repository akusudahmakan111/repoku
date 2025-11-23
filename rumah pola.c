#include <stdio.h>

int main()
{
    int tinggi;
    char pola;
    char ulang;
//        system("color 4F");
  //      system("cls");
        printf("+==============================================+\n");
        printf("||                 Rumah Pola                 ||\n");
        printf("+==============================================+\n");
        printf("    Tentukan tinggi             : ");
        scanf("%d", &tinggi);
        printf("    Masukkan Bahan Rumah        : ");
        scanf(" %c", &pola);

        for (int i = 1; i<=tinggi; i++){
            for (int j = i; j<tinggi; j++){
                printf(" ");
            }
            for (int j = 1; j<=i; j++){
                printf("%c ", pola);
            }
            for(int j = 1; j<=tinggi*2; j++){
                printf("%c ", pola);
            }
            printf("\n");
        }

        for(int i = 1; i<=tinggi; i++){
            for(int j = 1; j<=tinggi; j++){
                printf("%c ", pola);
            }
            for(int j = 1; j<=tinggi*2; j++){
                printf("%c ", pola);
            }
            printf("\n");
        }
        return 0;
}



