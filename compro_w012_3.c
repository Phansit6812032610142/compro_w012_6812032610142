#include <stdio.h>

// ฟังก์ชัน doubleArray
// arr = ตัวชี้ (pointer) ที่ชี้ไปยัง array
// size = ขนาดของ array (จำนวนข้อมูลใน array)
void doubleArray(int *arr, int size) {
    // ใช้ for loop วนซ้ำตั้งแต่ i = 0 จนถึง i < size
    for (int i = 0; i < size; i++) {
        // arr[i] หมายถึงข้อมูลตำแหน่งที่ i ใน array
        // คูณค่าด้วย 2 แล้วเก็บกลับไปที่ arr[i]
        arr[i] = arr[i] * 2;
    }
}

int main() {
    // ประกาศ array ที่ชื่อว่า all มีสมาชิก 5 ตัว คือ 1, 2, 3, 4, 5
    int all[] = {1, 2, 3, 4, 5};

    // size = จำนวนสมาชิกใน array all
    int size = 5;

    // แสดงค่าก่อนแก้ไข
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", all[i]);   // แสดงค่าทีละตัว
    }
    printf("\n");

    // เรียกใช้ฟังก์ชัน doubleArray
    // ส่ง array all และจำนวนสมาชิกไป
    doubleArray(all, size);

    // แสดงค่าหลังแก้ไข
    printf("After: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", all[i]);   // ค่าจะเปลี่ยนเป็นตัวคูณ 2
    }
    printf("\n");

    return 0; // จบโปรแกรม
}
