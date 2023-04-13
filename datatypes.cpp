// Whenever we start to learn any language, the Data type is the essential thing we need to know to get started with the coding part of the language. The data type can be defined as the type of data any variable could accommodate, such as integer, float, character data type, and more. There are several data types in every language, so to efficiently and correctly use these data types, we would be learning data types in detail.

// Scope
// We will be learning what data types are, different kinds of data types, and the syntax of using these different types of data types in this article.
// Here, we would also focus on the data type modifiers and their types.
// Definition of Data Types
// A data type is the type of data a variable can hold. For example, a Boolean variable can have boolean data, and an integer variable can hold integer data.

// While coding, we need to use different variables to store different information. Variables are just storage locations reserved for storing values. Therefore when you create the variable, you reserve some space in memory. You may want to store information for different data types, such as integers, floats, strings, and Boolean values. Memory is allocated based on the variable's data type. The amount of memory required depends on the data type.

// For example,

//  int score = 99;
// score here is an int datatype variable. The variable score can only store 2-byte or 4-byte integers, depending on the compiler/system.

// In C++, data types can be classified as follows:

// Primitive/Built-in Datatypes
// Derived Datatypes
// Abstract/User-defined Datatypes
// C ++ data types

// Primitive Data types in C++
// Users can use the primitive data types to declare variables, and these are built-in data types in C++, for instance, float, bool, etc. Primitive data types present in C++ are defined below:

// 1. Integer
// The keyword int can represent integer data types. The range of integers is -2147483648 to 2147483647, and they take up 4 bytes of memory.

// For example,

//  int data = 1526;
// data here is an integer data type variable. The variable data requires 2 or 4 bytes of memory space.

// Explore free courses by our top instructors
// View All
// Java Course Online for BeginnersTARUN LUTHRA
// Java Course Online for Beginners
// 41k+ enrolled
// Python Course for BeginnersRAHUL JANGHU
// Python Course for Beginners
// 24k+ enrolled
// C++ Online Course for BeginnersPRATEEK NARANG
// C++ Online Course for Beginners
// 22k+ enrolled
// 35,262+ learners have attended these Courses.
// 2. Character
// The keyword char represent characters. It is 1 byte in size. Single quotes ' ' are used to enclose characters in C++.

// For example,

//  char ch = 's';
// ch here is a character datatype variable.This means that the variable
//     requires 1
// byte of memory space.

//     3. Boolean
//         The boolean data type's keyword is bool. True or false are the two possible values for the boolean data type. Boolean values are generally used in conditional statements and loops.

//     For example,

//     bool is_true = true;
// is_true here is a boolean data type variable.This means that the variable
//     requires 1
// byte of memory space.

//     4. Floating Point float is the keyword used to hold floating -
//     point numbers(decimals and exponentials).The float variable has a size of 4 bytes.

//     For example,

//     float val = 15.26;
// val here is a floating - point datatype variable.This means that the variable
//                              requires 4
//                          bytes of memory space.

//                          5. Double Floating Point double is the keyword used to hold floating -
//                          point numbers(decimals and exponentials) with double precision.The double variable has a size of 8 bytes.

//                          For example,

//                          double val = 2019.1526;
// val here is a double floating-point datatype variable. This means that the variable requires 8 bytes of memory space.

// 6. Void or Valueless
// The term void refers to something that has no worth. The void data type represents a valueless entity. Variables of the void type cannot be declared. It is only used for functions, not returning any data.

// 7. Wide Character
// The wide-character wchar_t data type is similar to the char data type, but its size is 2 or 4 bytes rather than 1 byte. It's used to represent characters that take up more memory than a single char to represent.

// For example,

// wchar_t w = L'C';
// w here is a wide-character datatype variable that has a value of 67 (L'C') and has a size of 4 bytes. This means that the variable requires 2 bytes or 4 bytes of memory space.

// Derived Data types in C++
// Derived Data Types are data types that are created by combining primitive or built-in datatypes. There are four different types of derived data types. These are :

// 1. Function
// A function is a code segment or a block of code defined to accomplish a specific purpose. A function is often designed to spare the user from repeatedly writing the same lines of code for the same input. All the lines of code are combined into a single function that may be invoked from anywhere. Every C++ application includes a default function called main().The function also has a return type, which is used to specify the type of data the function would return when its execution is complete. The function's return type could be any data type, including the void, which states that there is no need to return anything once the execution of that function is complete.

