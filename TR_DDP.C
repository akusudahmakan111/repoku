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
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t#########################\n");
    printf("\t\t\t\t\t\t#       KELOMPOK 3      #\n");
    printf("\t\t\t\t\t\t#########################\n");
    printf("\t\t\t\t\t\t#1. Rumah Pola\t\t#\n");
    printf("\t\t\t\t\t\t#2. Restoran\t\t#\n");
    printf("\t\t\t\t\t\t#3. Batu Gunting Kertas #\n");
    printf("\t\t\t\t\t\t#4. Bendera\t\t#\n");
    printf("\t\t\t\t\t\t#5. Hotel\t\t#\n");
    printf("\t\t\t\t\t\t#6. Author\t\t#\n");
    printf("\t\t\t\t\t\t#7. Exit\t\t#\n");
    printf("\t\t\t\t\t\t#########################\n");
    printf("\t\t\t\t\t\tPilihan : ");
    scanf("%d", &pilih);
    system("cls");

    switch(pilih){
    case 1:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        menu();
        break;
    case 2:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        menu();
        break;
    case 3:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        menu();
        break;
    case 4:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        menu();
        break;
    case 5:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        menu();
        break;
    case 6:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        author();
        menu();
        break;
    case 7:
        break;
    default:
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\tPilihan anda tidak ada di menu, silahkan pilih lagi!\n");
        Sleep(2000);
        system("cls");
        menu();
        break;
}
}

int main()
{
    char nama[100], check_nama[]="Admin";
    int pass, check_pass = 666;

    system("color 1F");

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\tSelamat Datang di Tugas Rancang Kelompok 3!\n\n\n\n");
    Sleep(1500);
    printf("\t\t\t\t\t\tMohon Tunggu...");
    Sleep(2000);
    system("cls");

    Sleep(500);
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tUsername : ");
    scanf("%s", &nama);
    printf("\t\t\t\t\t\tPassword : ");
    scanf("%d", &pass);
    system("cls");

    if (strcmp(nama, check_nama) == 0 && pass == check_pass){
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLogin Berhasil!\n\n");
        Sleep(1500);
        printf("\t\t\t\t\t\Tekan apa saja untuk melanjutkan");
        getch();
        system("cls");
        Sleep(1000);
        menu();
    }else{
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tUsername/password salah, coba lagi!\n");
        Sleep(2000);
        system("cls");
        main();
    }

    return 0;
}
