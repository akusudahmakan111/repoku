#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

// BAGIAN BATU GUNTING KERTAS
void pvc()
{
    int user,komputer,ulang;
    system("cls");
    printf("\t\t\t\t\t+-----------------------------+\n");
    printf("\t\t\t\t\t|          PERMAINAN          |\n");
    printf("\t\t\t\t\t|     BATU GUNTING KERTAS     |\n");
    printf("\t\t\t\t\t+-----------------------------+\n");
    printf("\t\t\t\t\t|     PLAYER VS KOMPUTER      |\n");
    printf("\t\t\t\t\t+-----------------------------+\n");
    printf("\n\t\t\t\t\tMasukkan pilihan anda : \n");
    printf("\t\t\t\t\t1. Batu\n");
    printf("\t\t\t\t\t2. Gunting\n");
    printf("\t\t\t\t\t3. Kertas\n");
    printf("\t\t\t\t\t4. Keluar\n");
    printf("\t\t\t\t\tPilihan (1-4) : ");scanf("%d", &user);

    while(user<1 || user>4){
        Sleep(1000);
        printf("\x1b[1F");
        printf("\x1b[2K");
        printf("\t\t\t\t\tMasukkan ulang (1-4) : ");scanf("%d",&user);
    }

    if (user==4){
        printf("\t\t\t\t\tTerimakasih sudah bermain");
        Sleep(2000);
        system("cls");
    }

    srand(time(NULL));
    komputer=rand() %3+1;


    if (user >0 && user <4){
        printf("\t\t\t\t\tKomputer memilih: ");
        if (komputer==1) printf("Batu\n");
        else if (komputer==2) printf("Gunting\n");
        else printf("Kertas\n");

        if (user==komputer) {
        printf("\t\t\t\t\tSeri!\n");
        } else if ((user==1 && komputer==2) ||
            (user==2 && komputer==3) ||
            (user==3 && komputer==1)) {
        printf("\t\t\t\t\tKamu Menang!\n");
        }else{
        printf("\t\t\t\t\tKamu Kalah!\n");
        }

        printf("\n\t\t\t\t\tApakah ingin bermain lagi? (y/t) : "); scanf(" %c", &ulang);
        while(1){
            if (ulang == 'y' || ulang == 'Y'){
                pvc();
                break;
            }else if (ulang == 't' || ulang == 'T'){
                printf("\t\t\t\t\tTerimakasih sudah bermain..");
                Sleep(1000);
                system("cls");

                break;
            } else{
                printf("\x1b[2K");
                printf("\x1b[1F");
                printf("\n\t\t\t\t\tMasukkan ulang (y/t) : ");scanf("%c",&ulang);
            }
        }
    }
}

