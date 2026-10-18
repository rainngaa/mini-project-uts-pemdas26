#include <stdio.h>

int main() {
    int nis;
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAKHIR;
    char grade;
    int c, status, i, jumlah;

    // ==================================================
    // MAHASISWA 2 — PERULANGAN FOR & PROSES DI DALAM PERULANGAN
    // ==================================================

    // Meminta pengguna memasukkan jumlah siswa
    do{
        printf("Masukkan jumlah siswa (max. 5): ");
        scanf("%d", &jumlah);
    } while(jumlah > 5 || jumlah < 1);

    // Mengulang proses sesuai jumlah siswa
    for (i = 1; i <= jumlah; i++) {

        // Menampilkan nomor siswa yang sedang diproses
        printf("\n================================\n");
        printf("       DATA SISWA KE-%d\n", i);
        printf("================================\n");

        /* ===============================================
        Mahasiswa 1 - Vannesa Sovilia Ferrari (3226600080)
        =============================================== */ 
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
        printf("\n--- DATA SISWA ke-%d ---\n", i);
        printf("NIS         : %ld\n", nis);
        printf("Nama        : ");
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Nilai Tugas : %.2f\n", nilaiTugas);
        printf("Nilai UTS   : %.2f\n", nilaiUTS);
        printf("Nilai UAS   : %.2f\n", nilaiUAS);

        /* ===============================================
        Mahasiswa 2 - Ngesti Neyza Sharafina Putri (3226600083)
        =============================================== */

        nilaiAKHIR = (nilaiTugas * 0.3) +
        (nilaiUTS * 0.3) +
        (nilaiUAS * 0.4);

        if (nilaiAKHIR >= 85) {
        grade = 'A';
        } else if (nilaiAKHIR >= 75) {
        grade = 'B';
        } else if (nilaiAKHIR >= 65) {
        grade = 'C';
        } else if (nilaiAKHIR >= 50) {
        grade = 'D';
        } else {
        grade = 'E';
        }

        /* Tidak lulus jika nilaiAKHIR kurang dari atau sama dengan 65 (grade C kebawah) */
        if (nilaiAKHIR <= 65)
            status = 0;
        else
            status = 1;

      /* ===============================================
      Mahasiswa 3 - Maria Inga Pramesti da Gomez (3226600135)
      =============================================== */
      printf("\n--- HASIL NILAI SISWA ---\n");
      printf("Nilai Akhir : %.2f\n", nilaiAKHIR);
      printf("Grade       : %c\n", grade);
      if (status == 1)
          printf("Keterangan  : LULUS\n");
      else
          printf("Keterangan  : TIDAK LULUS\n");
    }

    return 0;
}
