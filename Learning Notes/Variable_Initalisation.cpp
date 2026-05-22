#include <iostream>
using namespace std;

int main()
{
    int a; //Declaration
    //No value is assigned to 'a' thus it contains garbage values a slang for an indeterminate value
    //But Globally it is assigned to zero

    //Types of initialisation
    int b = 5;  //copy Initialisation
    int b (5);  //Direct Initialisation (Parenthesis)
    int b {5}; //Direst list Initialisation (Braces) [Recommended]

    //Conversions

    int c = 5.5; // c sucessfully copy initialised to 5 (narrowing conversions)
    int c (5.5);  // c sucessfully Direct initialised to 5 (narrowing conversions)
    int c {5.5};  // Error : Direct list initialisation dosent allow narrowing conversions

    //Value initialisation / Zero Initialisation

    int d {}; // d is the assigned value zero or anything close to zero for the specific data type

    int e {}; // Useful for temporary use
    int e { 0 }; // Useful for permenet use

    //Pitfalls

    int a = 4, b = 5; // correct: a and b both have initializers

    int a, b = 5;     // wrong: a doesn't have its own initializer

    //Unused Variables

    int f { 45 };

    //f not used anywhere
    //Produces Warning

    [[maybe_unused]] int f { 45 }; //Dosent produces error if unused

    return 0;
}