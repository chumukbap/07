#include <stdio.h>
#include <windows.h>

int inc(int counter);

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    int i = 10;

    printf("함수 호출전 i=%d\n", i);

    inc(i);

    printf("함수 호출후 i=%d\n", i);

    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}
