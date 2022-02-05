#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter u age";
    cin>>age;
    // cout<<"enter age of person allowed to attend my party"<<endl;
    // SELECTION control structure
//     if(age<18&&age>0){
//     cout<<"you can't come to my party";
//     }
//   else  if(age==18){
//     cout<<"you are kid annd u will get kid pass to the party"<<endl;
//       }
//  else  if(age<1){
//     cout<<" u are not born yet"<<endl;
//         }
//     else{
//     cout<<"u can come to my party"<<endl;
//          }
switch (age)
{
case 22: /* constant-expression */
           /* code */
cout<<"u are 22";
case 18 :         
cout<<"you are 18"<<endl;
    break;
case 34:
cout<<"you are 34"<<endl;
break;
default:
cout<<"no special cases"<<endl;
break;


}



         return 0;



}