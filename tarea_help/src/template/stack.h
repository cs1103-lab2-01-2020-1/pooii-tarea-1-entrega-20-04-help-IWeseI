//
// Author: marvin on 4/19/20.
//

#ifndef STACK_H
#define STACK_H

#include "../lib.h"

using namespace std;

template <typename  T> class stack{
private:
    vector<T> v;
public:
    stack();
    stack(const stack<T>& a);
    void operator =( const stack<T>&a);
    bool isEmpty();
    int size();
    void push(T a);
    void pop();
    T const & top();
    friend ostream& operator<<(ostream& os, stack<T> const& s);
    bool operator ==(const stack<T>& a);

};


#endif //STACK_H
