#include <iostream>

/*
https://www.modernescpp.com/index.php/c-core-guidelines-function-objects-and-lambas

F.50: Use a lambda when a function won’t do (to capture local variables, or to write a local function)
The difference of the usage of functions and lambda functions boils down to two points.
    You can not overload lambdas.
        A lambda function can capture local variables.
        Here is a contrived example to the second point.

F.52: Prefer capturing by reference in lambdas that will be used locally, including passed to algorithms
F.53: Avoid capturing by reference in lambdas that will be used nonlocally, including returned, stored on the heap, or passed to another thread

ES.28: Use lambdas for complex initialization, especially of const variables

*/
int main()
{

}