#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "the roll number is" << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "the maks obtained in maths:" << maths << endl;
    cout << "the maks obtained in physics:" << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();

        cout << "the percentage is" << (maths + physics) / 2 << endl;
    }
};
int main()
{
    Result ashish;
    ashish.set_roll_number(100);
    ashish.set_marks(90.0, 95.0);
    ashish.display_results();
    return 0;
}