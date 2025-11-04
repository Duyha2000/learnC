// #include <stdio.h>
//
// int main(void)
// {
//     //
//
//     // printf("Hello")
//     // for(gia tri khoi tao, dieu kien dung, buoc nhay){
//     // viet code
//     // }
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     printf("Hello");
//     // }
//     // int a = 5;
//     // // a++; // a |+->=| 1 ->
//     // a += 3;
//     // printf("%d", a);
//     // In ra cac so tu 1 -> 10
//     // for i: i tang dan tu 1 -> 10
//     // for (int i = 1; i <= 10; i++)
//     // {
//     //     printf("%d ", i);
//     // }
//
//     // in ra cac so tu -5 -> 5 (-5 -4 -3 -2 -1 0 ... 4 5)
//     // 5 -> -5
//     // for (int i = 5; i >= -5; i--) printf("%d ", i);
//     // B1: Nhap n (input)-> in ra cac so chan tu n -> 100 (tinh tong cac so chan day)
//     // int n;
//     // scanf("%d", &n);
//     // // // i: 90 91 92 93 94 95 96 97 98 99 100...
//     // int sum = 0;
//     //
//     // for (int i = n; i <= 100; i++)
//     // {
//     //     if (i % 2 == 0)
//     //     {
//     //         sum += i;
//     //     }
//     // }
//     // printf("sum: %d", sum);
//
//     // Nhập a và b -> in ra các số chia ết cho 3 v à 5 trong khoảng (a. b)
//     // All numbers = divisible by both 3 and 5 ( 15 30 45 )
//     // a = 1 -> b = 50
//     // int a, b;
//     // scanf("%d %d", &a, &b);
//     //
//     // for (int i = a; i <= b; i++)
//     // {
//     //     if (i % 3 == 0 && i % 5 == 0)
//     //         printf("%d ", i);
//     // }
//     // Tính tổng các số từ 1 -> N chia heest cho 5 hoac 7
//     // int n, sum = 0;
//     // scanf("%d", &n);
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     if (i % 5 == 0 || i % 7 == 0)
//     //     {
//     //         sum += i;
//     //     }
//     // }
//     // printf("sum: %d", sum);
//     // count: đem tu 1 -> 10 co bao nhieu so chan
//     // int count = 0;
//     // for (int i = 1; i <= 10; i++)
//     // {
//     //     if (i % 2 == 0) count++;
//     // }
//     // printf("%d", count);
//
//     // Nhap A, B va X, tinh xem co bao nhieu so chia het cho X trong khoang A-B.
//     // Vi du: A = 1 , B = 50, and X = 5,  10 so chia het cho 5 trong khoang A-B
//     // int A, B, X;
//     // int count = 0;
//     // scanf("%d %d %d", &A, &B, &X);
//     // for (int i = A; i <= B; i++)
//     // {
//     //     if (i % X == 0) count++;
//     // }
//     // printf("%d", count);
//     // Nhap 1 so tu nhien n, tinh giai thua cua so day
//     // Vi du: nhap n = 5 -> 5! = 5*4*3*2*1 = 120
//     // int n;
//     // scanf("%d", &n);
//     // int x = 1; // tich = 1
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     x *= i;
//     // }
//     // printf("x = %d", x);
//     // Nhap 1 so tu nhien n -> tim xem so day co bao nhieu uoc so
//     // Vi du: n = 12/ 6 uoc: [1 2 3 4 6 12]
//     // int n, count = 0;
//     // scanf("%d", &n);
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     if (n % i == 0) count++;
//     // }
//     //
//     // printf("count =
//     // %d", count);
//
//     // Nhap a,b la co so va so mu -> tim gia tri a^b
//     // Vi du: a = 2 , b = 3 -> 2^|3| = 2 * 2 * 2  = 8
//     // -> so lan lap se phu thuoc so mu | tich = 1 -> tich *=
//     // int a, b, tich = 1;
//     //
//     // scanf("%d%d", &a, &b);
//     // // 3
//     // for (int i = 1; i <= b; i++)
//     // {
//     //     tich *= a;
//     // }
//     // printf("%d", tich);
//
//     // break | continue:
//     // in ra so dau tien chia het cho 3 va 5 tu 1 -> 100
//     // for (int i = 1; i <= 100; i++)
//     // {
//     //     if (i % 3 == 0 && i % 5 == 0)
//     //     {
//     //         printf("%d ", i);
//     //         break; // thoat swtich - case | for | while
//     //     }
//     // }
//
//     // BT: In ra 3 soo chia het cho 3 va 5 nam trong khoang -> 100
//     // -> 15 30 45 (goi y: dung count va break)
//     // int n;
//     // int count = 0;
//     // scanf("%d", &n);
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     if (i % 3 == 0 && i % 5 == 0)
//     //     {
//     //         printf("%d ", i);
//     //         count++;
//     //     }
//     //     if (count == 3) break;
//     // }
//
//     //continue: 1 2 3 |4| 5 6 7 8 |9| 10
//     // for (int i = 1; i <= 10; i++)
//     // {
//     //     // if (i != 4 && i != 9) printf("%d ", i);
//     //     // if (i == 4 || i == 9) continue; // continue: bo qua
//     //     // printf("%d ", i);
//     //     // in ra cac so chan tu 1 - 10 (dung continue)
//     //     if (i % 2 != 0) continue;
//     //     printf("%d ", i);
//     // }
//
//     // While (lap cho den khi): ko biet truoc so lan lap
//     // For: gia tri bat dau | gia tri ket thuc
//     // VD: in ra tu 1 -> 5
//
//     // Facebook: userName / password:
//     /*
//     while (condition)
//     {
//         // code
//
//         // step:
//         i++ | i--
//     }
//     */
//     // Nhap so tuoi cua 1 nguoi, tuoi chi hop le khi no nam trong khoang tu 0- 100
//     // Neu <0 | >100 -> bat nhap lai cho den khi thoa man va in ra so tuoi
//     // int age;
//     // // 1 - true | 0 - false
//     // int isCheck = 1; //
//     // while (isCheck == 1)
//     // {
//     //     scanf("%d", &age);
//     //     if (age > 100 || age < 0) printf("Moi nhap lai");
//     //     else isCheck = 0;
//     // }
//     // printf("age: %d", age);
//
//     // Nhập vào 1 số va kieemr tra so day co phai so duong hay khong
//     // Neu <0 bat nhap lai cho den khi nao thoa man dieu kien:
//     // int n;
//     //
//     // int isCheck = 1;
//     // while (isCheck == 1)
//     // {
//     //     scanf("%d", &n);
//     //     if (n < 0) printf("Moi nhap lai!");
//     //     else isCheck = 0;
//     // }
//     // printf("%d", n);
//     /*
//     Bài tập 14: Trò chơi đoán số
//     Viết chương trình mô phỏng trò chơi đoán số:
//     Chương trình chọn ngẫu nhiên một số từ 1 đến 100. // 57
//     Người dùng liên tục nhập các dự đoán.
//     Sử dụng vòng lặp while để tiếp tục yêu cầu nhập liệu cho đến khi người dùng đoán đúng số.
//     Chương trình nên cung cấp các gợi ý như "Quá cao!" hoặc "Quá thấp!" sau mỗi lần đoán.
//     Mở rộng: Đếm số lần đoán và hiển thị kết quả khi người dùng thắng.
//      */
//     // int guess = 57; // out vong lap
//     // int isCheck = 1;
//     // int n;
//     // int count = 0;
//     // while (isCheck == 1)
//     // {
//     //     scanf("%d", &n);
//     //     if (n < guess)
//     //     {
//     //         count++;
//     //         printf("Qua thap!");
//     //     }
//     //     else if (n > guess)
//     //     {
//     //         count++;
//     //         printf("Qua cao!");
//     //     }
//     //     else
//     //     {
//     //         isCheck = 0;
//     //         count++;
//     //         printf("Ban da doan dung");
//     //         printf("so lan doan = %d", count);
//     //     }
//     // }
//
//     /*
//         *Bài tập 9: Số nhỏ nhất chia hết cho 3, 5 và 7 |-> 105|
//         Bài tập: Tìm số dương nhỏ nhất chia hết cho 3, 5 và 7.
//         Các bước:
//         Khởi tạo một biến n = 1.
//         Sử dụng vòng lặp để kiểm tra tính chia hết cho 3, 5 và 7.
//         Dừng khi tìm thấy một số thỏa mãn điều kiện.
//         In ra kết quả.
//      */
//     // int n = 1;
//     // int isCheck = 1;
//
//     // while (isCheck == 1)
//     // {
//     //     if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
//     //     {
//     //         printf("%d", n);
//     //         isCheck = 0;
//     //     }
//     //     n++; // step:
//     // }
//     // do - while
//     /*
//
//
//
//
//     // B1: count = 0
//     // B2: condition: count++/count += 1
//     // B3: in ra count o ngoai vong for
//
//
//     // Tih "tổng" cac so tu 0 -> 5
//     // B1: sum = 0
//     // B2: viet vong for -> sum +=i
//     // B3: print sum (ngoai vong lap)
//     // int sum = 0;
//     // // i = 0
//     // for (int i = 0; i <= 5; i++)
//     // {
//     //     sum += i; // sum = sum+i
//     // }
//     // printf("sum: %d", sum);
//
//         // Array: 5 10 15 20 23
//         int a = 5, b = 10 ,...
//         -> char[30] students12A = {"Hung", "Cuong" , "Trung" , "Dung"}
//         str s1 ="Hung"
//         str s2 ="Cuong"
//
//         int [] arr = {1,2,3,4};
//
//
//
//     return 0;
//         // int: 4 byte [- - - - ] - float
//         // double: 8 byte - char 1 byte
//
//         // int [5] arr = 20 byte
//         // [- - - - - - - - - - - - - - - - - - ...]
//         // 2 dang khai bao array:
//         // Cach 1: Khi biet truoc cac phan tu:
//         // int arr[] = {3, 4, 5, 6, 7};
//         // Khởi tạo 1 arr gồm 5 'ký tự' a b c d e
//         // char arr[] = {'a', 'b', 'c', 'd', 'e'};
//
//         // Cach 2: Khi chua biet truoc so phan tu
//         // int arr[5]; // [---- ---- ---- ---- ---- ---- ----]
//         // 4 5 8 9 10
//         // index (chỉ số) -> 0 1 2 3 4
//         /*
//         scanf("%d", &arr[0]);
//         scanf("%d", &arr[1]);
//         scanf("%d", &arr[2]);
//         scanf("%d", &arr[3]);
//         scanf("%d", &arr[4]);
//     */
//     // for (int i = 0; i <= 4; i++)
//     // {
//     //     scanf("%d", &arr[i]);
//     // }
//
//     // chi so (index: i)
//     // gia tri(value: arr[i])
//     // for (int i = 0; i <= 4; i++)
//     // {
//     //     printf("%d ", arr[i]); // 268435455
//     // }
//     // Cho 1 array 5 pần tử (double) -> tính tổng các phần tử trong array đấy
//     int size = 5;
//     double arr[size];
//     double sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%lf", &arr[i]);
//     }
//
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//
//     printf("%lf", sum);
//
//     return 0;
// }
//
//
//
//
//
//
//
//
//
//
//
//
//
//
