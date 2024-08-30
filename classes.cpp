#include <iostream>
using namespace std;

class student {
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main() {
    student s1;
    s1.name = "Arya Shahi";
    s1.branch = "ENTC-A2";
    s1.subject = "cds";
    s1.year = "2023-2027";

    
    cout <<"Name:"<< s1.name << endl;
    cout <<"Branch:" << s1.branch << endl;
    cout <<"Subject: "<< s1.subject << endl;
    cout <<"Year:"<< s1.year << endl;
    

return 0;
}