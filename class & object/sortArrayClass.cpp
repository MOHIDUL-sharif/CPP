#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;

    Student(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<"\n";
    }
};

bool comp(Student a , Student b)
{

    return a.std_id < b.std_id;
}

int main()
{
    vector<Student>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(Student("A" , 20-i , 20));
    }

    for(int i=0;i<10;i++)
    {
        a[i].print_information();
    }

    cout<<"After sorting\n";

    sort(a.begin(),a.end(),comp);

    for(int i=0;i<10;i++)
    {
        a[i].print_information();
    }
    return 0;
}
