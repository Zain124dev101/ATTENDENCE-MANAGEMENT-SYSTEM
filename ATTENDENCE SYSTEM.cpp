#include <iostream>
#include <string>
using namespace std;

const int numStudents = 5;
string students[numStudents] = {"ZAIN", "HALEEM", "HAMZA", "WAJAHAT", "ZORAIN"};
bool attendance[numStudents] = {false, false, false, false, false};

void displayAttendance()
 {
    cout << "\nAttendance List:" << endl;
    for (int i = 0; i < 5; i++) 
	{
        cout << students[i] << ": ";
        if (attendance[i])
		 {
            cout << "Present" << endl;
        } else {
            cout << "Absent" << endl;
        }
    }
} 

void markAttendance()
 {
    string name;
    cout << "Enter student name to mark attendance: ";
    cin >> name;

    bool found = false;
    for (int i = 0; i < 5; i++)
	 {
        if (students[i] == name) 
		{
            cout << "Mark " << name << " as (P)resent or (A)bsent: ";
            char status;
            cin >> status;
            if (status == 'P' || status == 'p') 
			{
                attendance[i] = true;
                cout << name << " marked as Present." << endl;
            } else if (status == 'A' || status == 'a')
			 {
                attendance[i] = false;
                cout << name << " marked as Absent." << endl;
            } else {
                cout << "Invalid status!" << endl;
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!" << endl;
    }
}

int main() {
    int choice;

    while (true)
	 {
        cout << "\n=== Attendance Management System ===" << endl;
        cout << "1. Mark Attendance" << endl;
        cout << "2. Display Attendance" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
		 {
            case 1:
                markAttendance();
                break;
            case 2:
                displayAttendance();
                break;
            case 3:
                cout << "Exiting system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
