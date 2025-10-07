#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

    return 0;
}
//----------------------------------------
#include <iostream>

int main()
{
#ifndef PRINT_BOB
    std::cout << "Bob\n";
#endif

    return 0;
}
//----------------------------------------
//multi line comment without multi line comment
#include <iostream>

int main()
{
    std::cout << "Joe\n";

#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    /* Some
     * multi-line
     * comment here
     */
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}
//In most cases, macro substitution does not occur when a macro identifier is used within another preprocessor command.

#define FOO 9 // Here's a macro substitution

#ifdef FOO // This FOO does not get replaced with 9 because it’s part of another preprocessor directive
    std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
#endif

//Directives are resolved before compilation, from top to bottom on a file-by-file basis.
#include <iostream>

void foo()
{
#define MY_NAME "Alex"
}

int main()
{
	std::cout << "My name is: " << MY_NAME << '\n';

	return 0;
}
//Even though it looks like #define MY_NAME “Alex” is defined inside function foo,
//the preprocessor doesn’t understand C++ concepts like functions. Therefore,
//this program behaves identically to one where #define MY_NAME “Alex” was defined
//either before or immediately after function foo. To avoid confusion, you’ll generally want
//to #define identifiers outside of functions.


//For the funny
//function.cpp
#include <iostream>

void doSomething()
{
#ifdef PRINT
    std::cout << "Printing!\n";
#endif
#ifndef PRINT
    std::cout << "Not printing!\n";
#endif
}
//main.cpp
void doSomething(); // forward declaration for function doSomething()

#define PRINT

int main()
{
    doSomething();

    return 0;
}

//Even though PRINT was defined in main.cpp, that doesn’t have any impact on any of the code in function.cpp
//(PRINT is only #defined from the point of definition to the end of main.cpp)
