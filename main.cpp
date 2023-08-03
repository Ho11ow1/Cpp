#include "src/headers/includes.h"


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

    std::vector<int> name = { "1", "2", "3", "4" };

    const char* name[number] = {"string", "string", "string", "string", "string"};
    
*/

static void oddeven()
{
    std::vector<int> values = { 1, 2, 3, 4 };

    printf("\n");

    for (int i = 0; i < values.size(); i++)
    {
        if (values[i] % 2 == 0)
        {
            printf("%s", "This is an even number: ");
            printf("%i", values[i]);
            printf("\n");
        }
        else if(values[i] % 2 != 0)
        {
            printf("%s", "This is an odd number: ");
            printf("%i", values[i]);
            printf("\n");
        }
    }
    
    printf("\n");

}

static void nameprint()
{
    const char* names[5] = {"John", "Sam", "Elf", "Laffy", "Dumbo"};

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s", "Your name is: ");
        printf("%s", names[i]);
        printf("\n");
    }
}

static void numprint()
{
    std::vector<int> nums = { 1, 2, 3, 4, 5 };

    printf("\n");

    for (int i = 0; i < nums.size(); i++)
    {
        printf("%i \n", nums[i]);
    }

    printf("\n");

}

static void hashsort()
{


    printf("\n");
}

static void mapsort()
{
    // Initialize empty map
    std::map<std::string, int> emptymap;
    // Initalize map with items
    std::map<int, std::string, std::greater<int>> name
    {
        {10, "Tshirt"}, {7, "Pants"}, {5, "Blouse" }
    };

    /*printf("%i \n", name["Tshirt"]);
    printf("%i \n", name["Pants"]);
    printf("%i \n", name["Blouse"]);*/

    // Initializing iterator
    std::map<int, std::string>::iterator iter;
    // Iterator map syntax
    for (iter = name.begin(); iter != name.end(); iter++)
    {
        std::cout << '\t' << iter->first << '\t' << iter->second << '\n';
    }

    printf("\n");
}

int main(int argc, char **argv[])
{
    /*char szText[] = "Hello World!";
    char *pText = szText;

    printf("%s \n", szText);
    printf("%s \n", pText, "\n");*/

    
    nameprint();
    oddeven();
    numprint();
    hashsort();
    mapsort();
}
