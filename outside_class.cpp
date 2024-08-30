#include <iostream>
using namespace std;

class student
{
    public:

    void studyyear();
   
};
void student::studyyear()
{
    cout << "2023-2027";
}

int main()
{
    student s1;
    s1.studyyear();
    return 0;
}