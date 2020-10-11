#include <iostream>
#include <stack>
using namespace std; 


int ST(stack<int> ST){
    ST.push(5);
    ST.push(4);
    ST.push(3);
    ST.push(2);
    ST.push(1);
    int res; 
    while(!ST.empty()){
        cout << ST.top() << endl;
        if(ST.top() == 2){
            res = ST.top(); 
        }
        ST.pop(); 
    }
    return res; 
}

int main(){
    // 1 2 3 4 5 
    stack<int> st; 
    cout << ST(st); 
    
}