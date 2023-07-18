// Import libraries

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>


// ==================== VARIABLE DECLARATIONS ====================

/*

int = whole number    int num = 5;
double = decimal      double num = 5.5;
char = single character     char letter = 'a'; )
string = text       string text = " Hollow ";
bool = states       bool Boolean = true;  { true = 1    false = 0 }

*/

// ==================== ARITHMETIC OPERATORS ====================

/*

=   is      x=5
==  Equal to	x == y
!=	Not equal	x != y
>	Greater than	x > y
<	Less than	x < y
>=	Greater than or equal to	x >= y
<=	Less than or equal to	x <= y
&&  And also     a > b && c < d

*/

// ==================== WHILE LOOP HOW TO ====================

/*

    int i = 0;

    while ( i < 5 ) 
    {
        printf("%i \n", i++);
    }

*/

// ==================== FOR LOOP HOW TO ====================

/*

    for ( int i = 0; i < 5; i++ )
    {
        printf("%i \n", i);
    }

*/

// ==================== SWITCH CASE HOW TO ====================

/*

    int day = 4;

    switch (day)
    {
    case 1:
        printf("%s \n", "Monday");
        break;
    case 2:
        printf("%s \n", "Tuesday");
        break;
    case 3:
        printf("%s \n", "Wednesday");
        break;
    case 4:
        printf("%s \n", "Thursday");
        break;
    case 5:
        printf("%s \n", "Friday");
        break;
    case 6:
        printf("%s \n", "Saturday");
        break;
    case 7:
        printf("%s \n", "Sunday");
        break;
    default:
        printf("%s \n", "Invalid");
    }

*/

// ==================== CREATE AN ARRAY ====================

/*

    string cars[4] = { "VW", "VW", "VW", "VW" };

*/

class classes{
    public:
        int x;
        int y;
    private:
};

int main(int argc, char *argv[])
{
    char szText[] = "Hello World!";
    char *pText = szText;

    printf("%s \n", szText);
    printf("%s \n", pText);

    classes Obj;
    printf("%i \n", Obj.x = 25);
    printf("%i \n", Obj.y = 50);


}
