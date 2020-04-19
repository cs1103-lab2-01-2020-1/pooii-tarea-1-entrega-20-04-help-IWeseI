//
// Author: marvin on 4/19/20.
//

#include "lib.h"

int main() {

    Stack<int> intstack;
    Stack<string> stringstack;

    intstack.push(100);
    cout<<<intstack.top()<<endl;

    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.pop();
    
    stack<string> a;
    if (a.isEmpty()){
        cout<<"a esta vacio";
    } cout<<endl;

    a.push("hola");
    cout<<a.top()<<endl;
    a.push("como");
    cout<<a.top()<<endl;
    a.push ("estas");
    cout<<a.top()<<endl;

    stack<float> b;
    b.push(3.2);
    b.push(2.2);
    b.push(1.2);
    b.pop();
    cout<<b.top()<<endl;
    cout<<"el stack b con tiene "<<b.size()<<" elementos";
    
    stack<string> c;
    c = a;
    cout<<c.top();

    return 0;
}
