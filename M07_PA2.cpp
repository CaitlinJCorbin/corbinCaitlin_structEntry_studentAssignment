/* Program name: studentData.cpp
*  Author: Caitlin J. Corbin
*  Date last updated: March 2, 2020
* Purpose: Uses two structures Name and Student to store info
*/

#include <iostream>                 //standard header (file stream)
#include <stdlib.h>                 //standard header library
#include <cstring>                  //string library

using namespace std;                //standard beginning

/*declaring Name structure*/
struct Name                         //declaring structure Name
{
    string fName;                   //initializing first name
    char mi;                        //initializing middle initial
    string lName;                   //initializing last name
};
/*declaring Student structure*/
struct Student                      //declaring structure Student
{
    struct Name myname;             //initializing myname tag, and Name structure
    int id;                         //declaring id as int
    string email;                   //declaring email as string
    string ssn;                     //declaring ssn as string
    string program;                 //declaring program as string
    double gpa;                     //declaring gpa as double
    string classYear;               //declaring classyear as string
};
/*Main function*/
int main()                                          //setting up main function
{
Student studentOne, studentTwo;                                 //initializing declaration and tag

    cout << "Enter First Name: " << endl;           //prompt to user
    cin >> studentOne.myname.fName;                 //stores first name

    cout << "Enter Middle Initial: " << endl;       //prompt to user
    cin >> studentOne.myname.mi;                    //stores middle name

    cout << "Enter Last Name: " << endl;            //prompt to user
    cin >> studentOne.myname.lName;                 //stores last name

    cout << "Enter Student ID: " << endl;           //prompt to user
    cin >> studentOne.id;                           //stores id

    cout << "Enter Email: " << endl;                //prompt to user
    cin >> studentOne.email;                        //stores email

    cout << "Enter Social Security Number: " << endl;   //prompt to user
    cin >> studentOne.ssn;                              //stores social security number

    cout<<"Enter Program: " << endl;                    //prompt to user
    cin >> studentOne.program;                          //stores program

    cout << "Enter GPA:" << endl;                       //prompt to user
    cin >> studentOne.gpa;                              //stores gpa

    cout << "Enter Class Year: " << endl;               //prompt to user
    cin >> studentOne.classYear;                        //stores classYear

/*setting studentTwo data*/
   studentTwo.myname.fName = "John";                    //sets studentTwo first name
   studentTwo.myname.mi = 'W';                          //sets studentTwo middle initial
   studentTwo.myname.lName = "Doe";                     //sets studentTwo last name
   studentTwo.id = 01123;                               //sets studentTwo id
   studentTwo.email = "johndoe@gmail.com";              //sets studentTwo email
   studentTwo.ssn = "000-000-0000";                     //sets studentTwo social security number
   studentTwo.program = "CSCI";                         //sets studentTwo program
   studentTwo.gpa = 3.5;                                //sets studentTwo gpa
   studentTwo.classYear = "2023";                       //sets studentTwo class year

/*Displaying studentOne data to user*/
    cout << "Student #1 First Name: " << studentOne.myname.fName << endl;       //displays data to user
    cout << "Student #1 Middle Initial: " << studentOne.myname.mi << endl;      //displays data to user
    cout << "Student #1 Last Name: " << studentOne.myname.lName << endl;        //displays data to user
    cout << "Student #1 ID: " << studentOne.id << endl;                         //displays data to user
    cout << "Student #1 Email: " << studentOne.email << endl;                   //displays data to user
    cout << "Student #1 Social Security Number: " << studentOne.ssn << endl;    //displays data to user
    cout << "Student #1 Program: " << studentOne.program << endl;               //displays data to user
    cout << "Student #1 GPA: " << studentOne.gpa << endl;                       //displays data to user
    cout << "Student #1 Class Year: " << studentOne.classYear << "\n\n";        //displays data to user
/*Displaying studentTwo data to user*/
   cout << "Student #2 First Name: " << studentTwo.myname.fName << endl;        //displays data to user
   cout << "Student #2 Middle Initial: " << studentTwo.myname.mi << endl;       //displays data to user
   cout << "Student #2 Last Name: " << studentTwo.myname.lName << endl;         //displays data to user
   cout << "Student #2 ID: "<< studentTwo.id << endl;                           //displays data to user
   cout << "Student #2 Email: " << studentTwo.email << endl;                    //displays data to user
   cout << "Student #2 Social Security Number: " << studentTwo.ssn << endl;     //displays data to user
   cout << "Student #2 Program: " << studentTwo.program << endl;                //displays data to user
   cout << "Student #2 GPA: " << studentTwo.gpa << endl;                        //displays data to user
   cout << "Student #2 class Year: " << studentTwo.classYear << endl;           //displays data to user

return 0;   //standard ending
}
