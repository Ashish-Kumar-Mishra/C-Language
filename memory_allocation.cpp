#include<iostream>
using namespace std;
class shop{
    int itemId[10];
    int itemprice[10];
    int counter;

public:
void initcounter(void){ counter=0;}
void setprice(void);
void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout<<"the price of item id"<<itemId[i]<<" is "<<itemprice[i]<<endl;

    }

}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;


return 0;
}