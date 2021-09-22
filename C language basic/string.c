#include <stdio.h>
int main()
{
    char str[50];
    
    gets(str);
    printf("Using gets:  %s\n", str);

    printf("using puts: ", str);
    puts(str);

    return 0;
}