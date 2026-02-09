#include <iostream>
#include<vector>
#include "FileName.h"
using namespace std;

/*
========================================
            Debugging
========================================
تشغيل الكود على وضع الـ Debug
وبتقدر تمشي في الكود سطر سطر
وتشوف قيم المتغيرات

Types of Errors:
- Syntax Error
- Logical Error (Hard)
- Runtime Error
*/

/*
Breakpoint and Memory Values
- Debug mode slow performance
*/

/*
More about Breakpoints:
- Jump to next breakpoint : F5
- Disable all Breakpoints
*/

/*
Autos:
- Quick Watch Window : Shift + F9
- Changing Values in Debugging Mode
- Step Into / Step Over / Step Out
*/

/*****************************************************************/

/*
Create Library
MyFunctions::sayHello();
*/

/*
========================================
      Ternary Operator (Short IF)
========================================
Syntax:
condition ? expression1 : expression2;

Example:
int number = 0;
cin >> number;

(number == 0)
    ? cout << "Zero"
    : ((number > 0) ? cout << "Positive" : cout << "Negative");
*/

/*
========================================
        Ranged Loop
========================================
Syntax:
for (declaration : collection)
{
    // code
}

Example:
int numbers[] = {1, 2, 3, 4, 5};

for (int num : numbers)
{
    cout << num << endl;
}
*/

/*
========================================
     Validation (Numbers Only) : تصديق
========================================
int ReadNumber()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    while (cin.fail())
    {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number: ";
        cin >> number;
    }

    return number;
}

cout << "Number: " << ReadNumber();
*/

/*
========================================
        Bitwise Operators
========================================
cout << "Result: " << (12 & 25);
cout << "Result: " << (12 | 25);
*/

/*
========================================
 Function Declaration vs Definition
========================================
#include <iostream>
using namespace std;

// Declaration
void add(int, int);

int main()
{
    add(10, 20);
    return 0;
}

// Definition
void add(int a, int b)
{
    cout << (a + b);
}
*/

/*
========================================
        Default Parameters
========================================
void greet(string name = "Guest")
{
    cout << "Hello, " << name << "!" << endl;
}
*/

/*
========================================
      Function Overloading
========================================
نفس اسم الفنكشن
لكن اختلاف عدد أو نوع البراميتر
*/

/*
========================================
     Call Stack / Call Hierarchy
========================================
*/

/*
========================================
            Recursion
========================================
تحذير: رقم كبير → Stack Overflow

void PrintNumber(int a, int b)
{
    if (a <= b)
    {
        cout << a << endl;
        PrintNumber(a + 1, b);
    }
}

----------------------------------------

void PrintNumber(int a, int b)
{
    if (a >= b)
    {
        cout << a << endl;
        PrintNumber(a - 1, b);
    }
}

----------------------------------------

int PrintNumber(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * PrintNumber(a, b - 1);
}
*/

/*
========================================
        Variables
========================================
Static Variable:
- لا يتدمر بعد انتهاء الفنكشن

Automatic Variable:
auto x = 12.3;   // double

Register Variable:
- ملغي من اللغة
*/

/*
========================================
        printf Formatting
========================================
Integer:
int page = 1, totalPage = 20;

printf("Page = %d\n", page);
printf("Total Page = %d\n", totalPage);
printf("Page Number = %0*d\n", 10, page);
printf("Page Number = %0*d\n", 2, page);

Float:
printf("Value = %.*f\n", 3, 3.14472);
printf("Value = %.3f\n", 3.14);

String & Char:
char name[] = "haitham ali sami barhomah";
printf("My Name Is %s\n", name);

char h = 'h';
printf("First Letter : %*c\n", 1, h);
printf("First Letter : %*c\n", 2, h);
printf("First Letter : %*c\n", 3, h);
*/

/*
========================================
     Two Dimensional Array
========================================
int Arr[10][10];

for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        Arr[i][j] = (i + 1) * (j + 1);
        printf(" %0*d ", 3, Arr[i][j]);
    }
    cout << endl;
}
*/

