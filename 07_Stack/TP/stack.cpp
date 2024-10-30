#include "stack.h"
#include <iostream>
using namespace std;

void createStack(stack &S) {
    S.Top = 0;
}
bool isEmpty(stack S) {
    return S.Top == 0;
}
bool isFull(stack S) {
    return S.Top == 15;
}
void push(stack &S, infotype x) {
    if (!isFull(S)) {
        S.info[S.Top++] = x; 
    }
}
int pop(stack &S) {
    if (!isEmpty(S)) {
        return S.info[--S.Top]; 
    }
    return -1; 
}
void printInfo(stack S) {
    for (int i = 0; i < S.Top; i++) { 
        cout << S.info[i] << " "; 
    }
    cout << endl; 
}