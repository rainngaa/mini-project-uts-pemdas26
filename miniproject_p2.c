#include <stdio.h>

int main() {
    char nis[20], nama[50];
    float tugas, uts, uas, nilaiAkhir;
    char grade;

    printf("Masukkan NIS         : ");
    scanf("%s", nis);

    printf("Masukkan nama siswa  : ");
    scanf("%s", nama);

    printf("Masukkan nilai Tugas : ");
    scanf("%f", &tugas);

    printf("Masukkan nilai UTS   : ");
    scanf("%f", &uts);

    printf("Masukkan nilai UAS   : ");
    scanf("%f", &uas);

    nilaiAkhir = (tugas * 0.3) +
                 (uts * 0.3) +
                 (uas * 0.4);

    if (nilaiAkhir >= 85) {
        grade = 'A';
    } else if (nilaiAkhir >= 75) {
        grade = 'B';
    } else if (nilaiAkhir >= 65) {
        grade = 'C';
    } else if (nilaiAkhir >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    printf("\n--- HASIL NILAI SISWA ---\n");
    printf("NIS         : %s\n", nis);
    printf("Nama        : %s\n", nama);
    printf("Nilai Akhir : %.2f\n", nilaiAkhir);
    printf("Grade       : %c\n", grade);

    return 0;
}
