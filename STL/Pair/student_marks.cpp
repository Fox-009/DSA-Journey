// Store student marks using pair.
// Input n student records and print them.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Read the number of student records to input.
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Use a vector of pairs to store (name, marks) for each student.
    vector<pair<string, int>> student_list;
    cout << "\nEnter the Records of students(Name follow with Marks)";

    // Read each student's name and marks from input.
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cout << "Student" << " " << i + 1 << ": ";
        cin >> name >> marks;

        // Store the student record as a pair in the list.
        student_list.push_back(make_pair(name, marks));
    }

    // Print all stored student records.
    for (const auto &It : student_list)
    {
        cout << "Name: " << It.first << " | ";
        cout << "Marks: " << It.second << "\n";
    }

    return 0;
}
