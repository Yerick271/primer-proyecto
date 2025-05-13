#ifndef STUDENT_H
#define STUDENT_H
#include "string"

class student
{
  private:
      std::string name;
      int code;
      int age;

  public:
    student() {
        name="";
        code=0;
        age=0;
    }
    student (std::string n, int c, int a) {
        name=a;
        code=c;
        age=a;
    }


    std::string getname()const {
        return name;
    }
    void setname (std::string n) {
        name=n;
    }
    int getcode () const {
        return code;
    }
    void stecode (int c) {
        code=c;
    }
    int getage() const {
        return age;
    }
    void setage (int a) {
        age=a;
    }


#endif // STUDENT_H
