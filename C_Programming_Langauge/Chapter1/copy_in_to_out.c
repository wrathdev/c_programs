#include <stdio.h>

// int main()
// {
//     int c;

//     c = getchar();
//     while( c != EOF){
//         putchar(c);
//         c = getchar();
//     }
//     return 0;
// }

//Version 2
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("%d", EOF);
}