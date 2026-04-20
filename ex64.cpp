#include<iostream>
#include<string>
using namespace std;
class Student{
    protected:
    int id;
    string name;
    public:
    void getDetails()
    {
        cin>>id>>name;
    }
};
class Marks{
    protected:
    int s1,s2,s3;
    public:
    void getMarks()
    {
        cin>>s1>>s2>>s3;
    }
};
class Sports{
    protected:
    float m1;
    public:
    void getSportsMark()
    {
        cin>>m1;
    }
};
class Result:public Student,public Marks,public Sports{
    float total,avg,score;
    public:
    void calc()
    {
        total=s1+s2+s3;
        avg=total/3;
        score=m1+avg;
    }
    void display()
    {
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Average marks: "<<avg<<endl;
        cout<<"Total Score: "<<score<<endl;
    }
};
int main()
{
    Result r1;
    r1.getDetails();
    r1.getMarks();
    r1.getSportsMark();
    r1.calc();
    r1.display();
    return 0;
}