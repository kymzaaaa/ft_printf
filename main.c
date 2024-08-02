#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int result_ft, result_printf;

    // 文字の出力
    result_ft = ft_printf("%c\n", 'A');
    result_printf = printf("%c\n", 'A');
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 文字列の出力
    result_ft = ft_printf("%s\n", "Hello, World!");
    result_printf = printf("%s\n", "Hello, World!");
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 空文字列の出力
    result_ft = ft_printf("%s\n", "");
    result_printf = printf("%s\n", "");
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // NULLポインタの出力
    result_ft = ft_printf("%s\n", (char *)NULL);
    result_printf = printf("%s\n", (char *)NULL);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 整数の出力
    result_ft = ft_printf("%d\n", 12345);
    result_printf = printf("%d\n", 12345);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 負の整数の出力
    result_ft = ft_printf("%d\n", -12345);
    result_printf = printf("%d\n", -12345);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 最小の整数の出力
    result_ft = ft_printf("%d\n", INT_MIN);
    result_printf = printf("%d\n", INT_MIN);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 符号なし整数の出力
    result_ft = ft_printf("%u\n", 123456789);
    result_printf = printf("%u\n", 123456789);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 16進数（小文字）の出力
    result_ft = ft_printf("%x\n", 0xabcdef);
    result_printf = printf("%x\n", 0xabcdef);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 16進数（大文字）の出力
    result_ft = ft_printf("%X\n", 0xABCDEF);
    result_printf = printf("%X\n", 0xABCDEF);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // パーセント記号の出力
    result_ft = ft_printf("%%\n");
    result_printf = printf("%%\n");
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // ポインタの出力
    int num = 42;
    int *ptr = &num;
    result_ft = ft_printf("%p\n", (void *)ptr);
    result_printf = printf("%p\n", (void *)ptr);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 複数の引数と変換
    result_ft = ft_printf("%c %s %d %u %x %X %%\n", 'B', "test", 42, 100000, 255, 255);
    result_printf = printf("%c %s %d %u %x %X %%\n", 'B', "test", 42, 100000, 255, 255);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // 同じ変換の連続
    result_ft = ft_printf("%d %d %d\n", 1, 2, 3);
    result_printf = printf("%d %d %d\n", 1, 2, 3);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    // エッジケース
    result_ft = ft_printf("%d %d %d\n", 0, INT_MAX, INT_MIN);
    result_printf = printf("%d %d %d\n", 0, INT_MAX, INT_MIN);
    printf("出力文字数: ft_printf = %d, printf = %d\n\n", result_ft, result_printf);

    return 0;
}




// gcc -Wall -Wextra -Werror main.c ft_printf.c ft_printf_char.c ft_printf_string.c ft_printf_pointer.c ft_printf_decimal.c ft_printf_unsigned.c ft_printf_hex.c ft_printf_percent.c -o main