// Syntax:

// function_return_type function_name(parameters)
// {
// }
// Example :

//     int
//     sum(int num1, int num2)
// {
//     return (num1 + num2);
// }
// Here, the return type of the sum function is an integer, and the function is used to calculate the sum of 2 numbers.

//                                                              2. Array An array is a set of elements that are kept in memory in a continuous manner and also have the same type of data present within the array.The purpose of an array is to store a lot of data in a single variable name and sequential order.

//                                                              Syntax :

//     datatype array_name[size_of_array];
// Example :

//     int arr[4] = {0, 1, 2, 3};
// Here, we have defined an integer array of size 4, which can continuously store four integer variables in memory.

//                                                       3. Pointer Pointers are symbolic representations of addresses.Pointers store the addresses of the variables having the same datatype as that of the pointer.The size of the pointer is either 4 bytes or
//                                                       8 bytes,
//     no matter what the data type is.They enable programs to create and change dynamic data structures, as well as to imitate call - by - reference.In C / C++, its generic declaration looks like this :

//     Syntax :

//     data_type *variable_name;
// Example :

//     int *point_int;
// point_int holds the address of a variable of an integer datatype.

// 4. Reference
// When we declare a variable as a reference, it becomes an alternate name for an existing variable. By adding '&' to a variable's declaration, it can be declared as a reference.

// Example:

//  int val = 1526;
// int &ref = val;
// Here ref becomes the reference to integer val, and now any changes in one would be automatically reflected in the other as they both represent the same memory location.

//                                                    Abstract or
//                                                    User - Defined Data types in C++ The Abstract datatype,
//     also known as user - defined data type, is a type of data defined by the user.

//                                                 Examples of these are :

//                                                 1. Class A Class is a C++ building piece that leads to Object -
//                                                 Oriented programming.It's a user-defined data type with its own set of data members and member functions that can be accessed and used by establishing a class instance. A class defines the blueprint for a data type.

//                                                 Example :

//     class scaler
// {
// public:
//     string student_name;

//     void print_name()
//     {
//         cout << "Student name is: " << student_name << endl;
//     }
// };

// int main()
// {
//     scaler student1, student2;
//     student1.student_name = "Shivam Singla";
//     student1.print_name();
//     student2.student_name = "Sachin Singla";
//     student2.print_name();
//     return 0;
// }
// Output :

//     Student name is : Shivam Singla
//                           Student name is : Sachin Singla
//                                                 In the above example,
//                                             the scaler is the name of the class.We can include the data members,
//                                             which are the class variables.Similarly,
//                                             member functions are added to the class; for
//     example, print_name(), here is the member function, and student_name is the data member.Here, the student1 and student2 are the class scaler objects.

//                                                                                                       2. Structure A structure datatype is a user
//                                                                                                       - defined data type that combines objects of potentially different data types into a single type.

//                                                                                                         Example :

//         struct student
//     {
//         char name[15];
//         char roll_no[10];
//         int marks;
//     };
// Here, different data types, such as an array of characters and integer data types, are combined to make a new data type according to the user's need.

//                                                                                        3. Union Union is similar to Structures as it is also used to combine the different types of data into a single user -
//                                                                                        defined data type.All members of a union have access to the same memory.In the below - shown example,
//     we can combine the integer data type and the character data type into a single data type called test.In this case, as both the data types, integer, and character have different data sizes, we would take the larger data type as the size of the new user - defined data type test.We can see how changes in num are reflected in var if we adjust num.

//                                                                                                                                                                                                                                                                   Example:

// union test
// {
//     int num;
//     char var;
// };
// Here, num and var share the same memory.Therefore, if we change any variables, the changes will automatically reflect in another variable.

//                                                                                4. Enumeration In C++,
//     an enumeration(or enum) is a data type that the user creates.It's primarily used to give integral constant names, making the program easier to comprehend and maintain. In enumeration, if we do not provide the integral values explicitly to the strings, then, in that case, the strings automatically start assigning the integral values starting from value 0, the same as the case of 0-based indexing.

//     Example :

//     enum result { pass = 100,
//                   fail = 0 };
// Here, we have given the integer value 100 to be pass and 0 as fail;
// therefore, if we write,

//     enum result res;
// res = pass;
// Then, the value of res would automatically be 100.

