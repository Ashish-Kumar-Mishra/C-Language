#include<iostream>
using namespace std;
class Student{
private:
int roll;
float marks;
public:
Student (int r ,float m){
    roll =r;
    marks=m;
}
void display(){
    cout<<"the roll no of student is:"<<roll<<endl;
    cout<<"the marks of student is:"<<marks<<endl;
}
~Student(){
    cout<<"destructor is invoked"<<endl;
}
};
int main(){
Student Ashish(23,99.9);
Ashish.display();

return 0;
}