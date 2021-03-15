//Nama:Henry Glorio Tampemawa
//MID EXAM
#include <stdio.h>
#include <conio.h>

int main()

{


int Nilai_Assigment,Nilai_Quiz,Nilai_Attendance,Nilai_Mid Exam,Nilai_Final Exam;

float Nilai_rata_mahasiswa;

char grade;

//proses input untuk 5 buah nilai

printf(“Menghitung Nilai Rata Mahasiswa\n”);

printf(“===============================\n”);

printf(“Masukan nilai Assigment        :”);scanf(“%d”,&Nilai_Assigment);

printf(“Masukan nilai Quiz             :”);scanf;(“%d”,&Nilai_Quiz);

printf(“Masukan nilai Attendance       :”);scanf(“%d”,&Nilai_Attendance);

printf(“Masukan nilai Mid Exam         :”);scanf(“%d”,&Nilai_Mid Exam);

printf(“Masukan nilai Final Exam       :”);scanf(“%d”,&Nilai_Final Exam);


//proses penghitungan nilai

Nilai_rata_mahasiswa=30%*&Nilai_Assigment+25%*&Nilai_Quiz+

10%*&Nilai_Attendance+15%*&Nilai_Mid Exam+

15%*&Nilai_Final Exam;

//output nilai Total

printf(“Total = %.2f\n”,Nilai_rata_mahasiswa );

//proses penggolongan grade nilai

if (Nilai_rata_mahasiswa>=91){grade=’A’;}

else if (Nilai_rata_mahasiswa>=75&&Nilai_rata_mahasiswa<78){grade=’B’;}

else if (Nilai_rata_mahasiswa>=78&&Nilai_rata_mahasiswa<83){grade=’A-’;}


//proses output grade nilai

printf( “grade nilai final = %c”, grade);

getch();

return 0;

}
