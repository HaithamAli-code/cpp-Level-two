#include <iostream>
#include<vector>
using namespace std;
/*****************************************************************/



/*
========================================
      Ternary Operator (Short IF)
========================================

Syntax:
condition ? expression1 : expression2;

int main()
{
    int number = 0;
    cin >> number;

    (number == 0) ? cout << "Zero" : ((number > 0) ? cout << "Positive" : cout << "Negative");
}
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

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    for (int num : numbers)
    {
        cout << num << endl;
    }
}
*/



/*
========================================
     Validation (Numbers Only) : ?????
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
int main()
{
    cout << "Number: " << ReadNumber();
}
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

Functions with the same name but different parameters
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
Static Variable

Automatic Variable:
auto x = 12.3;   // double

Register Variable:
    Deleted
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
    vector<MyInformation> vInformation; 
    MyInformation Object; 

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

        cout << "\nFirst Name : ";
        cin >> c.FirstName;

        cout << "\nLast Name : ";
        cin >> c.LastName;

        cout << "\nAge : ";
        cin >> c.Age;

        vEmployee.push_back(c);
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

if(!Numbers.empty())
    Number.pop_back();

if(Number.size() > 0)
    Number.pop_back();

----------------------------------------

Numbers.front() 
Numbers.back()  
Numbers.capacity()
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

int main()
{
    int a  = 10;
    cout << a << endl;
    cout << &a << endl;

    int * P = &a ;
    cout << P << endl;
}

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



/*
========================================
    Dynamic Memory Allocation New-Delete:
========================================

int main()
{
    // declare an int pointer
    int* p1;
    // declare an float pointer
    float* p2;

    // dynamically allocate memory
    p1 = new int;
    p2 = new float ;

    // assigning value to the memory
    *p1 = 20;
    *p2 = 20.2;

    cout << *p1 << endl;
    cout << *p2 << endl;

    // deallocate the memory
    delete p1;
    delete p2;
}

----------------------------------------

Dynamic Arrays New-Delete with Pointer:

int main()
{
    int num = 0;
    cout << "enter total number of students : \n";
    cin >> num;

    int* p = new int[num];

    cout << "enter grandes of students. \n";
    for (int i = 0; i < num; i++)
    {
        cout << "student " << i + 1 << ": \n";
        cin >> *(p + i);
    }

    for (int i = 0; i < num; i++)
    {
        cout << "\nstudent " << i + 1 << ": " << *(p + i) << endl;
    }

    delete[] p;
}
*/



/*
========================================
    Stack vs Heap
========================================
*/



/*
========================================
    Vectors Access Elements
========================================

int main()
{
    vector<int> num = { 1,2,3,4,5 };

    cout << num.at(0) << endl;
    cout << num[0] << endl;
}

----------------------------------------

Vectors Change Elements :

int main()
{
    vector<int> num = { 1,2,3,4,5 };

    for (const int& i : num)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int& i : num)
    {
        i = 20;
        cout << i << " ";
    }
}

----------------------------------------

Vector Iterators :

int main()
{
    vector<int> num = { 1,2,3,4,5 };

    vector<int>::iterator i;
    for (i = num.begin() ; i != num.end() ; i++)
    {
        // begin return address first element
        // begin return address last element
        cout << *i << " ";
    }
}
*/



/*
========================================
    Exception Handling:
========================================

int main()
{
    vector<int> num = { 1,2,3,4,5 };
    // cout << num.at(5) << endl;
    try
    {
        // exception
        cout << num.at(5) << endl;
    }
    catch (...)
    {
        // handling
        cout << "out of bound " << endl;
    }
}
*/



/*
========================================
    String Object: (Common Methods):
========================================

#include<string>
int main()
{
    string S1 = "My Name is Mohammed Abu-Hadhoud, I Love Programming.";
    // print the length of the string
    cout << S1.length() << endl;

    // return athe letter at position 3
    cout << S1.at(3) << endl;

    // add to the end of string
    S1.append(" @haitham");
    cout << S1 << endl;

    // insert " Ali" at position 7
    S1.insert(7, " Ali");
    cout << S1 << endl;

    //Prints all the next 8 letters from position 16
    cout << S1.substr(16 , 8) << endl;

    //Adds one character to the end of the string
    S1.push_back('X');
    cout << S1 << endl;

    //Removes one character from the end of the string
    S1.pop_back();
    cout << S1 << endl;

    //Finds Ali in the string
    cout << S1.find("Ali") << endl;

    //Finds ali in the string
    cout << S1.find("ali") << endl;
    if (S1.find("ali") == S1.npos)
    {
        cout << "ali is not found";
    }

    //clears all string letters.
    S1.clear();
    cout << S1 << endl;
}
*/



/*
========================================
    Some CCTYPE Functions:
========================================

#include<cctype>
int main()
{

    char x , y;
    x = tolower('A');
    y = toupper('a');

    cout << "converting a to A :" << y << endl;
    cout << "converting A to a :" << x << endl;

    cout << "isupper : " << isupper('a') << endl;
    cout << "islower : " << islower('a') << endl;

    // digit (1,9)
    cout << "isdigit : " << isdigit('9') << endl;

    // punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    cout << "ispunct : " << ispunct(';') << endl;
}
*/



