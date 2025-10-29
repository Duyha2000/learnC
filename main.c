#include <stdio.h>

int main(void)
{
    // Data types, input, output https://docs.google.com/document/d/1kdC5oPRjuIz4HdHA5GPfltnDnFRjW7iijZf49CjW0CE/edit?tab=t.0
    // Condition: https://docs.google.com/document/d/1n4n52y7RjgHDgp8qLMpNg1Fqi0CQp2zodFrFjWFNrOk/edit?tab=t.x7e7enit4fk8

    // data types:
    // int (4 byte) - long (4,5,6,7,8) ->
    // float - double (*) -> 1.0f
    // char x = 'd' , 'e', 'f' ( 1 byte)
    // String - char [30] string , String
    // boolean - > 0: false | 1: true
    // Cú pháp (Syntax): <data_type> <variable_name> [= initial_value];
    // int x = 4;
    // printf("%d \n", x);
    // double y = 5.59393;
    // printf("%.2f", y);
    // char m = 'd';
    // printf("\n%c", m);

    // scanf
    // int a; // [- - - -] xx0001 xx0002 xx0003 xx0004
    // scanf("%d", &a);
    // printf("%d", a);
    /*
     https://docs.google.com/document/d/1kdC5oPRjuIz4HdHA5GPfltnDnFRjW7iijZf49CjW0CE/edit?tab=t.0
     */
    // int a, b; // 5 | 3
    // scanf("%d %d", &a, &b);
    // printf("%d", a + b);

    // + - * / %
    // 31 : 4 = 7 du 3
    //  31 % 4 = 3 || 31 / 4 = 7
    // double r;
    // scanf("%lf", &r); // %lf -> input double
    // const double PI = 3.14; // const: hang so
    // printf("Perimeter is: %.2f \n", 2 * PI * r);
    // printf("Area is: %.2f", PI * r * r);
    // double a, b;
    // scanf("%lf %lf", &a, &b);
    // printf("Perimeter is: %2f \n", 2 * a + 2 * b);
    // printf("Area is: %.2f", a * b);

    // [if - else ]
    // input 1 so va check so day > 0 hay ko
    // > 0 , < 0
    // int a;
    // scanf("%d", &a);
    // https://docs.google.com/document/d/1n4n52y7RjgHDgp8qLMpNg1Fqi0CQp2zodFrFjWFNrOk/edit?tab=t.x7e7enit4fk8#heading=h.j4683dse1kyz
    // if (a > 0)
    // {
    //     printf("so nay >0");
    // }
    // else if (a == 0)
    // {
    //     printf("so nay = 0");
    // }
    // else
    // {
    //     printf("so nay <0");
    // }
    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a > b)
    // {
    //     printf("Luong cua a cao hon :%d", a);
    // }
    // else if (a == b)
    // {
    //     printf("luong a bang luong b:%d", a);
    // }
    // else
    // {
    //     printf("Luong cua b cao hon :%d", b);
    // }
    // int a;
    // printf("Nhap vao diem cua ban: \n");
    // scanf("%d", &a);
    // if (a < 0 || a > 100)
    // {
    //     printf("Moi nhap lai");
    // }
    // else if (a < 50)
    // {
    //     printf("Diem yeu");
    // }
    // else if (a < 60)
    // {
    //     printf("Diem trung binh");
    // }
    // else if (a < 75)
    // {
    //     printf("Diem kha");
    // }
    // else if (a < 90)
    // {
    //     printf("Diem gioi");
    // }
    // else
    // {
    //     printf("Diem xuat sac");
    // }

    // % 2 == 0
    // int a;
    // int a;
    // scanf("%d", &a);
    // if (a % 2 == 0)
    // // trong if dung "==" -> toán tử so sánh 2 vế ( 1 dấu = là phép gán giá trị. Ví dụ a = 4 -> gán số 4 cho biến a)
    // {
    //     printf("Day la so chan");
    // }
    // else
    // {
    //     printf("Day la so le");
    // }
    // int a;
    // scanf("%d", &a);
    // if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    // {
    //     printf("Day la nam nhuan");
    // }
    // else
    // {
    //     printf("day la nam khong nhuan");
    // }
    // int a;
    // scanf("%d", &a);
    // switch - thay doi ; case : trường hợp
    // switch (a)
    // {
    // case 0:
    //     printf("Chu nhat");
    //     break; // out switch - case
    // case 1:
    //     printf("Thu hai");
    //     break;
    // default:
    //     printf("Khong hop le!");
    // }


    // if (a < 0 || a > 6)
    // {
    //     printf("Khong hop le!");
    // }
    // else if (a == 0)
    // {
    //     printf("chu nhat");
    // }
    // else if (a == 1)
    // {
    //     printf("thu hai");
    // }
    // else if (a == 2)
    // {
    //     printf("thu 3");
    // }
    // else if (a == 3)
    // {
    //     printf("thu 4");
    // }
    // else if (a == 4)
    // {
    //     printf("thu 5");
    // }
    // else if (a == 5)
    // {
    //     printf("thu 6");
    // }
    // else if (a == 6)
    // {
    //     printf("thu 7");
    // }
    // int a, b;
    // char c;
    // scanf("%d %d %c", &a, &b, &c);
    // switch (c)
    // {
    // case '+':
    //     printf("ket qua la: %d", a + b);
    //     break;
    // case '-':
    //     printf("ket qua la: %d", a - b);
    //     break;
    // case '*':
    //     printf("ket qua la: %d", a * b);
    //     break;
    // case '/':
    //     printf("ket qua la: %d", a / b);
    //     break;
    // default:
    //     printf("Moi nhap lai");
    // Loai hang: (A,B,C) , D
    // if - else if - else
    // char category;
    // int quantity, discount = 0;
    // scanf("%c %d", &category, &quantity);
    // switch (category)
    // {
    // case 'A':
    // case 'B':
    // case 'C':
    //     if (quantity < 2) discount = 0; // 1 dong khong can {}
    //     else if (quantity < 5) discount = 15;
    //     else if (quantity < 10) discount = 25;
    //     else discount = 30;
    //     break;
    // case 'D':
    //     if (quantity >= 50) discount = 50;
    //     else discount = quantity;
    // }
    // printf("%d", discount
    // tháng (từ 1 đến 12) -> switch case month
    int month, year;
    scanf("%d", &month, &year);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang %d co 31 ngay", month);
        break;
    case 4:
    case 9:
    case 6:
    case 11:
        printf("Thang %d co 30 ngay", month);
        break;
    case 2:
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) printf("Day la nam nhuan 29 ngay");
        else printf("day la nam khong nhuan - 28");
        break;
    default:
        printf("Moi nhap lai!");
    }
    return 0;
}


