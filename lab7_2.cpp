#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    string name;
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    string studentID;
    cout << name << ": ";
    getline(cin, studentID); 
    int firstTwoDigits = stoi(studentID.substr(0, 2));
    int gear = firstTwoDigits - 12;
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    string movie;
    cout << name << ": ";
    getline(cin, movie); 
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    string day;
    cout << name << ": ";
    getline(cin, day);  
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": "; 
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}
