#include<bits/stdc++.h>
using namespace std;
class student{
public:
    string name;
    int std_id;
    int age;

    void printInformation()
    {
        cout<<name<<" "<<std_id<<" "<<age;
    }
};
int main()
{
    student s;
    s.name="Mohidul";
    s.std_id=1902016;
    s.age=23;

    s.printInformation();
    return 0;
}
