#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> student_names;
    vector<double> student_grades;

    cout << "Student Grade Management" << endl;
    cout << "-----------------------" << endl;

    int num_students;

    cout << "Enter the number of students: ";
    cin >> num_students;

    // Input student names and grades
    for (int i = 0; i < num_students; i++) {
        string name;
        double grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore(); // Clear the newline character from the previous input
        getline(cin, name);

        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> grade;

        student_names.push_back(name);
        student_grades.push_back(grade);
    }

    // Calculate the average, highest, and lowest grades
    double total_grade = 0;
    double highest_grade = student_grades[0];
    double lowest_grade = student_grades[0];

    for (int i = 0; i < num_students; i++) {
        total_grade += student_grades[i];

        if (student_grades[i] > highest_grade) {
            highest_grade = student_grades[i];
        }

        if (student_grades[i] < lowest_grade) {
            lowest_grade = student_grades[i];
        }
    }

    double average_grade = total_grade / num_students;

    // Display results
    cout << "\nGrade Summary" << endl;
    cout << "--------------" << endl;
    cout << "Average Grade: " << average_grade << endl;
    cout << "Highest Grade: " << highest_grade << endl;
    cout << "Lowest Grade: " << lowest_grade << endl;

    // Display the names and grades of all students
    cout << "\nStudent Grades" << endl;
    cout << "--------------" << endl;

    for (int i = 0; i < num_students; i++) {
        cout << "Name: " << student_names[i] << ", Grade: " << student_grades[i] << endl;
    }

    return 0;
}
