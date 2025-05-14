#include <iostream>
#include "student.h"
using namespace std;

struct student {
    string name;
    int code;
    int age;
    student() {
        name ="";
        code=0;
        age=0;
    }
};

int main()
{
    student st1;
    st1.setname("jose");
    st1.setcode(1547838);
    st1.setage(18);
    cout<<st1.getname()<<endl;
    cout<<st1.getcode()<<endl;
    cout<<st1.getage()<<endl;

    student st2;
    cout<<st2.getname()<<endl;
    cout<<st2.getcode()<<endl;
    cout<<st2.getage()<<endl;

    student st3("pedro", 777777, 19);
    cout<<st2.getname()<<endl;
    cout<<st2.getcode()<<endl;
    cout<<st2.getage()<<endl;

    return 0;
}
