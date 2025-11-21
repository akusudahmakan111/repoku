#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void author(){
    system("cls");
    char title[] = "\n\n\t\t\t\t\t\tAUTHOR PROGRAM";
    char line[] = "\n\t\t\t\t============================================";
    for(int i = 0; title[i] != '\0'; i++){
        printf("%c", title[i]);
        Sleep(30);
    }

    for(int i = 0; line[i] != 0; i++){
        printf("%c", line[i]);
        Sleep(20);
    }

    const char* authors[] = {
        "\n\n\t\t\t\tNama : Petrus Damianus Feba Mahendra",
        "\n\t\t\t\tNIM  : 672024015",
        "\n\n\t\t\t\tNama : Nama kalian",
        "\n\t\t\t\tNIM  : Nim kalian",
        "\n\n\t\t\t\tNama : Nama kalian",
        "\n\t\t\t\tNIM  : Nim kalian",
        "\n\n\t\t\t\tNama : Nama kalian",
        "\n\t\t\t\tNIM  : Nim kalian",
        "\n\n\t\t\t\tNama : Nama kalian",
        "\n\t\t\t\tNIM  : Nim kalian"
    };

    for(int i = 0; i < sizeof(authors) / sizeof(authors[0]); i++){
        for(int j = 0; authors[i][j] != 0 ; j++){
            printf("%c", authors[i][j]);
            Sleep(20);
        }
    }

    printf("\n\n\t\t\t\t=============================================\n");
    printf("\n\t\t\t\t    Tekan tombol apapun untuk kembali...");
    getch();
    system("cls");
}

int pilih;

void menu(){
    printf("\n\n\n\n\t\t\t\t\t\t====== Menu ===\n");
    printf("\n\t\t\t\t\t\t1. Rumah Pola\n");
    printf("\n\t\t\t\t\t\t2. Restoran\n");
    printf("\n\t\t\t\t\t\t3. Batu Gunting Kertas\n");
    printf("\n\t\t\t\t\t\t4. Bendera\n");
    printf("\n\t\t\t\t\t\t5. Hotel\n");
    printf("\n\t\t\t\t\t\t6. Author\n");
    printf("\n\t\t\t\t\t\t7. Exit\n");
    printf("\n\t\t\t\t\t\tPilihan : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
    case 1:
        menu();
        break;
    case 2:
        menu();
        break;
    case 3:
        menu();
        break;
    case 4:
        menu();
        break;
    case 5:
        menu();
        break;
    case 6:
        author();
        menu();
        break;
    case 7:
        break;
    default:
        printf("Pilih anda tidak ada di menu, silahkan pilih lagi!\n");
        menu();
        break;
}
}

int main()
{
    char nama[100], check_nama[]="Admin";
    int pass, check_pass = 666;
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tUsername : ");
    scanf("%s", &nama);
    printf("\t\t\t\t\t\tPassword : ");
    scanf("%d", &pass);
    system("cls");

    if (nama[100] == check_nama[100] && pass == check_pass){
        printf("\n");
        menu();
    }else{
        printf("Username/password salah, coba lagi!\n");
        main();
    }

    return 0;
}
