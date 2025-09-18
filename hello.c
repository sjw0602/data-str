#include <stdio.h>

int main(void)
{
    int n;
    int foo;

    printf("정수: ");
    scanf("%d", &n);

    foo = (n>0) ? "양수입니다.\n" : "음수입니다.\n";
    printf("%c", foo);

    return 0;
}
