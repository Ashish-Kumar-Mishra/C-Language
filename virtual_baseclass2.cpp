#include<iostream>
using namespace std;
/* 
inheritance:
student-->test [done]
student-->sports [done]
text-->result [done]
sports--> result [done]

 */
class Student{
    protected:
    int roll_number;
    public:
    void setData(int a){
        roll_number=a;
    }
    void printNumber(void){
        cout<<"the roll no is"<<roll_number<<endl;
    }
};
class Test :virtual public Student{
protected:
float maths ,physics;
public:
void setmarks(float m1,float m2){
maths=m1;
physics=m2;
}
void printmarks(void){
    cout<<"u result is here:"<<endl
         <<"maths: "<<maths<<endl
        <<"physics:"<<physics<<endl;
}
};
class Sports :virtual public Student{
protected:
float score;
public:
void setScore(float sc){
    score=sc;
}
void printScore(void){
    cout<<"u  P.T score is"<<score<<endl;
}
};
class Result:public Test,public Sports{
private:
float total;
public:
void display(void){
    total=maths+physics+score;
    printNumber();
    printmarks();
    printScore();
    cout<<"u total score is:"<<total<<endl;
}
};
int main(){
Result Ashish;
Ashish.setData(245);
Ashish.setmarks(90.5,45.5);
Ashish.setScore(90);
Ashish.display();
return 0;
}