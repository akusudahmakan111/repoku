#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

// NAGIAN RUMAH POLA
void warna(int bg, int fg){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bg << 4) | fg);
}

void rumahpola()
{

    system("cls");
    int background = 2; // hijau

    int tinggi;
    char pola;
    char ulang;
        system("color 2F");
        system("cls");
        printf("+==============================================+\n");
        printf("||                 Rumah Pola                 ||\n");
        printf("+==============================================+\n");
        printf("    Tentukan tinggi             : ");
        scanf("%d", &tinggi);
        printf("    Masukkan Bahan Rumah        : ");
        scanf(" %c", &pola);
        printf("\n\n");


        for (int i = 1; i<=tinggi; i++){
            for (int j = i; j<tinggi; j++){
                printf(" ");
            }
            warna(background,14);
            for (int j = 1; j<=i; j++){
                printf("%c ", pola);
            }
            warna(background,4);
            for(int j = 1; j<=tinggi*3; j++){
                printf("%c ", pola);
            }
            printf("\n");
        }

        for(int i = 1; i<=tinggi; i++){
                warna(background,15);
            for(int j = 1; j<=tinggi; j++){
                printf("%c ", pola);
            }
            warna(background,5);
            for(int j = 1; j<=tinggi*3; j++){
                printf("%c ", pola);
            }
            printf("\n");
        }

        warna(background,7);

}


// BAGIAN PROGRAM HOTEL
#define MAX 100

typedef struct {
    char nama_tamu[50];
    int nomor_kamar;
    int lama_menginap;
    char waktu_pesan[40];
    char waktu_update[40];
} Tamu;

Tamu daftar_tamu[MAX];
int banyaktamu = 0;

void data_waktu(char *buffer){
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    strftime(buffer, 40, "%a %b %d %H:%M:%S %Y", t);
}

int cari_index(char *cari_nama){
    for(int i = 0; i < banyaktamu; i++){
        if(strcmp(daftar_tamu[i].nama_tamu, cari_nama) == 0){
            return i;
        }
    }
    return -1;
}

void pause_hotel(){
    printf("Tekan tombol apapun untuk keluar... \n");
    getchar();
    getchar();
}

void loading_hotel(){
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Loading...");
    Sleep(1000);
    system("cls");
}

void tambah_tamu(){
    loading_hotel();

    printf("=== TAMBAH TAMU BARU ===\n");
    printf("Masukkan nama tamu: ");
    scanf(" %[^\n]", daftar_tamu[banyaktamu].nama_tamu);

    printf("Masukkan nomor kamar: ");
    scanf("%d", &daftar_tamu[banyaktamu].nomor_kamar);

    printf("Masukkan lama menginap: ");
    scanf("%d", &daftar_tamu[banyaktamu].lama_menginap);

    data_waktu(daftar_tamu[banyaktamu].waktu_pesan);
    data_waktu(daftar_tamu[banyaktamu].waktu_update);

    banyaktamu++;

    printf("\n");
    printf("Tamu berhasil ditambahkan!\n");
    pause_hotel();
    loading_hotel();
}

void lihat_tamu(){
    loading_hotel();
    printf("=== DAFTAR TAMU HOTEL ===\n");
    printf("+----+----------------------+-------+---------------+-----------------------------+-----------------------------+\n");
    printf("| No | Nama Tamu            | Kamar | Lama Menginap | Waktu Pemesanan             | Terakhir Update             |\n");
    printf("+----+----------------------+-------+---------------+-----------------------------+-----------------------------+\n");

    if (banyaktamu == 0){
        printf("Tidak ada tamu di hotel.\n");
    }else{
        for(int i = 0; i < banyaktamu; i++){
            printf("| %-2d | %-20s | %-5d | %-13d | %-27s | %-27s |\n",
                i + 1,
                daftar_tamu[i].nama_tamu,
                daftar_tamu[i].nomor_kamar,
                daftar_tamu[i].lama_menginap,
                daftar_tamu[i].waktu_pesan,
                daftar_tamu[i].waktu_update
            );
        }
    }

    printf("+----+----------------------+-------+---------------+-----------------------------+-----------------------------+\n");
    pause_hotel();
    loading_hotel();
}

void ubah_menginap(){
    loading_hotel();
    if(banyaktamu == 0){
        printf("Tidak ada tamu untuk diubah.\n");
        pause_hotel();
        return;
    }

    char cari[50];
    printf("Masukkan nama tamu yang ingin diubah: ");
    scanf(" %[^\n]", cari);

    int index = cari_index(cari);

    if(index == -1){
        printf("Tamu dengan nama %s tidak ditemukan.\n", cari);
        pause_hotel();
        return;
    }

    printf("Lama menginap saat ini: %d\n", daftar_tamu[index].lama_menginap);
    printf("Masukkan lama menginap baru: ");
    scanf("%d", &daftar_tamu[index].lama_menginap);

    data_waktu(daftar_tamu[index].waktu_update);

    printf("\n Lama menginap berhasil diubah.\n");
    pause_hotel();
    loading_hotel();
}

void hapus_tamu(){
    loading_hotel();
    if(banyaktamu == 0){
        printf("Tidak ada tamu untuk diubah.\n");
        pause_hotel();
        return;
    }

    char cari[50];
    printf("Masukkan nama tamu yang ingin Check Out / dihapus : ");
    scanf(" %[^\n]", cari);

    int index = cari_index(cari);

    if(index == -1){
        printf("Tamu dengan nama %s tidak ditemukan.\n", cari);
        pause_hotel();
        return;
    }

    for(int i = index; i < banyaktamu - 1; i++){
        daftar_tamu[i] = daftar_tamu[i + 1];
    }

    banyaktamu--;

    printf("\n Tamu '%s' berhasil dihapus dari daftar.\n", cari);
    pause_hotel();
    loading_hotel();
}

void hotel(){
    int menu;

    do{
        system("cls");
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\t==============================\n");
        printf("\t\t\t\t\t\t    PROGRAM HOTEL SEDERHANA   \n");
        printf("\t\t\t\t\t\t==============================\n");
        printf("\t\t\t\t\t\t1. Tambah Tamu\n");
        printf("\t\t\t\t\t\t2. Lihat Semua Tamu\n");
        printf("\t\t\t\t\t\t3. Ubah Lama Menginap\n");
        printf("\t\t\t\t\t\t4. Check-Out / Hapus Tamu\n");
        printf("\t\t\t\t\t\t5. Kembali\n");
        printf("\t\t\t\t\t\t==============================\n");
        printf("\t\t\t\t\t\tPilih menu: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1: tambah_tamu(); break;
        case 2: lihat_tamu(); break;
        case 3: ubah_menginap(); break;
        case 4: hapus_tamu(); break;
        case 5 :
            printf("Keluar dari program...\n");
            break;
        default:
            printf("Menu tidak valid!\n");
        }

    } while (menu != 5);
    loading_hotel();
}

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
        rumahpola();
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
        hotel();
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
