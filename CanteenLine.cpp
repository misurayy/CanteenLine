#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> canteenLine = {"Neha", "Rohan", "Simran", "Aditya", "Karan"};

    canteenLine.push_back("Amit");      
    canteenLine.push_front("Riya");     

    cout << "Line before serving:\n";
    for (const string& student : canteenLine) {
        cout << student << " ";
    }
    cout << endl;

    canteenLine.pop_front();

    cout << "Line after serving:\n";
    for (const string& student : canteenLine) {
        cout << student << " ";
    }
    cout << endl;

    return 0;
}
