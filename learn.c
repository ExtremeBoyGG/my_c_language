#include<stdio.h>
#include<stdlib.h>

int main()
{
// Deklarasi Variable
char nama[100][100],nim[100][100],lagi;
int ing[100],mat[100],fisk[100],i,x,total[100],rata[100],rm,ri,rf;

i=1;
ulang:
// Tampilan Menu Merekam Nilai
printf("Masukan Nama: ");
scanf("%s",&nama[i]);
printf("Masukan NIM : ");
scanf("%s",&nim[i]);
printf("\n---Silahkan Masukan Nilai---\n");
printf("Masukan Nilai Bahasa Inggris   : ");
scanf("%d",&ing[i]);
printf("Masukan Nilai Matematika       : ");
scanf("%d",&mat[i]);
printf("Masukan Nilai Fisika           : ");
scanf("%d",&fisk[i]);
printf("\n\nIngin Memasukan Data Kembali?\n");
printf("Masukan y/t: ");
scanf("%s",&lagi);
i++;x=i;
system("cls");
// Percabangan IF/ELSE
if(lagi=='y'||lagi=='Y')
goto ulang;
else
{
    rm=0;ri=0;rf=0;
    {printf("\t\t\t     DAFTAR NILAI MAHASISWA\n");
    printf("\t\t\t Universitas Singaperbangsa Karawang\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("|| No.||    Nama    ||    NIM   || Inggris || Matematika || Fisika || Total || Rata-rata ||\n");
    printf("||----||------------||----------||---------||------------||--------||-------||-----------||\n");}
for(i=1;i<x;i++){
    total[i]=ing[i]+mat[i]+fisk[i];
    rata[i]=total[i]/3;
    rm=rm+mat[i];
    ri=ri+ing[i];
    rf=rf+fisk[i];

    printf("|| %d  ||    %s   ||    %s   ||    %d   ||     %d     ||   %d   ||  %d  ||     %d    ||\n",i,nama[i],nim[i],ing[i],mat[i],fisk[i],total[i],rata[i]);}
    printf("||----||------------||----------||---------||------------||--------||-------||-----------||\n");
    printf("||        Rata-rata nilai       ||    %d   ||     %d     ||   %d   ||\n",ri/(x-1),rm/(x-1),rf/(x-1));
    printf("||------------------------------||---------||------------||--------||\n");
    printf("---------------------------------------------------------------------\n");
}
printf(" \n\t Program ini dibuat oleh kelompok 3 \n");
return 0;
}