/*
========================================
    Write Mode: Write Data To File:
========================================

//write mode

#include<fstream>
int main()
{
    fstream MyFile;
    MyFile.open("file.txt", ios::out); //write mode

    if (MyFile.is_open())
    {
        MyFile << "haitham ali sami barhoma ";
    }
    MyFile.close();
}

----------------------------------------

// Append Mode

#include<fstream>
int main()
{
    fstream MyFile;
    MyFile.open("file.txt", ios::app);
    if (MyFile.is_open())
    {
        MyFile << "saif ali sami barhoma \n";
    }
    MyFile.close();
}

----------------------------------------

// Read Mode:

#include<string>
#include<fstream>
void PrintFile(string NameFile)
{
    fstream MyFile;
    MyFile.open(NameFile, ios::in); // read mode

    if (MyFile.is_open())
    {
        string line;
        while (getline(MyFile, line))
        {
            cout << line << endl;
        }
    }
    MyFile.close();
}
int main()
{
    PrintFile("file.txt");
}

----------------------------------------

//  Load Data From File to Vector :

#include<string>
#include<fstream>

void LoadDataFromFileToVector(string NameFile , vector<string>& vPrintMyFile)
{
    fstream MyFile;
    MyFile.open(NameFile, ios::in); // read mode

    if (MyFile.is_open())
    {
        string line;
        while (getline(MyFile, line))
        {
            vPrintMyFile.push_back(line);
        }
    }
    MyFile.close();
}
int main()
{
    vector<string> vPrintMyFile;
    LoadDataFromFileToVector("file.txt" , vPrintMyFile);

    for (string line : vPrintMyFile)
    {
        cout << line << endl;
    }
}

----------------------------------------

// Save Vector to File

#include<string>
#include<fstream>

void LoadDataFromFileToVector(string NameFile , vector<string> vPrintMyFile)
{
    fstream MyFile;
    MyFile.open(NameFile, ios::out);

    if (MyFile.is_open())
    {
        for (string line : vPrintMyFile)
        {
            if (line != "")
            {
                MyFile << line << endl;
            }
        }
    }
    MyFile.close();
}
int main()
{
    vector<string> vPrintMyFile = { "haitham", "ali", "sami" ,"barhoma" , "saif" , "ali", "sami" , "barhoma"};
    LoadDataFromFileToVector("file.txt", vPrintMyFile);
}

----------------------------------------

// Delete Record From File:

#include<string>
#include<fstream>

void PrintFileContent(string NameFile)
{
    fstream MyFile;
    MyFile.open(NameFile, ios::in);
    string line;

    if (MyFile.is_open())
    {
        while (getline(MyFile, line))
        {
            cout << line << endl;
        }
    }
    MyFile.close();
}

void LoadDataFromFileToVector(string NameFile, vector<string>& vFileContent)
{
    fstream MyFile;
    MyFile.open(NameFile, ios::in);

    string line;
    if (MyFile.is_open())
    {
        while (getline(MyFile,line))
        {
            if (line != "")
            {
                vFileContent.push_back(line);
            }
        }
    }
    MyFile.close();
}

void SaveVectorToFile(string NameFile , vector<string> vFileContent)
{
    fstream MyFile;
    MyFile.open(NameFile, ios::out);

    if (MyFile.is_open())
    {
        for (string line : vFileContent)
        {
            MyFile << line << endl;
        }
    }
    MyFile.close();
}

void DeleteRecordFromFile(string NameFile , string Record)
{
    vector<string> vFileContent;
    LoadDataFromFileToVector("file.txt", vFileContent);

    for (string &line : vFileContent)
    {
        if (line == Record)
        {
            line = "";
        }
    }
    SaveVectorToFile(NameFile, vFileContent);
}

int main()
{
    PrintFileContent("file.txt");

    DeleteRecordFromFile("file.txt", "ali");

    cout << "\n**************************\n";

    PrintFileContent("file.txt");
}
*/

/*
========================================
    time:
========================================

#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    time_t t = time(0); // get time now
    char* dt = ctime(&t); // convert in string form
    cout << "Local date and time is: " << dt << "\n";

    // converting now to tm struct for UTC date/time
    tm* gmtm = gmtime(&t);
    dt = asctime(gmtm);
    cout << "UTC date and time is: " << dt;
}

----------------------------------------


//int tm_sec; // seconds of minutes from 0 to 61
//int tm_min; // minutes of hour from 0 to 59
//int tm_hour; // hours of day from 0 to 24
//int tm_mday; // day of month from 1 to 31
//int tm_mon; // month of year from 0 to 11
//int tm_year; // year since 1900
//int tm_wday; // days since sunday
//int tm_yday; // days since January 1st
//int tm_isdst; // hours of daylight savings time

int main() {
    time_t t = time(0); // get time now
    tm* now = localtime(&t);
    cout << "Year: " << now->tm_year + 1900 << endl;
    cout << "Month: " << now->tm_mon + 1 << endl;
    cout << "Day: " << now->tm_mday << endl;
    cout << "Hour: " << now->tm_hour << endl;
    cout << "Min: " << now->tm_min << endl;
    cout << "Second: " << now->tm_sec << endl;
    cout << "Week Day (Days since sunday): " << now->tm_wday << endl;
    cout << "Year Day (Days since Jan 1st): " << now->tm_yday << endl;
    cout << "hours of daylight savings:" << now->tm_isdst << endl;
}
*/