//       5. Typedef defined DataType
//           The term typedef in C++ allows you to declare explicit new data type names.Using typedef does not create a new data class;
// instead, it gives an existing type a name.Because just the typedef statements would need to be updated, a program's portability might be improved by making minimal changes. By permitting descriptive terms for the standard data types, typedef can aid in self-documenting code.

//     Example :

//     typedef long int ll;
// Now we can use ll to define the long int data type in the code.

//     For Example,

//     ll val;
// val = 123;
// Datatype Modifiers in C++ DataType modifiers can be used to change some of the core data types further.In C++, there are four modifiers.int, double, and char are the data types that can be modified using these modifiers.They are as follows :

//                                                                                                                                                          1. Signed 2. Unsigned 3. Short 4. Long Datatype Modifiers in C++

//                                                                                                                                                          The table below illustrates the variable type,
//     the amount of memory required to hold the value in memory, and the maximum and lowest values stored in such variables.The below values may differ from one compiler to another.GCC 32 bit was used in the following values.

//                                                                    DataType
//                                                                    Size(in Bytes) Range int or
//                                                                    signed int 4 Bytes - 2,
//     147, 483, 648 to 2, 147, 483, 647 unsigned int 4 Bytes 0 to 4, 294, 967, 295 short int 2 Bytes - 32, 768 to 32, 767 long int 4 Bytes - 2, 147, 483, 648 to 2, 147, 483, 647 unsigned short int 2 Bytes 0 to 65, 535 unsigned long int 8 Bytes 0 to 4, 294, 967, 295 long long int 8 Bytes - (2 ^ 63) to(2 ^ 63) - 1 unsigned long long int 8 Bytes 0 to 18, 446, 744, 073, 709, 551, 615 signed char 1 Bytes - 128 to 127 unsigned char 1 Bytes 0 to 255 wchar_t 2 or 4 Bytes 1 wide character float 4 Bytes double 8 Bytes long double 12 Bytes The code below will result in the correct size of various data types on your PC : Code :

// #include <bits/stdc++.h>
//     using namespace std;

// int main()
// {
//     cout << "Size of following Datatypes in bytes: \n";
//     cout << "int : " << sizeof(int) << endl;
//     cout << "unsigned int : " << sizeof(unsigned int) << endl;
//     cout << "short int : " << sizeof(short int) << endl;
//     cout << "long int : " << sizeof(long int) << endl;
//     cout << "unsigned short int : " << sizeof(unsigned short int) << endl;
//     cout << "unsigned long int : " << sizeof(unsigned long int) << endl;
//     cout << "long long int : " << sizeof(long long int) << endl;
//     cout << "unsigned long long int : " << sizeof(unsigned long long int) << endl;
//     cout << "signed char : " << sizeof(signed char) << endl;
//     cout << "unsigned char : " << sizeof(unsigned char) << endl;
//     cout << "wchar_t : " << sizeof(wchar_t) << endl;
//     cout << "float : " << sizeof(float) << endl;
//     cout << "double : " << sizeof(double) << endl;

//     return 0;
// }
// Output :

//     Size of following Datatypes in bytes : int : 4 unsigned int : 4 short int : 2 long int : 8 unsigned short int : 2 unsigned long int : 8 long long int : 8 unsigned long long int : 8 signed char : 1 unsigned char : 1 wchar_t : 4 float : 4 double : 8 Conclusion
//                                                When starting to code in any language,
//                                            the first thing we must understand is datatypes.We learned datatypes in great detail in this section,
//                                            and I would urge that you all practice with datatypes more to learn C++ quickly.Some important points to focus on from the above article are discussed below :

//     There are three data types in C++ which are primitive data types,
//                                            abstract data types,
//                                            and derived data types.Primitive data types include integer,
//                                            floating - point,
//                                            character,
//                                            boolean,
//                                            double floating - point,
//                                            valueless or void,
//                                            and wide character.User - defined or Abstract Data types include class,
//                                            enumeration,
//                                            union,
//                                            structure,
//                                            and typedef defined data type.Derived Data types include array,
//                                            function,
//                                            pointer,
//                                            and reference.Different data modifiers are short,
//                                            long,
//                                            signed,
//                                            and unsigned,
//                                            which we could apply to data types like int,
//                                            double,
//                                            char,
//                                            etc.