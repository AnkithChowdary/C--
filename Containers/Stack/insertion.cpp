#include<iostream>
#include<stack>
using namespace std;


int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout << "Top element: " << s.top() << endl;
  cout<< "Size of stack: " << s.size();
}