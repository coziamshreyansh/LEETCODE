#include<iostream>
#include<stack>
using namespace std;
void stack_helper(stack<int>& s, int mid, int curr){
    if(curr == mid){
        s.pop(); return;
    }
    int val = s.top();
    s.pop();
    stack_helper(s, mid, curr+1);
    s.push(val);
    return;
}
void stackmidfigout(stack<int>& s){
    if(s.empty() || s.size()==1){
        return ;
    }
    int mid = s.size()/2;
    stack_helper(s, mid, 0);
    
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    stackmidfigout(s);
    for(int i = 0; i < 6; i++){
        cout<<s.top()<<"\n";
        s.pop();
    }
    
    
    
}
