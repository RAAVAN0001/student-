#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollnumber;
    uint64_t phone;
    void display()
    {
        cout << "the name of student is: " << name << ",  and rollno. is: " << rollnumber << " and its number is "<<phone<< endl;
    }
};

int main()
{
    student avi, raju;
    raju.name="rajnish";
    raju.phone=9465183258;
    raju.rollnumber=2580;
    raju.display();
    avi.name = "avinash";
    avi.phone=6239378916;
    avi.rollnumber = 2590;
    avi.display();

    return 0;
}