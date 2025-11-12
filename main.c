#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // https://meet.google.com/hco-dnhd-pud
    // "Hello world" -> tap hop nhieu ky tu
    // char 'h' 'e' 'l'...

    //char str[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // khi biet truoc cac ky tu trong chuoi
    //char str2[10] = "Hello";
    // Index: 0 -> n -1
    // printf("%c", str2[0]);
    // Cap nhat ky tu: o -> m
    // str2[4] = 'm';
    // char inputStr[20]; // 'h' 'e' 'l' 'l' 'o' '\0'
    // // scanf("%s", &inputStr);  ko lay duoc chuoi sau khoang trang
    // fgets(inputStr, sizeof(inputStr),stdin); // chuoi can nhap, so ky tu, thu vien de nhap
    //
    // // khoi tao 1 chuoi la ten cua truong dai hoc ( 30 ky tu)
    // char nameUni[30];
    // inputStr[strcspn(inputStr, "\n")] = '\0';
    // fgets(nameUni, sizeof(nameUni),stdin); // nhay xuong 1 dong moi // "hello \n \0"
    // nameUni[strcspn(nameUni, "\n")] = '\0';
    //
    // printf("%s\n", nameUni);
    // printf("%s", inputStr);

    //BT1: Khai báo và gán giá trị cho 1 chuỗi bất kỳ, in ra từng ký tự trong chuỗi đã khai báo, mỗi ký tự cách nhau 1 dấu cách.
    // dung vong lap for de in ra (giong array)
    // char str[20];
    // fgets(str, sizeof(str),stdin); // Toi yeu tin hoc (13)
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     printf("%c ", str[i]);
    // }
    // length: chiều dài

    // Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình in ra chuỗi đảo ngược của chuỗi đã khai báo.
    // H e l l o
    // e l l e H
    // 4 3 2 1 0
    // char str[20];
    // fgets(str, sizeof(str),stdin); // fgets
    // str[strcspn(str, "\n")] = '\0';
    // for (int i = strlen(str) - 1; i >= 0; i--)
    // {
    //     printf("%c", str[i]);
    // }
    // TODO: Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng nhập vào 1
    // ký tự bất kỳ, in ra số lần xuất hiện của ký tự đó trong chuỗi đã khai báo.
    // Input: hello , 'l'
    // Output: 2 (ky tu l xuat hien 2 lan)
    // char str[20];
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '\0';
    // int count = 0;
    // char kitu;
    // scanf("%c", &kitu);
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     if (str[i] == kitu) count++;
    // }
    // printf("%d", count);
    /*
        *Thành phần	Ý nghĩa
        isalpha(c)	Kiểm tra ký tự là chữ cái
        isdigit(c)	Kiểm tra ký tự là chữ số
        isspace(c)	Kiểm tra ký tự là khoảng trắng
        tolower(c)	Chuyển chữ cái sang chữ thường để dễ so sánh nguyên âm/phụ âm
        Điều kiện !isspace(c)	Giúp không tính khoảng trắng là ký tự đặc biệt
     */
    // TODO: Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng đếm số từ trong chuỗi, mỗi từ sẽ cách nhau bởi dấu cách.
    // Input: hello world ahihi
    // Output: 3 ( 2 khoang trang -> 3 tu)

    // int count = 1;
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     if (str[i] == ' ') count++;
    // }
    // printf("%d", count);
    // TODO: Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng đếm số ký tự là chữ cái có trong chuỗi và in ra màn hình.
    // Dem so ky tu la so trong chuoi: hello123 -> 3 ky tu so (isdigit)
    // char str[20];
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str, "\n")] = '0'; // hello'%%!'
    // // A-> Z a ->z
    // int count = 0;
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     printf("%c ", str[i]);
    //     if (isdigit(str[i]))
    //     {
    //         count++;
    //         printf("%c ", str[i]);
    //     }
    // }
    //
    // printf("count: %d", count - 1); // \0

    // TODO: Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình đếm số ký tự là chữ cái,
    // chữ số và ký tự đặc biệt
    // nguyên âm, và phụ âm có trong chuỗi đó và in ra màn hình.
    // nguyen am: u e o a i || phu am: truong hop con lai
    /*
    Output:
    Hello my gmail is test123@gmail.com. Trong 1 chuoi se co 3 truong hop ( chu so + chu cai + ky tu dac biet)
    So ky tu la chu cai: 26 | So ly tu la chu so: 3 | So ky tu dac biet: 6

    TODO: Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình viết hoa các chữ cái đầu của các từ trong chuỗi đó.
        Input        Output
    hello world    Hello World
    -> Hint: isspace() de check khoang trang( sau khoang trang se viet hoa ky tu dau) -> ghep lai voi cac ky tu sau
    */
    char str[50];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '0';
    printf("%c", toupper(str[0])); // In ra ky tu dau viet hoa
    // 0
    for (int i = 1; i < strlen(str) - 1; i++)
    {
        if (isspace(str[i])) // tat ca ky tu dang khong chay vao if (mà nó chạy vào else)
        {
            printf(" %c", toupper(str[i + 1]));
            i++;
        }
        else printf("%c", str[i]);
    }
    // char c = 'X';
    // printf("%c", toupper(c));
    // printf("%c", tolower(c));
    // int count1 = 0, count2 = 0;
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     if (isalpha(str[i]))
    //     {
    //         if (str[i] == 'u' || str[i] == 'e' || str[i] == 'o' || str[i] == 'a' || str[i] == 'i') count1++;
    //         else count2++;
    //     }
    // }
    // printf("so nguyen am :%d", count1);
    // printf("so phu am: %d", count2);

    // int count = 0, count2 = 0, count3 = 0;
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     if (isalpha(str[i])) count++;
    //     else if (isdigit(str[i])) count2++;
    //     else count3++;
    // }
    // printf("so ky tu la chu cai: %d", count);
    // printf("so ky tu la chu so: %d", count2 - 1);
    //
    // printf("so ky tu dac biet: %d", count3);

    return 0;
}