void pvp() {
    int player1, player2;
    char ulang;

    do {
        system("cls");
        printf("\t\t\t\t\t+-----------------------------+\n");
        printf("\t\t\t\t\t|          PERMAINAN          |\n");
        printf("\t\t\t\t\t|     BATU GUNTING KERTAS     |\n");
        printf("\t\t\t\t\t+-----------------------------+\n");
        printf("\t\t\t\t\t|      PLAYER VS PLAYER       |\n");
        printf("\t\t\t\t\t+-----------------------------+\n");
        printf("\n\t\t\t\t\tMasukkan pilihan Player 1 : \n");
        printf("\t\t\t\t\t1. Batu\n");
        printf("\t\t\t\t\t2. Gunting\n");
        printf("\t\t\t\t\t3. Kertas\n");
        printf("\t\t\t\t\t4. Keluar\n");
        printf("\t\t\t\t\tPilihan (1-4) : ");

        char ch;
        player1 = 0;

        while(1){
            ch = getch();
            if(ch == 13) break;
            if(ch >= '1' && ch <= '4'){
                player1 = ch - '0';
                printf("*");
                break;
            }
        }

        getch();
        if (player1 == 4){
            printf("\n\t\t\t\t\tTerimakasih sudah bermain...");
            Sleep(2000);
            system("cls");
            return;
        }

        Sleep(1000);
        system("cls");
        printf("\t\t\t\t\t+-----------------------------+\n");
        printf("\t\t\t\t\t|          PERMAINAN          |\n");
        printf("\t\t\t\t\t|     BATU GUNTING KERTAS     |\n");
        printf("\t\t\t\t\t+-----------------------------+\n");
        printf("\t\t\t\t\t|      PLAYER VS PLAYER       |\n");
        printf("\t\t\t\t\t+-----------------------------+\n");
        printf("\n\t\t\t\t\tMasukkan pilihan Player 2 : \n");
        printf("\t\t\t\t\t1. Batu\n");
        printf("\t\t\t\t\t2. Gunting\n");
        printf("\t\t\t\t\t3. Kertas\n");
        printf("\t\t\t\t\t4. Keluar\n");
        printf("\t\t\t\t\tPilihan (1-4) : ");

        char ch2;
        player2 = 0;

        while(1){
            ch2 = getch();
            if(ch2 == 13) break;
            if(ch2 >= '1' && ch2 <= '4'){
                player2 = ch2 - '0';
                printf("*");
                break;
            }
        }
        getch();

        if (player2 == 4){
            printf("\n\t\t\t\t\tTerimakasih sudah bermain...");
            Sleep(2000);
            system("cls");
            return;
        }


        if (player1==1){
        printf("\n\t\t\t\t\tPlayer 1 : Batu\n");
        }else if(player1==2) {
        printf("\n\t\t\t\t\tPLayer 1 : Gunting\n");
        }else{
        printf("\n\t\t\t\t\tPLayer 1 : Kertas\n");
        }

        if (player2==1){
        printf("\t\t\t\t\tPlayer 2 : Batu\n");
        }else if(player2==2) {
        printf("\t\t\t\t\tPLayer 2 : Gunting\n");
        }else{
        printf("\t\t\t\t\tPLayer 2 : Kertas\n");
        }

        if (player1 == player2) {
            printf("\n\t\t\t\t\tSeri!\n");
        }else if ((player1==1 && player2==2) ||
                 (player1==2 && player2==3) ||
                 (player1==3 && player2==1)) {
            printf("\n\t\t\t\t\tPlayer 1 Menang!\n");
        }else{
            printf("\n\t\t\t\t\tPlayer 2 Menang!\n");
        }

        printf("\n\t\t\t\t\tApakah ingin bermain lagi? (y/t) : ");
        scanf(" %c", &ulang);

    } while(ulang == 'y' || ulang == 'Y');
    printf("\n\t\t\t\t\tTerimakasih sudah bermain...");
    Sleep(2000);
    system("cls");
}

void menubgk()
{
    int pilihanmode;
    printf("\t\t\t\t\t+-----------------------------+\n");
    printf("\t\t\t\t\t|          PERMAINAN          |\n");
    printf("\t\t\t\t\t|     BATU GUNTING KERTAS     |\n");
    printf("\t\t\t\t\t+-----------------------------+\n\n");
    printf("\t\t\t\t\tSilahkan pilih mode permainan\n");
    printf("\t\t\t\t\t1. Player vs Komputer\n");
    printf("\t\t\t\t\t2. Player vs Player\n");
    printf("\t\t\t\t\t3. Kembali ke menu\n");
    printf("\t\t\t\t\tPilihan (1-3) : "); scanf("%d" ,&pilihanmode);

    switch (pilihanmode){
    case 1 :
        pvc();
        menubgk();
        break;
    case 2 :
        pvp();
        menubgk();
        break;
    case 3 :
        system("cls");
        break;
    default :
        system("cls");
        printf("\t\t\t\t\tMasukkan pilihan dengan benar!!\n\n");
        menubgk();
    }
}

// bAGIAN RUMAH POLA
void warna(int bg, int fg){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bg << 4) | fg);
}

void rumahpola()
{

    system("cls");
    int background = 1; // biru
    int tinggi;
    char pola;
    char ulang;
        system("color 1F");
        system("cls");
        printf("+==============================================+\n");
        printf("||                 Rumah Pola                 ||\n");
        printf("+==============================================+\n");
        printf("    Tentukan tinggi             : ");
        scanf(" %d", &tinggi);
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
            warna(background,6);
            for(int j = 1; j<=tinggi*3; j++){
                printf("%c ", pola);
            }
            printf("\n");
        }

        warna(background,7);

        Sleep(1500);
        printf("\nTekan apa saja untuk melanjutkan");
        getch();
        system("cls");
}

//BAGIAN RESTORAN
char nama_menu[10][30] = {
    "Nasi Goreng", "Mie Goreng", "Cap Cay", "Ayam Bakar", "Ikan Bakar",
    "Air Mineral", "Es Teh", "Es Jeruk", "Soda Gembira", "Es Kelapa"
};

int harga_menu[10] = {
    15000, 10000, 12000, 20000, 25000, 5000, 4000, 6000, 15000, 10000
};

int keranjang_idx[100];
int keranjang_qty[100];
long keranjang_total[100];
int jumlah_item = 0;
long total_tagihan = 0;


