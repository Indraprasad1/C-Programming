#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    // Properties//attributes
    string name;
    string dept;
    string subject;

    //Methods//member functions
    void changeDept (string newDept) {
        dept = newDept;
    }

    //Setter
    void setSalary(double s){
        salary = s;
    }

    //Getter
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;  //constructor called
    t1.name="Indra Prasad";
    t1.dept="Computer Science";
    t1.subject="DSA";
    t1.setSalary(25000);
    
    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
