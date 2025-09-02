#include <stdio.h>

int main(){
     
    int  start, stop ;//กำหนดค่าเริ่มต้น

    printf("Enter start number: ");///รับค่าstart
    scanf("%d", &start);

    printf("Enter stop number: ");///รับค่าstop
    scanf("%d", &stop);

    // แสดงผลลัพธ์ตามที่โจทย์กำหนด
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("------------------\n");

    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {   ////ใช้ลูป forวนลำดับจาก start ไปจนถึง stop
                                           
        printf("%d ", i);
    }

    printf("\nThank you.\n");

    return 0;
























}