void tampilkan_menu_manual(){
    printf("                    Selamat datang di Restaurant kami\n");
    printf("                 Silahkan pilih menu yang anda inginkan :\n");

    printf("======================================================================\n");
    printf("MENU MAKANAN          :   MENU MINUMAN\n");
    printf("\n");
    printf("|NO.|  MAKANAN     |   HARGA     |   |NO.|  MINUMAN      |   HARGA     |\n");
    printf("==============================================================================\n");

    printf("|1. | Nasi Goreng  |   Rp 15.000 |   |6. | Air Mineral   |   Rp 5.000  |\n");
    printf("|2. | Mie Goreng   |   Rp 10.000 |   |7. | Es Teh        |   Rp 4.000  |\n");
    printf("|3. | Cap Cay      |   Rp 12.000 |   |8. | Es Jeruk      |   Rp 6.000  |\n");
    printf("|4. | Ayam Bakar   |   Rp 20.000 |   |9. | Soda Gembira  |   Rp 15.000 |\n");
    printf("|5. | Ikan Bakar   |   Rp 25.000 |   |10.| Es Kelapa     |   Rp 10.000 |\n");

    printf("\n");
    printf("55. Struk Pembayaran\n");
    printf("44. Reset Pilihan\n");
    printf("99. Keluar\n");

}

void proses_catat(int nomor, int qty){
    int idx = nomor - 1;
    long subtotal = (long)harga_menu[idx] * qty;

    keranjang_idx[jumlah_item] = idx;
    keranjang_qty[jumlah_item] = qty;
    keranjang_total[jumlah_item] = subtotal;

    total_tagihan += subtotal;
    jumlah_item++;
}

void cetak_struk(){
    long bayar = 0;
    long kembalian = 0;

    time_t t;
    struct tm *tmp;
    char waktu[50];
    time(&t);
    tmp = localtime(&t);
    strftime(waktu, sizeof(waktu), "%a %b %d %H:%M:%S %Y", tmp);

    if(jumlah_item == 0){
        system("cls");
        printf("\nBelum ada pesanan! Tekan Enter...");
        getchar();
        return;
    }

    system("cls");

    printf("PESANAN MAKANAN & MINUMAN\n");
    printf("Nama pesanan | Harga | Jumlah | Total\n");
    printf("====================================================\n");

    for(int i=0; i<jumlah_item; i++){
        int idx = keranjang_idx[i];
        printf("%-12s | Rp. %-6d | %-6d | Rp.%-8ld\n",
               nama_menu[idx], harga_menu[idx], keranjang_qty[i], keranjang_total[i]);
    }

    printf("====================================================\n");
    printf("Total harga Adalah = Rp%ld,-\n", total_tagihan);
    printf("====================================================\n");

    while(1){
        printf("Masukkan Uang bayar= ");
        if(scanf("%ld", &bayar) != 1){
            printf(">> Input salah! Masukkan angka.\n");
            while(getchar()!='\n');
            continue;
        }
        while(getchar()!='\n');

        if(bayar >= total_tagihan) break;
        else printf(">> Uang kurang! Coba lagi.\n\n");
    }

    kembalian = bayar - total_tagihan;
    printf("\nKembalian = Rp.%ld\n", kembalian);
    printf("Tekan Apa Saja Untuk Melihat Struck Pembayaran\n");
    printf("Press any key to continue . . .\n");
    getchar();

    system("cls");

    printf("----------------------------------------------------------------------\n");
    printf("|                                                                    |\n");
    printf("|                         Restaurant Kami                            |\n");
    printf("|                          TR ASDOS H                                |\n");
    printf("|                                                                    |\n");
    printf("| Nama Pesanan  | Harga Satuan | Jumlah | Total                      |\n");
    printf("|====================================================================|\n");

    for(int i=0; i<jumlah_item; i++){
        int idx = keranjang_idx[i];
        printf("| %-12s  | Rp. %-7d  | %-6d | Rp.%-10ld                |\n",
               nama_menu[idx], harga_menu[idx], keranjang_qty[i], keranjang_total[i]);
    }

    printf("| Total Keseluruhan = Rp.%-10ld                                    |\n", total_tagihan);
    printf("| Bayar             = Rp.%-10ld                                    |\n", bayar);
    printf("| Kembalian         = Rp.%-10ld                                    |\n", kembalian);
    printf("|                                                                    |\n");
    printf("|                              Thank You                             |\n");
    printf("| Waktu/Hari : %s                                   |\n", waktu);
    printf("| perhatian : Barang Yang dibeli tidak bisa dikembalikan             |\n");
    printf("|                                                                    |\n");
    printf("----------------------------------------------------------------------\n");

    printf("Tekan Enter untuk kembali ke menu utama...");
    getchar();
}

