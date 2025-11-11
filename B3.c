// #include <stdio.h>
//
// int main(void)
// {
//     // https://docs.google.com/document/d/1SuWcoF84BTALMB-GcT_Z5-p7oZDq1t2sQ5qRQrn9lCs/edit?tab=t.0
//     // https://meet.google.com/nmo-wmbv-kvf?ijlm=1762270567719&hs=187&adhoc=1
//     // khởi tạo 1 array gồm 5 số thập phân và in ra kết quả
//     // double arr[] = {1.2, 2.4, 3.3, 4.4, 5.5}; // khi biet truoc cac phan tu
//     // index: 0 -> 4 ( size - 1)
//     // in ra so 3.3 (2)
//     // printf("Gia tri cua phan tu mang chi so 0 la: %.2f", arr[0]);
//     // printf("Gia tri cua phan tu mang chi so 1 la: %.2f", arr[1]);
//     // printf("Gia tri cua phan tu mang chi so 2 la: %.2f", arr[2]);
//     // in ra so tu 1 -> 5 (start 1 , end 5 -> biết trước số lân lặp)
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     printf("%.1f \t", arr[i]);
//     // }
//     // while: nhap tuoi -> check xem co thoa man dieu kien hay khong
//     // Khi chua biet truoc cac phan tu:
//     //
//     // const int size = 5;
//     // int newArr[size]; // - - - - -
//     // for (int i = 0; i < size; i++)
//     // {
//     //     scanf("%d", &newArr[i]); // nhap thong tin cho 5 thang -1 2 -3 5 5
//     // }
//
//     // for (int i = 0; i < size; i++) printf("%d \t", newArr[i]);
//
//     // 100% cac bai lien quan den arrray -> vong lap for
//     // chi so i - gia tri ( newArr[i])
//     // in ra cac phan tu > 0 trong array
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (newArr[i] > 0) printf("%d \n", newArr[i]);
//     // }
//     // sum/tich: B1: sum/tich  = 0 -> sum += i -> print sum (ngoai vong lap for)
//     // count = 0 -> condition -> count++/ count += 1 -> print count (ngoai vong lap for)
//     // break
//     // TODO: B1:
//     // int size; // 0
//     // scanf("%d", &size); // 5
//     // int newArr1[size];
//     // for (int i = 0; i < size; i++) // input
//     // {
//     //     scanf("%d", &newArr1[i]); // |-2 4 3 4 -5|  <- -> |so 4 mang vi tri la 3|
//     // }
//     // int size2; // 0
//     // scanf("%d", &size2); // 5
//     // int newArr2[size2];
//     // int arr[size + size2]; // size = 7 - - - - - - -
//     // for (int i = 0; i < size2; i++) // input
//     // {
//     //     scanf("%d", &newArr2[i]); // |-2 4 3 4 -5|  <- -> |so 4 mang vi tri la 3|
//     // }
//     //
//     // // B1: Gan gia tri newArr1 (3,4,9,6)-> arr (0 1 2 3) (bằng vòng for)
//     // // B2: Gan gia tri newArr2 -> arr(4 5 6) (bằng vòng for)
//     // // B3: In ra arr ( 0 1 2 3 4 5 6) (bằng vòng for)
//     // for (int i = 0; i < size; i++)
//     // {
//     //     arr[i] = newArr1[i]; // [3 4 9 6 ... ... ...]
//     // }
//     // for (int i = size; i < size + size2; i++)
//     // {
//     //     arr[i] = newArr2[i - size]; // 4
//     // }
//     // for (int i = 0; i < size + size2; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//
//
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (newArr[i] == x) count++;
//     // }
//     // printf("so lan xuat hien cua %d la: %d", x, count);
//
//     // https://docs.google.com/document/d/1h7Cvt9ILkPJwZCCObQE8QFSqnejyJ2b3WzRZ8Ewoh_c/edit?tab=t.0
//
//
//     // int max = newArr[0]; // cầm max đi so sánh các số khác trong array
//     // int no = 0;
//     //
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (newArr[i] >= max)
//     //     {
//     //         max = newArr[i];
//     //         no = i; // 3
//     //     }
//     // }
//     //
//     // printf("phan tu lon nhat la :%d \n", max);
//     // printf("vi tri cua so lon nhat: %d", no);
//
//     // i--
//     // for (int i = size - 1; i >= 0; i--)
//     // {
//     //     if (newArr[i] > 0)
//     //     {
//     //         printf("vi tri cua phan tu duong cuoi cung o :%d", i);
//     //         break;
//     //     }
//     // }
//     // int pos = 0;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (newArr[i] > 0) pos = i;
//     // }
//     // printf("%d", pos);
//
//
//     // 5 1 -2 3 -4 5
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (newArr[i] < 0)
//     //     {
//     //         printf("vi tri cua phan tu am dau tien o :%d", i);
//     //         break;
//     //     }
//     // }
//
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (newArr[i] > 0)
//     //     {
//     //         count++;
//     //         sum += newArr[i];
//     //     }
//     // }
//     // printf("So cac so duong la :%d", count);
//     // printf("tong cac so duong la: %d", sum);
//
//     // for (int i = 0; i < size; i++)
//     // {
//     //     sum += newArr[i]; // logic
//     // }
//     // printf("%d ", sum);
//
//     ----
//
//
//
//     int size;
//     scanf("%d", &size);
//     int arr[size];
//     int x;
//     scanf("%d", &x);
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != x)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }
