#include <stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct student Poorvang, Riddhi, Siddhi;
    Poorvang.id = 34;
    Poorvang.marks = 90;
    Poorvang.fav_char = 'p';
 
    printf("Poorvang's id is %d ", Poorvang.id);
    return 0;
}  