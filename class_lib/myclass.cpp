#include "myclass.h"
#include <iostream>

void MyClass::foo()
{
    cout << "In foo ";
}

int main(){
    MyClass a;
    a.bar = 9;
    a.foo();
    return a.bar;
}

