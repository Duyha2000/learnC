// #include <stdio.h>
//
// // Function:
// // https://docs.google.com/document/d/130YMvQO2tqBXioqX3mvP7hk9l58QUsWZmrhXUXrG_h4/edit?tab=t.0
//
// // C1: ham void: chi in ra gia tri (return)
// // void printValue()
// // {
// //     for (int i = 1; i <= 5; i++)
// //     {
// //         printf("%d ", i);
// //     }
// // }
//
// // C2: cac loai ham con lai
// // Tinh tong 2 so a va b:
// // int sum(int a, int b)
// // {
// //     return a + b;
// // }
//
//
// // return type( kieu tra ve) - ten ham (parameter: tham so){
// // viet code
// // }
//
// /*
//     Exercise 0: 'Calculate' the Sum from 1 to n
//     Problem: Enter a positive integer n and calculate the sum of numbers from 1 to n.
//     Example:
//     Input: Enter a positive integer n: 10
//     Output: The sum from 1 to 10 is: 55
// int sum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) sum += i;
//     return sum;
// }
//  */
//
// /*
// *Exercise 1: Calculate the Sum of Consecutive Natural Squares. Problem:
// Example:
// Input: Enter a positive integer n: 4
// Output: The sum of squares from 1 to 4 is: 30 ( 1^2+2^2+3^2+4^2 = 30)
// int sum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i * i;
//     }
//     return sum;
// }
// Exercise 2: Calculate the Factorial
// Problem: Enter a positive integer n, calculate its factorial, and find the sum of its digits.
// Example:
// Input: Enter a positive integer n: 5
// Output: Factorial of 5 is 120 (1 * 2 * 3 * 4 * 5)
// int factorial(int n)
// {
//     int multiply = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         multiply *= i;
//     }
//     return multiply;
// }
// Exercise 3: Calculate Area and Circumference of a Circle
// Problem: Calculate the area and circumference of a circle with a given radius.
// Example:
// Input: Enter the radius of the circle: 7
// Output: Circle Area: 153.94 ( pi * R * R )
// -> Circle Circumference: 43.96 ( 2* pi * R)
//
// Exercise 4: 'Prime Number' Check
// Problem: Check if a positive integer n is a prime number.
// Example:
// Input: Enter a positive integer n: 11
// Output: 11 is a prime number: True
// Số nguyên tố là số tự nhiên lớn hơn 1, chỉ có hai ước số dương phân biệt là 1 và chính nó.
// 'Điều này có nghĩa là số nguyên tố không thể chia hết cho bất kỳ số nào khác ngoài 1 và bản thân nó.'
// Ví dụ, 2, 3, 5, 7, 11 là các số nguyên tố. Các số tự nhiên lớn hơn 1 không phải là số nguyên tố được gọi là hợp số.
// int prime(int n)
// {
//     int check = 1; // true
//     // 11
//     // 2 - 10:
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0) check = 0;
//     }
//
//     return check;
// }
// Exercise 7: Check Even or Odd Number
// Problem: Check if a positive integer n is even or odd.
// Example:
// Input: Enter a positive integer n: 10
// Output: 10 is an even number
//
// int number(int n)
// {
//     int isCheck = 1; // so le
//     if (n % 2 == 0) isCheck = 0; // so chan
//     return isCheck;
// }
//  */
//
//
// // const double PI = 3.14;
// //
// // double area(int r)
// // {
// //     return PI * r * r;
// // }
// //
// // double circumference(int r)
// // {
// //     return 2 * PI * r;
// // }
// /*
// Exercise 5: Sum of Digits of a Number
// Problem: Calculate the sum of digits of a positive integer n.
// Example:
// Input: Enter a positive integer n: 456
// Output: Sum of digits of 456 is: 15 (4 + 5 + 6)
// Hint: using %10 and /= 10
//
// n = 364
// -> n /= 10 (34) or n = n /10
// sum = 0;
// while(true){
//     //
//    break;
// }
//
// n % 10 = 4 -> sum += n % 10
// n /= 10 // 36
//
// 36 % 10 = 6 -> sum += n % 10 ( 6 + 4 = 10)
// n /= 10 -> 3
//
// 3 % 10 = 3 -> sum += n % 10 ( 6 + 4 + 3 = 13)
// 3 / 10 = 0
// ...
// int number(int n)
// {
//     int sum = 0;
//     while (1)
//     {
//         sum += n % 10;
//         n /= 10;
//         if (n == 0) break;
//     }
//     return sum;
// }
// Exercise 9: Reverse a Number
// Problem: Find the reverse of a positive integer n.
// Example:
// Input: Enter a positive integer n: 1234
// Output: Reversed number is: 4321
// -> in ra 4 - 3 - 2 - 1 tren 1 dong (4321)
// Lam the nao de lay ra so 4 tu 1234-> in ra
// Lam the nao de lay ra so 3 tu 123-> in ra ...
// José mourinho
// void printReverse(int n)
// {
//     while (1)
//     {
//         printf("%d", n % 10); // 4
//         n /= 10;
//         if (n == 0) break;
//     }
// }
// Exercise 8: 'Check' 'Perfect Number' -> so hoan hao
// Problem: Check if a positive integer n is a perfect number (a number whose divisors' sum equals the number itself).
// Example:
// Input: Enter a positive integer n: 6 (1,2,3)
// Output:  6 is a perfect number
// 28 (1+2+4+7+14 = 28) -> perfect number
// -> int 0, 1
//  */
// // int isPerfectNumber(int n)
// // {
// //     int isCheck = 1;
// //     int sum = 0;
// //     for (int i = 1; i < n; i++)
// //     {
// //         if (n % i == 0) sum += i;
// //     }
// //     // sum = 28
// //     if (sum == n) isCheck = 1;
// //     else isCheck = 0;
// //     return isCheck;
// // }
//
//
// /*
// *Exercise 11: Find the Greatest Common Divisor (GCD) and Largest Prime Factor
// Problem: Find the greatest common divisor (GCD) of two numbers, decompose it into prime factors, and display the largest prime factor.
// Example:
// Input: Enter the first number: 48 Enter the second number: 60
// Output: GCD of 48 and 60 is: 12 -> viet 1 ham tinh uoc chung lon nhat ( 2 so nay cung chia het cho 1 so (va so day lon nhat)
// Prime factor decomposition of 12: '2 * 2 * 3' 'Largest prime factor: 3' -> phan tach thua so nguyen to
//  */
// int gcd(int a, int b) // 48 - 60
// {
//     int GCD = 1;
//     for (int i = 1; i < a || i < b; i++)
//     {
//         if (a % i == 0 && b % i == 0) GCD = i; // 12
//     }
//     return GCD;
// }
//
// int isPrime(int n)
// {
//     int isCheck = 1;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0) isCheck = 0;
//     }
//     return isCheck;
// }
//
// void prime(int n) // 12 = 2 * 2 * '3' (in ra con 3)
// // DK1: Phai la so nguyen to
// // DK2: phai la uoc so cua 12
// {
//     int a = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (isPrime(i) && n % i == 0) a = i;
//     }
//     printf("%d", a);
// }
//
// // Nhap vao 2 so a va b -> tinh uoc chung lon nhat chung no va tim so nguyen to lon nhat tu so day
// int main(void)
// {
//     // printf("%d\n", gcd(48, 60));
//     int x = gcd(48, 60); // 12
//     prime(x);
//     // int n;
//     // scanf("%d", &n);
//     // if (isPerfectNumber(n)) printf("perfect number");
//     // else printf("no perfect");
//
//     // printReverse(1234);
//     // printf("%d", x);
//     // printf("%d", number(364));
//     // int n;
//     // scanf("%d", &n);
//     // if (number(n) == 1)
//     // {
//     //     printf("so le");
//     // }
//     // else printf("so chan");
//
//     // int n;
//     // scanf("%d", &n);
//     // if (prime(n) == 1)
//     // {
//     //     printf("Nto");
//     // }
//     // else
//     // {
//     //     printf("Ko Nto");
//     // }
//
//
//     // int r;
//     // scanf("%d", &r);
//     // printf("%.2f \n", area(r));
//     // printf("%.2f", circumference(r));
//     // int n;
//     // scanf("%d", &n);
//     // int x = factorial(n);
//     // printf("%d", x);
//
//     // int x = sum(4);
//     // printf("%d", x);
//
//     // int x = sum(4);
//     // printf("%d \n", x); // 10
//     // int y = sum(10);
//     // printf("%d", y); // 10
//     // Tinh tong cac so tu 1 den 8:
//
//     // Goi ham:
//     // int x = sum(3, 4);
//     // printf("%d", x);
//
//
//     // printValue();
//     // printValue();
//     // printValue();
//
//
//     return 0;
//     // printf("x");
// }
//
//
