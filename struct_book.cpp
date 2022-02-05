#include<iostream>
using namespace std;
struct book
{
    /* data */
    int bookid;
    char title;
    float price;
};
int main(){
    struct book math;
    math.bookid=1;
    math.title='M';
    math.price=100;
    cout<<"the value of:"<<math.bookid<<endl; 
    cout<<"the value of:"<<math.title<<endl;
    cout<<"the value of:"<<math.price<<endl;
}