/*
========================================
        Vectors
========================================
Dynamic Array

#include <vector>

vector<int> vNumber = {10, 20, 30, 40, 50};

for (int number : vNumber)
{
    cout << number << " ";
}

----------------------------------------

void ReadNumber(vector<int>& vNumber)
{
    char addMore;
    int number;

    do
    {
        cout << "\nEnter the number: ";
        cin >> number;
        vNumber.push_back(number);

        cout << "Do you want to enter more? (Y/N): ";
        cin >> addMore;

    } while (addMore == 'Y' || addMore == 'y');
}

void PrintNumber(const vector<int> &vNumber)
{
    cout << "\nNumbers: ";
    for (int &number : vNumber)
        cout << number << " ";
    cout << endl;
}

int main()
{
    vector<int> vNumber;
    ReadNumber(vNumber);
    PrintNumber(vNumber);
}

----------------------------------------

//Vector of Structure :
struct MyInformation
{
    string FirstName = " ";
    string LastName = " ";
    int Age = 0;
};

void Print(vector<MyInformation>& vInformation)
{
    for (MyInformation &O : vInformation)
    {
        cout << "First Name : " << O.FirstName << endl;
        cout << "Last Name : " << O.LastName << endl;
        cout << "Age : "<< O.Age << endl;
        cout << endl;
    }
}

int main()
{
    vector<MyInformation> vInformation; // انشاء فيكتور 
    MyInformation Object; // انشاء كائن

    // تعبئة الكائن
    Object.FirstName = "haitham";
    Object.LastName = "ali";
    Object.Age = 20;
    vInformation.push_back(Object);

    Object.FirstName = "haitham";
    Object.LastName = "ali";
    Object.Age = 20;
    vInformation.push_back(Object);

    Object.FirstName = "haitham";
    Object.LastName = "ali";
    Object.Age = 20;
    vInformation.push_back(Object);

    Object.FirstName = "haitham";
    Object.LastName = "ali";
    Object.Age = 20;
    vInformation.push_back(Object);

    Print(vInformation);
}

----------------------------------------

struct StEmployee
{
    string FirstName;
    string LastName;
    int Age;
};

void Read(vector<StEmployee>& vEmployee)
{
    StEmployee c;
    for (int i = 1 ; i <2 ; i++)
    {
        cout << "\nFirst Name : ";
        cin >> c.FirstName;

        cout << "\nLast Name : ";
        cin >> c.LastName;

        cout << "\nAge : ";
        cin >> c.Age;

        vEmployee.push_back(c);
    }
}

void ReadEmployee(vector<StEmployee>& vEmployee)
{
    char again = 'Y';
    do
    {
        Read(vEmployee);

        cout << "\ndo you want to enter again (Y,N) : \n";
        cin >> again;
    } while (again == 'y'||again=='Y');
}

void print(vector<StEmployee>& vEmployee)
{
    for (StEmployee &Em : vEmployee)
    {
        cout << "\nFirst Name : " << Em.FirstName;
        cout << "\nLast Name : " << Em.LastName;
        cout << "\nAge : "<< Em.Age;
        cout << endl;
    }
}

int main()
{
    vector<StEmployee> vEmployee;
    ReadEmployee(vEmployee);
    print(vEmployee);
}

----------------------------------------

vector<int> Numbers = {10,20,30,40,50,60,70,80,90};

Numbers.pop_back();  //delete
Numbers.clear();

if(!Numbers.empty())    //بترجع true اذا اذا كان فاضي
    Number.pop_back();

if(Number.size() > 0)
    Number.pop_back();

----------------------------------------

Numbers.front()  // اول عنصر 
Numbers.back()  // اخر عنصر
Numbers.capacity() // عدد العناصر الممكن تخزينهم حاليًا
*/

/*
========================================
     Creating References
========================================

int main()
{
    int a = 10;
    int &x = a;
    cout << &a << endl;
    cout << &x << endl;
    cout << a << endl;
    cout << x << endl;
}
*/

/*
========================================
     Pointer
========================================

    هو عباره عن فاريبل بس ما بخزن فيه قيمه بخزن فيه عنوان فاريبل ثاني وله عنوان خاص به 
    الادرس = هيكسا ديسيمل

    EX:
    int a  = 10;
    cout << a << endl;
    cout << &a << endl;

    int * P = &a ;
    cout << P << endl;

----------------------------------------
    
     Dereferencing Pointer:

int main()
{
    int a = 10;
    cout << "a value = " << a << endl;
    cout << "a address = " << &a << endl;
    int* p;
    p = &a;
    cout << "Pointer Value = " << p << endl;
    cout << "Value of the address that p is pointing to is " << *p << endl;
    *p = 20;
    cout << a << endl;
    cout << *p << endl;
    a = 30;
    cout << a << endl;
    cout << *p << endl;
    cout << endl;
    return 0;
}

----------------------------------------

    Call by Reference: Using pointers:


void swap(int *x, int *z)
{
    int temp;
    temp = *x;
    *x = *z;
    *z = temp;
}

int main()
{
    int a = 1, b = 2, c = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << endl;

    swap(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << endl;

}

----------------------------------------

    Pointers and Array:

int main()
{
    int arr[5] = { 1,2,3,4,5 };
    int* p = arr; // addresses index[0]

    cout << p << endl;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << p + 3 << endl;
    cout << p + 4 << endl;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;
}

----------------------------------------

    struct and Pointer: 

struct Information
{
    string FirstName;
    string LastName;
};

int main()
{
    Information Object;
    Information* p;

    Object.FirstName = "HAITHAM";
    Object.LastName = "ALI";

    cout << Object.FirstName << " " << Object.LastName << endl;

    p = &Object;
    cout << p <<endl;

    cout << p->FirstName << endl;
    cout << p->LastName << endl;
}

----------------------------------------

    Pointer to Void

int main()
{

    int number = 10;
    void* p;

    p = &number;
    cout << p << endl;

    cout << *P << endl; // error
    cout << *(static_cast<int*>(p)) << endl;
}
*/

















