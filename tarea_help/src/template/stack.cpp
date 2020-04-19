//
// Author: marvin on 4/19/20.
//

#include "stack.h"

template<typename T>
stack<T>::stack() {
    v = {};
}

template<typename T>
bool stack<T>::isEmpty() {
    return v.size() == 0;
}

template<typename T>
int stack<T>::size() {
    return v.size();
}

template<typename T>
void stack<T>::push(T a) {
    v.push_back(a);
}

template<typename T>
void stack<T>::pop() {
    v.pop_back();
}

template<typename T>
stack<T>::stack(const stack<T> &a) {
    v = a.v;
}

template <typename T>
ostream &operator<<(ostream &os, const stack<T> &s) {


}

template<typename T>
bool stack<T>::operator==(const stack<T> &a) {
    if (v==a.v){
        return true;
    }
    else{
        return false;
    }
}

template<typename T>
T const &stack<T>::top() {
    return v[v.size() - 1];
}

template<typename T>
void stack<T>::operator=(const stack<T> &a) {
    v = a.v;
}