void restoran(){
    int pilihan = 0;
    int kuantitas = 0;
    char konfirmasi_keluar;

    system("cls");
    tampilkan_menu_manual();

    do {
        if(jumlah_item > 0){
             printf("\n================================================\n");
        }

        printf("\nMasukkan No Menu Yang Diinginkan      : ");

        if(scanf("%d", &pilihan) != 1){
            printf(">> Input salah!\n");
            while(getchar()!='\n');
            continue;
        }
        while(getchar()!='\n');

        if(pilihan >= 1 && pilihan <= 10){
            printf("\n%d. %s\n", pilihan, nama_menu[pilihan-1]);
            printf("Jumlah Pesanan : ");

            if(scanf("%d", &kuantitas) == 1 && kuantitas > 0){
                proses_catat(pilihan, kuantitas);
            } else {
                printf(">> Kuantitas salah.\n");
            }
            while(getchar()!='\n');

        } else if (pilihan == 44) {
            jumlah_item = 0;
            total_tagihan = 0;
            system("cls");
            tampilkan_menu_manual();

        } else if (pilihan == 55) {
            cetak_struk();
            jumlah_item = 0;
            total_tagihan = 0;
            system("cls");
            tampilkan_menu_manual();

        } else if (pilihan == 99) {
            system("cls");
            printf("Apakah anda yakin ingin keluar ??\n");
            printf("Tekan Y untuk Ya. Tekan apa saja untuk tidak\n");

            konfirmasi_keluar = getchar();

            while(getchar() != '\n' && getchar() != EOF);

            if (konfirmasi_keluar == 'Y' || konfirmasi_keluar == 'y') {
                printf("\nTerima kasih. Program Selesai.\n");
            } else {
                pilihan = 0;
                system("cls");
                tampilkan_menu_manual();
            }
        } else {
            printf(">> Kode tidak valid.\n");
        }

    } while (pilihan != 99);
}

// Bagian Bendera
#define RED "\033[41m"
#define WHITE "\033[47m"
#define BLUE "\033[44m"

void BenderaIndonesia(int tinggi) {
    int tinggiPerBagian = tinggi;
    int lebar = tinggi*4;

    for (int i = 0; i < tinggi*2; i++) {
        if (i < tinggiPerBagian) {
            printf(RED);
        } else {
            printf(WHITE);
        };

        for (int j = 0; j < lebar; j++) {
            printf(" ");
            Sleep(20);
        }
        printf(BLUE"\n");
    }
}

void Bendera() {
    int tinggi;
    char pilihan;
    do {
        system("cls");
        printf("===================================\n");
        printf("||         Bendera Indonesia     ||\n");
        printf("===================================\n");
        printf("Masukkan tinggi bendera: ");
        scanf("%d", &tinggi);
        printf("\nBendera Indonesia:\n\n");
        BenderaIndonesia(tinggi);
        printf("\n");
        printf("Pilihan:\n");
        printf("1. Ulang\n");
        printf("2. Exit\n");
        printf("Pilihan Anda: ");
        scanf(" %c", &pilihan);
    } while (pilihan == '1');
    system("cls");
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
        "\n\n\t\t\t\tNama : Nama kalian",
        "\n\t\t\t\tNIM  : Nim kalian",
        "\n\n\t\t\t\tNama : Mitchell Ardiza Wijayanto",
        "\n\t\t\t\tNIM  : 672025072",
        "\n\n\t\t\t\tNama : Mikhael Gusti Hamurdani",
        "\n\t\t\t\tNIM  : 672025064",
        "\n\n\t\t\t\tNama : Jethro Zelig Matalino",
        "\n\t\t\t\tNIM  : 672025083",
        "\n\n\t\t\t\tNama : Petrus Damianus Feba Mahendra",
        "\n\t\t\t\tNIM  : 672024015",
        "\n\n\t\t\t\tNama : Yehezkiel Donato Raharjo",
        "\n\t\t\t\tNIM  : 672025070"
        "\n\n\t\t\t\tNama : Johanes Theo Adrian",
        "\n\t\t\t\tNIM  : 672025061"
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
        restoran();
        system("cls");
        menu();
        break;
    case 3:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        system("cls");
        menubgk();
        menu();
        break;
    case 4:
        system("cls");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTunggu sebentar...");
        Sleep(2000);
        Bendera();
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
        printf("\t\t\t\t\t Tekan apa saja untuk melanjutkan");
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