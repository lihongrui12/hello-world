
#include <stdio.h>
int main()
{
    float a, b, c;
    int go;
    printf("01Ϊ+,02Ϊ-,03Ϊ*,04Ϊ/\n����ֵ�ûس�����\n");
    printf("����������ֵ");
    scanf("%f %f", &a, &b);
    printf("�������������");
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