#include <iostream>

using namespace std;

//details of person
class person
{
  int age;//age of person
  char name[20];//name of person

public:
  void get();
  void show_age();
  void show_name();
}
//details of student
class Student
{
  int admno;//admno of student
  int marks;//marks of student
  int rollno;//roll no of student
  int name;//name of student

public:
  void get();
  void show_admno();
  void show_marks();
  void show_rollno();
  void show_name();
}
