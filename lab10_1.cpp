#include<iostream>
using namespace std;

int main(){
    int count[5] = {}; // Declare array count for counting A,B,C,D,F and initialize all elements = 0
    char grade; 
    
    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
    
    int studentCount = 0; 
    
    do {
        cout << "Student [" << studentCount + 1 << "]: ";
        cin >> grade;
        
        if (grade == '0') {
            break; // Exit the loop when grade is '0'
        }
        
        if (grade == 'A' || grade == 'a') {
            count[0]++; // Increment count for A
        } else if (grade == 'B' || grade == 'b') {
            count[1]++; // Increment count for B
        } else if (grade == 'C' || grade == 'c') {
            count[2]++; // Increment count for C
        } else if (grade == 'D' || grade == 'd') {
            count[3]++; // Increment count for D
        } else if (grade == 'F' || grade == 'f') {
            count[4]++; // Increment count for F
        } else {
            cout << "Wrong input. Please input again." << endl;
            continue; // Skip the rest of the loop and start from the beginning
        }
        
        studentCount++; // Increment the total number of students
    } while (true);
    
    cout << "In total " << studentCount << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}