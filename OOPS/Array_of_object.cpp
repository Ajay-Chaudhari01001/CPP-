#include<iostream>
using namespace std;

class Shop{
    int no;
    int price;
    public:
        void setData(int x, int y){
            no = x;
            price = y;
        }
        void shwoData(){
            cout<<"Item Number = "<<no<<" "<<"and Price = "<<price<<endl;
        }
};
int main(){
    int a, b;
    int size = 4;
    Shop *ptr = new Shop[size];  // Array of Object...
    Shop *ptrtemp = ptr;
    for(int i=0; i<size; i++)
    {
        cout<<"Number and Price of Item "<< i+1;
        cin>>a>>b;
        //(*ptr).setData(a,b);
        ptr->setData(a,b);
        ptr++;
    }
    for(int i=0; i<size; i++)
    {
        ptrtemp->shwoData();
        ptr++;
    }
}