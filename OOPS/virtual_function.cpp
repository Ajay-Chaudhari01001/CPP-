#include<iostream>
using namespace std;

class Graph{

    public:
        // virtual function define in base class
        virtual void get(){
            cout<<"Get Function Of Graph Class..."<<endl;
        }
        // virtual function define in base class
        virtual void display(){
            cout<<"Display Funtion Of Graph Class..."<<endl;
        } 
};
class Circle: public Graph{
    int redius;
    float area;
    public:
        void get(){
            cout<<"Enter a redius of circle "<<endl;
            cin>>redius;
        }
        void display(){
            area = redius*3.14;
            cout<<"area of circle is = "<<area<<endl;
        }
};
class Rect: public Graph{
    int lenght, bredth;
    float area;
    public:
        void get(){
            cout<<"Enter length and bredth of Rectangle "<<endl;
            cin>>lenght>>bredth;
        }
        void display(){
            area = lenght*bredth;
            cout<<"Area of rectangel "<<area<<endl;
            
        }
};
int main(){
    Graph *g[2];   //pointer to object & array of object
    Circle c;
    Rect r;
    g[0] = &c;   
    g[1] = &r;

    for(int i=0; i<2; i++){
        // to access data members using arro operator..
        g[i]->get();         
        g[i]->display();
    }
    return 0;
}