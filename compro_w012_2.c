#include <stdio.h>

// ฟังก์ชัน swap ใช้ pointer รับค่ามา 2 ตัว
// *a และ *b คือการอ้างถึงค่าจริงของตัวแปรที่ส่งเข้ามา
void swap(int *a, int *b) {
    int temp;   // ตัวแปรชั่วคราวไว้เก็บค่า

    temp = *a;  // เก็บค่าของ a ไว้ใน temp
    *a = *b;    // เอาค่าของ b ใส่ใน a
    *b = temp;  // เอาค่าที่เก็บไว้ใน temp ใส่กลับไปใน b
}

int main() {
    int a = 5, b = 10;   // ประกาศตัวแปร a และ b พร้อมกำหนดค่าเริ่มต้น

    // แสดงค่าก่อนสลับ
    printf("Before swap: a = %d, b = %d\n", a, b);

    // เรียกใช้ฟังก์ชัน swap โดยส่ง address ของ a และ b เข้าไป
    swap(&a, &b);

    // แสดงค่าหลังสลับ
    printf("After  swap: a = %d, b = %d\n", a, b);

    return 0;   // จบโปรแกรม
}
