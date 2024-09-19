#include <iostream>
#include <string>

using namespace std;

struct studentStructure {
    int roll_no;
    string name;
    int percentage;
};

studentStructure s1[50];
int studentCount = 0;

void display(studentStructure s[], int num);
void bubbleSort(studentStructure s[], int num);
void addStudent();

int main() {
    while (true) {
        cout << "----- Menu Program ------" << endl;
        cout << "1. Add students" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Bubble sort on data" << endl;
        cout << "4. Insertion sort on name (not implemented)" << endl;
        cout << "5. Quick sort on data (not implemented)" << endl;
        cout << "6. Linear search on name (not implemented)" << endl;
        cout << "7. Binary search on name (not implemented)" << endl;
        cout << "8. Exit" << endl << endl;

        int choice;
        cout << "Enter choice code: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                display(s1, studentCount);
                break;
            case 3:
                bubbleSort(s1, studentCount);
                cout << "Data sorted using Bubble Sort." << endl;
                break;
            case 8:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

void addStudent() {
    if (studentCount >= 50) {
        cout << "Cannot add more students. Limit reached." << endl;
        return;
    }

    cout << "Enter Roll No: ";
    cin >> s1[studentCount].roll_no;
    cout << "Enter Name: ";
    cin >> s1[studentCount].name;
    cout << "Enter Percentage: ";
    cin >> s1[studentCount].percentage;

    studentCount++;
    cout << "Student added successfully." << endl;
}

void bubbleSort(studentStructure s[], int num) {
    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - 1 - i; j++) {
            if (s[j].roll_no > s[j + 1].roll_no) {
                swap(s[j], s[j + 1]);
            }
        }
    }
}

void display(studentStructure s[], int num) {
    cout << "Roll\t Name\t\tPercentage" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < num; i++) {
        cout << s[i].roll_no << "\t" << s[i].name << "\t\t" << s[i].percentage << endl;
    }
}

