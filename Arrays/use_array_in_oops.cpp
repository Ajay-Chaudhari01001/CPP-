#include<iostream>
using namespace std;
class Shop
{
    int itemid[50];
    int itemprice[50];
    int counter;
    public:
    void setitem(void);
    void displayitem(void);
    void initcounter(void)
    {
        counter=0;
    }
};
void Shop :: setitem(void)
{
    cout<<"Enter Item Id For Item Number "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter Item Price :";
    cin>>itemprice[counter];
    counter++;
}
void Shop :: displayitem(void)
{
    for(int i=0; i<=counter; i++)
    {
         cout<<"Item id "<<counter+1<<"item number is :"<<itemid[i]<<endl;
         cout<<"Enter Item Price is :"<<itemprice[i]<<endl;
    }
}
int main()
{
    Shop dukan;
    dukan.initcounter();
    dukan.setitem();
    dukan.setitem();
    dukan.setitem();
    dukan.displayitem();

    return 0;
}