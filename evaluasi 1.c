#include <stdio.h>
#include <string.h>

//Nama : Ajeng Febriana Rahmawati
//NIM : 672019323
struct data {
    char gender[10];
    char nama[100];
    int umur;
    int tb;
    float bb;
};
void main(void)
{
// struct data db1;
    int pilihan;
    do {
        system("cls");
        printf("  MENU \n ------ \n");
        printf("1. Isi Data\n");
        printf("2. Lihat Data\n");
        printf("3. Selesai\n");
        printf("Masukkan pilihan : ");
        scanf("%d",&pilihan);
        switch(pilihan) {
    case 1 :
        printf("Gender : ");
        scanf("%s",&db1.gender);
        printf("Nama : ");
        scanf("%s",&db1.nama);
        printf("Umur : ");
        scanf("%i",&db1.umur);
        printf("Tinggi badan : ");
        scanf("%i",&db1.tb);
        printf("Berat badan : ");
        scanf("%f",&db1.bb);
        break;
    case 2 :
        printf("Gender : %s\n", db1.gender);
        printf("Nama : %s\n", db1.nama);
        printf("Umur : %i\n", db1.umur);
        printf("Tinggi badan : %i\n", db1.tb);
        printf("Berat badan : %.2f\n", db1.bb);
        getch();
        break;
    default :
        printf("Keluar");
        }
    } while (pilihan!=3);
}
