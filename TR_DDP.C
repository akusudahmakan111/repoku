#include <stdio.h>

int pilih;

void menu(){
    printf("=== Menu ===\n");
    printf("1. Rumah Pola\n");
    printf("2. Restoran\n");
    printf("3. Batu Gunting Kertas\n");
    printf("4. Bendera\n");
    printf("5. Hotel\n");
    printf("6. Author\n");
    printf("7. Exit\n");
    printf("Pilihan : ");
    scanf("%d", &pilih);

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
    printf("Username : ");
    scanf("%s", &nama);
    printf("Password : ");
    scanf("%d", &pass);

    if (nama[100] == check_nama[100] && pass == check_pass){
        printf("\n");
        menu();
    }else{
        printf("Username/password salah\n");
        main();
    }

    return 0;
}
