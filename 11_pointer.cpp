#include <iostream>
using namespace std;

int main()
{
    cout << "***********************pointer*************************" << endl;
    int a = 3;
    int *b = &a;
    cout<<b<<endl;
    cout<<&a<<endl;

    cout<<*b<<endl;

    return 0;
}


// types of pointer
// 1. Integer Pointers
// int *ptr;

// 2. Array Pointer
// char *ptr = &array_name;

// 3. Structure Pointer
// struct struct_name *ptr;

// 4. Function Pointers
// int (*ptr)(int, char);

// 5. Double Pointers
// datatype ** pointer_name;
// *pointer_name; // get the address stored in the inner level pointer
// **pointer_name; // get the value pointed by inner level pointer

// 6. NULL Pointer
// data_type *pointer_name = NULL;
//         or
// pointer_name = NULL

// 7. Void Pointer
// void * pointer_name;

// 8. Wild Pointers
// int *ptr;
// char *str;

// 9. Constant Pointers
// data_type * const pointer_name;

// 10. Pointer to Constant
// const data_type * pointer_name;

// Far pointer
// Dangling pointer
// Huge pointer
// Complex pointer
// Near pointer
// Normalized pointer
// File Pointer