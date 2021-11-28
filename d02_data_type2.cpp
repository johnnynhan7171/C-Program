#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //khai bao 3 bien bo nho [ly], [hoa], [sinh] kieu so nguyen 
    int ly, hoa, sinh;

    //nhap diem thi mon ly 
    printf(" - nhap diem thi mon ly: ");
    scanf("%d", &ly);

    //nhap diem thi mon hoa
    printf(" - nhap diem thi mon hoa: ");
    scanf("%d", &hoa);

    //nhap diem thi mon sinh 
    printf(" - nhap diem thi mon sinh: ");
    scanf("%d", &sinh);

    //tinh tong diem 
    int tong = ly+hoa+sinh; 

    //tinh diem binh quan 
    float binhQuan = tong / 3.0;

    //in ra man hinh diem tong va binh quan 
    printf(">> Tong Diem = %d, Binh Quan = %f \n", tong, binhQuan);
}