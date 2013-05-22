using namespace std;
class MyClass
{
public:
    void foo();
    int bar;
    int id;
};
extern "C"{
    int test();
    int main();
    MyClass * set_class(int class_id);
    int assign_bar(MyClass * m);
}
