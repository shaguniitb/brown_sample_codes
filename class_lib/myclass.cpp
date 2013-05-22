#include "myclass.h"
#include <iostream>

void MyClass::foo()
{
    cout << "In foo ";
}

int main(){
    MyClass a;
    a.id = 1;
    a.bar = 9;
    a.foo();
    return a.id;
}

int test(){
    return 10;
}
    
MyClass * set_class(int class_id){
    MyClass *a;
    a->id = class_id;
    return a;
}

int assign_bar(MyClass * m){
    m->bar = 5;
    return 0;
}
