#include<iostream>
#include<deque>
using namespace std;

int main() {
  deque<int>d;
  d.push_back(50);
  d.push_back(40);
  d.pop_back();
  d.pop_front();
  d.clear();
  deque<int>::iterator it=d.begin();
  if(d.empty()==true){
    cout << "deque is empty";
  }
  else{
    cout << "Deque is not empty";
  }
  
}