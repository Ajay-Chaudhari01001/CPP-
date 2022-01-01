#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
  deque<int> deq={7,8,4,5};  
  deque<int>::iterator itr;  
  deq.emplace(deq.begin(),1); // 1 is insert new line after print numbers 
  for(itr=deq.begin();itr!=deq.end();++itr)  
  std::cout << *itr <<" ";  
    return 0;  
}  