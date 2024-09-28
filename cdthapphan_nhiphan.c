#include <stdio.h>
#include <math.h>

void decimalToBinary(int n) { //thap phan sang nhi phan
    // Tạo một biến để lưu trữ kết quả nhị phân
    int binary[32];
    int index = 0;
    // Xử lý số thập phân và chuyển đổi nó thành nhị phân
    while (n > 0) {
        binary[index++] = n % 2;
        n = n / 2;
    }
    // In kết quả nhị phân từ cuối cùng
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int binaryToDecimal(int binary) { //nhi phan sang thap phan
    int decimal = 0;
    int base = 1; // base = 2^0

    while (binary > 0) {
        int lastDigit = binary % 10;
        binary = binary / 10;
        decimal += lastDigit * base;
        base = base * 2;
    }

    return decimal;
}

int main(){
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;

//    int binary;
//
//    printf("Enter a binary number: ");
//    scanf("%d", &binary);
//
//    int decimal = binaryToDecimal(binary);
//
//    printf("Decimal: %d\n", decimal);
//
//    return 0;
}
