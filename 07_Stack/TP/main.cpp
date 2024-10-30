#include <iostream>
#include "stack.h"

void pushString(stack &S, const std::string &str) {
    for (char c : str) {
        push(S, c);
    }
}
void popString(stack &S, int n) {
    for (int i = 0; i < n; ++i) {
        pop(S);
    }
}

int main() {
    stack S;
    createStack(S);

    // Disini ganti menggunakan digit terakhir NIM untuk perhitungan MOD
    int lastDigitOfNIM = 5; 

    if (lastDigitOfNIM % 4 == 0) {
        pushString(S, "IFLABJAYA");
        std::cout << "Initial stack: ";
        printInfo(S);
        popString(S, 4);
        std::cout << "Stack after pop: ";
        printInfo(S);
    } else if (lastDigitOfNIM % 4 == 1) {
        pushString(S, "HALOBANDUNG");
        std::cout << "Initial stack: ";
        printInfo(S);
        popString(S, 7);
        std::cout << "Stack after pop: ";
        printInfo(S);
    } else if (lastDigitOfNIM % 4 == 2) {
        pushString(S, "PERCAYADIRI");
        std::cout << "Initial stack: ";
        printInfo(S);
        popString(S, 8);
        std::cout << "Stack after pop: ";
        printInfo(S);
    } else if (lastDigitOfNIM % 4 == 3) {
        pushString(S, "STRUKTURDATA");
        std::cout << "Initial stack: ";
        printInfo(S);
        popString(S, 10);
        std::cout << "Stack after pop: ";
        printInfo(S);
    }
    return 0;
}
