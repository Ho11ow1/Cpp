// ==================== VARIABLE DECLARATIONS ====================

/*

int = whole number    int num = 5;
double = decimal      double num = 5.5;
char = single character     char letter = 'a'; )
string = text       string text = " Hollow ";
bool = state       bool Boolean = true;  { true = 1    false = 0 }

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

/*

void oddeven()
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
        else if (values[i] % 2 != 0)
        {
            printf("%s", "This is an odd number: ");
            printf("%i", values[i]);
            printf("\n");
        }
    }

    printf("\n");
}

void nameprint()
{
    const char* names[5] = { "John", "Sam", "Elf", "Laffy", "Dumbo" };

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s", "Your name is: ");
        printf("%s", names[i]);
        printf("\n");
    }
}

void numprint()
{
    std::vector<int> nums = { 1, 2, 3, 4, 5 };

    printf("\n");

    for (int i = 0; i < nums.size(); i++)
    {
        printf("%i \n", nums[i]);
    }

    printf("\n");
}

void mapsort()
{
    // Initialize empty map
    std::map<std::string, int> emptymap;
    // Initalize map with items
    std::map<int, std::string, std::greater<int>> name
    {
        {10, "Tshirt"}, { 7, "Pants" }, { 5, "Blouse" }
    };

    // printf("%i \n", name["Tshirt"]);
    // printf("%i \n", name["Pants"]);
    // printf("%i \n", name["Blouse"]);

    // Initializing iterator
std::map<int, std::string>::iterator iter;
// Iterator map syntax
for (iter = name.begin(); iter != name.end(); iter++)
{
    std::cout << '\t' << iter->first << '\t' << iter->second << '\n';
}

printf("\n");
}

void calculator()
{
    double a;
    double b;
    double c;

    std::cout << "Side A: ";
    std::cin >> a;

    std::cout << "Side B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    std::cout << "Side c = " << c;

    printf("\n");
}

void input()
{
    string_t name;
    double age;

    printf("What's your name?: ", "%s \n");
    std::getline(std::cin >> std::ws, name);

    printf("What's your age?: ", "%s \n");
    scanf_s("%d", &age);

    std::cout << "Your name is: " << name << "\n";
    std::cout << "You are " << age << " Years old";

    printf("\n");
}
*/
