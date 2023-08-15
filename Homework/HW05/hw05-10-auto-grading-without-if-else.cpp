/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    #TODO #20 : fix this code without if else syntax.
    (กำหนดให้ข้อนี้ใช้คำสั่ง switch case ได้เท่านั้น)

    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/
#include <stdio.h>
int main()
{
    int score;
    printf("Test case:\n");
    printf("\tenter score:\n\t\t");
    scanf("t%d", &score);
    printf("\tOutput:\n");
    switch (score / 5)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        printf("\t\tF !\n");
        break;
    case 10:
        printf("\t\tD !\n");
        break;
    case 11:
        printf("\t\tD+ !\n");
        break;
    case 12:
        printf("\t\tC !\n");
        break;
    case 13:
        printf("\t\tC+ !\n");
        break;
    case 14:
        printf("\t\tB !\n");
        break;
    case 15:
        printf("\t\tB+ !\n");
        break;
    default:
        printf("\t\tA !\n");
        break;
    }
    return 0;
}