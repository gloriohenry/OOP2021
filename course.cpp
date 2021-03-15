#include <iostream>

using namespace std;

class Course {
  private:
    string courseNumber;
    string courseName;
    string courseDescription;
    int numberOfCredits;
    int departmentNumber;

  public:
    void add Course();
    string changeCourse(string courseNumber);
    string findCourse(string courseNumber);
}

void Course::addCourse() {
    cout << "Add New Course" << endl;
    cout << "==============" << endl;
    cout << "Course Number: "; getline(cin, courseNumber);
    cout << "Course Name: "; getline(cin, courseName);
    cout << "Course Description: "; getline(cin, courseDesciption);
    cout << "Credits: "; cin >> numberOfCredits;
    cout << "Department Number: "; cin >> departmentNumber;
}

string Course::changeCourse(string courseNumber) {
  return "\nCourse Updated";
}

string Course::findCourse(string courseNumber) {
  string courseNumber[] = {IS101, IS102, IS103, IS104};

  for(int i=0; i<5; i++) {
      if(courseNumber == courseNumber[i]) {
          return course[i];
      }
  }
  return "\nCourse not found" << endl;
}

int main()
{
    Course c1;

    return 0;
}
