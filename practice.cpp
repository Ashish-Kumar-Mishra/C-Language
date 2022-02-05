// // #include <iostream>
// // using namespace std;

// // class Student
// // {
// // protected:
// //     int roll_number;

// // public:
// //     void set_roll_number(int);
// //     void get_roll_number(void);
// // };

// // void Student ::set_roll_number(int r)
// // {
// //     roll_number = r;
// // }

// // void Student ::get_roll_number()
// // {
// //     cout << "The roll number is " << roll_number << endl;
// // }
// // class Exam : public Student
// // {
// // protected:
// //     float maths;
// //     float physics;

// // public:
// //     void set_marks(float, float);
// //     void get_marks(void);
// // };

// // void Exam ::set_marks(float m1, float m2)
// // {
// //     maths = m1;
// //     physics = m2;
// // }

// // void Exam ::get_marks()
// // {
// //     cout << "The marks obtained in maths are: " << maths << endl;
// //     cout << "The marks obtained in physics are: " << physics << endl;
// // }
// // class Result : public Exam
// // {
// //     float percentage;

// // public:
// //     void display_results()
// //     {
// //         get_roll_number();
// //         get_marks();
// //         cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
// //     }
// // };
// // int main()
// // {
// //     Result harry;
// //     harry.set_roll_number(420);
// //     harry.set_marks(94.0, 90.0);
// //     harry.display_results();
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class Complex{
// //     int a,b;
// //     friend Complex sumcomplex(Complex x1,Complex y1);
// //     public:
// //     void setdata(int x,int y){
// //         a=x,b=y;
// //     }
// //     // void sumcomplex(Complex x1,Complex y1){
// //     //     a=x1.a+y1.a;
// //     //     b=x1.b+y1.b;
// //     // }
// //     void display(){
// //         cout<<"the number is "<<a<<"+"<<b<<"i"<<endl;
// //     }

// // };
// // Complex sumcomplex(Complex x1,Complex y1){
// //     Complex z1;
// //    z1.setdata((x1.a+y1.a),(x1.b+y1.b)); 
// //    return z1;
// // }
// // int main(){

// // Complex c1,c2,sum;
// // // Complex c3
// // c1.setdata(2,3);
// // c1.display();
// // c2.setdata(3,4);
// // c2.display();
// // // c3.sumcomplex(c1,c2);
// // // c3.display();
// // sum=sumcomplex(c1,c2);
// // sum.display();


// // return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class Complex {
// //     int a,b;
// //     public:
// //     void setdata(int x,int y){
// //         a=x;
// //         b=y;
// //     }
// //     void display(){
// //         cout<<"the number is "<<a<<"+"<<b<<"i"<<endl;
// //     }
// //     friend Complex operator +(Complex X, Complex Y);

// // };
// // Complex operator+(Complex X,Complex Y){
// //     Complex Z;
// //     Z.setdata((X.a+Y.b),(X.b+Y.b));
// //     return Z;
// // }
// // int main(){
// // Complex c1,c2,c3;
// // c1.setdata(3,4);
// // c1.display();
// // c2.setdata(5,6);
// // c2.display();
// //  c3=c1+c2; //c3=operator+(c1,c2);
// // c3.display();
// // return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // class Complex
// // {
// // private:
// // int a,b;
// // public:
// // void setdata(int x,int y){
// //     a=x;
// //     b=y;
// // }
// // void display(){
// //     cout<<"the number is :"<<a<<"+"<<b<<"i"<<endl;
// // }
// // friend Complex sumcomplex (Complex o1 ,Complex o2);
// // };

// // Complex sumcomplex(Complex o1 ,Complex o2){
// // Complex o3;
// // o3.setdata((o1.a+o2.a),(o1.b+o2.b));
// // return o3;
// // }
// // int main(){
// //     Complex c1,c2,sum;
// //     c1.setdata(4,5);
// //     c1.display();
// //     c2.setdata(5,6);
// //     c2.display();
// //     sum=sumcomplex(c1,c2);
// //     sum.display();
// // }

// #include<iostream>
// using namespace std;
// class B;
// class A{
//     private:
//     int a;
//     public:
//     void setdata(int x){
//         a=x;
//     }
//     friend void fun(A,B);
// };
// class B{
//     private:
//     int b;
//     public:
//     void setdata(int y){
//         b=y;
//     }
//     friend void fun(A,B);
// };
// void fun(A o1, B o2){
//     cout<<"sum is "<<o1.a+o2.b<<endl;
// }

   
// int main(){
// A obj1;
// B obj2;
// obj1.setdata(3);
// obj2.setdata(5);
// fun(obj1,obj2);
// return 0;
// }
// C++ program for implementation of selection sort
#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}

// This is code is contributed by rathbhupendra
