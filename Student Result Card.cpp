#include <iostream>
using namespace std;

int main() {
    string name;
    int marks[6], total = 0;
    double percentage;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter marks for 6 subjects:\n";
    for (int i = 0; i < 6; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 600.0) * 100;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\nSTUDENT RESULT CARD\n";
    cout << "Name: " << name << endl;
    cout << "Total Marks: 600\n";
    cout << "Obtained Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%\n";
    cout << "Final Grade: " << grade << endl;

    return 0;
}
