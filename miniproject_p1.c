/* Kelompok 7 - Sistem Pengelolaan Nilai Sekolah
   Bagian 1: Data Siswa & Input (Sena) - Bahasa C */

#include <stdio.h>
#include <string.h>

int main() {
    char nis[20], nama[50];
    float nilaiTugas, nilaiUTS, nilaiUAS;
    char ulang;

    do {
        /* Input data siswa */
        printf("\nMasukkan NIS         : ");
        scanf("%19s", nis);
        getchar();
        printf("Masukkan nama siswa  : ");
        fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = '\0';

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

        /* Menampilkan data siswa */
        printf("\n--- DATA SISWA ---\n");
        printf("NIS         : %s\n", nis);
        printf("Nama        : %s\n", nama);
        printf("Nilai Tugas : %.2f\n", nilaiTugas);
        printf("Nilai UTS   : %.2f\n", nilaiUTS);
        printf("Nilai UAS   : %.2f\n", nilaiUAS);

        /* Remedial jika nilai UTS atau UAS kurang dari 50 */
        if (nilaiUTS < 50 && nilaiUAS < 50)
            printf("Keterangan  : REMEDIAL (UTS dan UAS)\n");
        else if (nilaiUTS < 50)
            printf("Keterangan  : REMEDIAL (UTS)\n");
        else if (nilaiUAS < 50)
            printf("Keterangan  : REMEDIAL (UAS)\n");
        else
            printf("Keterangan  : Tidak remedial\n");

        /* Perulangan proses */
        printf("\nInput siswa lain? (y/n): ");
        scanf(" %c", &ulang);
        getchar();
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
