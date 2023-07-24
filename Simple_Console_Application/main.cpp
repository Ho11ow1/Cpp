// Import libraries

#include <cmath>
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

void MySuperCoolFuncVector()
{
    std::vector<int> values = { 1, 2, 3, 4 };

    for (int i = 0; i < values.size(); i++)
    {
        if (values[i] / 2 == 1)
        {
            printf("%s", "The given number increased by 1 = ");
            printf("%i \n", values[i] += 1);
        }
        else if(values[i] /2 != 1)
        {
            printf("%s \n", "This is an even number");
        }
    }
    
    
}

static void MySuperCoolFuncArray()
{
    
}

class Inventory
{
public:
    int dz;
    int bp;
    int cs;
    int aeth;
private:
};

int main(int argc, char *argv[])
{
    char szText[] = "Hello World!";
    char *pText = szText;

    printf("%s \n", szText);
    printf("%s \n", pText);

    /*Inventory inv;
    printf("%i   ", inv.dz = 20000000);
    printf("%i \n", inv.bp = 480576);
    printf("%i   ", inv.cs = 50);
    printf("%i   ", inv.aeth = 4087623);*/

    MySuperCoolFuncVector();
    MySuperCoolFuncArray();
}