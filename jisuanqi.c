#include <stdio.h>
int main()
{
    float a, b, c;
    int go;
    printf("01为+,02为-,03为*,04为/\n两个值用回车隔开\n");
    printf("输入两个数值");
    scanf("%f %f", &a, &b);
    printf("输入四种运算符");
    scanf("%d", &go);
    if (go == 01)
    {
        c = a + b;
        printf("%.2f", c);
    }
    else if (go == 02)
    {
        c = a - b;
        printf("%.2f", c);
    }
    else if (go == 03)
    {
        c = a * b;
        printf("%.2f", c);
    }
    else if (go == 04)
    {
        c = a / b;
        printf("%.2f", c);
    }

    return 0;
}
