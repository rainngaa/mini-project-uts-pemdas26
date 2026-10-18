#include <stdio.h>

int main() {
    long nis;
    float nilaiTugas, nilaiUTS, nilaiUAS;
    char ulang;
    int c;

    do {
        /* Input NIS (harus angka positif) */
        do {
            printf("\nMasukkan NIS         : ");
            if (scanf("%ld", &nis) != 1) {
                while (getchar() != '\n');
                nis = -1;
            }
            if (nis <= 0)
                printf("NIS harus berupa angka positif.\n");
        } while (nis <= 0);

        /* Input nilai + validasi 0-100 (do-while) */
        do {
            printf("Masukkan nilai Tugas : ");
            if (scanf("%f", &nilaiTugas) != 1) {
                while (getchar() != '\n');
                nilaiTugas = -1;
            }
            if (nilaiTugas < 0 || nilaiTugas > 100)
                printf("Nilai harus 0 - 100.\n");
        } while (nilaiTugas < 0 || nilaiTugas > 100);

        do {
            printf("Masukkan nilai UTS   : ");
            if (scanf("%f", &nilaiUTS) != 1) {
                while (getchar() != '\n');
                nilaiUTS = -1;
            }
            if (nilaiUTS < 0 || nilaiUTS > 100)
                printf("Nilai harus 0 - 100.\n");
        } while (nilaiUTS < 0 || nilaiUTS > 100);

        do {
            printf("Masukkan nilai UAS   : ");
            if (scanf("%f", &nilaiUAS) != 1) {
                while (getchar() != '\n');
                nilaiUAS = -1;
            }
            if (nilaiUAS < 0 || nilaiUAS > 100)
                printf("Nilai harus 0 - 100.\n");
        } while (nilaiUAS < 0 || nilaiUAS > 100);

        while (getchar() != '\n');   /* buang sisa Enter */

        /* Menampilkan data siswa.
           Nama tidak disimpan (tanpa array), jadi diketik langsung
           di baris "Nama" dan tampil di layar saat diketik. */
        printf("\n--- DATA SISWA ---\n");
        printf("NIS         : %ld\n", nis);
        printf("Nama        : ");
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Nilai Tugas : %.2f\n", nilaiTugas);
        printf("Nilai UTS   : %.2f\n", nilaiUTS);
        printf("Nilai UAS   : %.2f\n", nilaiUAS);

        /* Remedial jika nilai UTS atau UAS kurang dari 50 */
        if (nilaiUTS < 50 || nilaiUAS < 50)
            printf("Keterangan  : REMEDIAL\n");
        else
            printf("Keterangan  : Tidak remedial\n");

        /* Perulangan proses */
        printf("\nInput siswa lain? (y/n): ");
        scanf(" %c", &ulang);
        while (getchar() != '\n');
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
