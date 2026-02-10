#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
    string predictedGrade;
};

void predictGrade(Student &s) {
    if(s.marks >= 90)
        s.predictedGrade = "A";
    else if(s.marks >= 80)
        s.predictedGrade = "B";
    else if(s.marks >= 70)
        s.predictedGrade = "C";
    else if(s.marks >= 60)
        s.predictedGrade = "D";
    else
        s.predictedGrade = "F";
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter name and marks for student " << i+1 << ": ";
        cin >> students[i].name >> students[i].marks;
        predictGrade(students[i]);
    }

    cout << "\nPredicted Grades:\n";
    for(int i = 0; i < n; i++) {
        cout << students[i].name << " - " << students[i].marks 
             << " marks -> Grade: " << students[i].predictedGrade << endl;
    }

    return 0;
}
