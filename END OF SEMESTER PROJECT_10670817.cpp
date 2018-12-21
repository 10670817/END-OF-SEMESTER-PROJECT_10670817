#include <iostream>
#include<stdio.h>
#include<stdlib.h>

#include "std.h"
#include "staff.h"
#include "result.h"
#include "course.h"
using namespace std;

int main()
{
    int Option_1;
    for(;;)
    {
            cout <<endl<<endl;
            cout<<"***************************************************************************"<<endl;
            cout<<"*             WELCOME TO THE SCHOOL MANAGEMENT SYSTEM                     *"<<endl;
            cout<<"***************************************************************************"<<endl;
            cout<<"   SYSTEM  MENU"<<endl;
            cout <<"1.STUDENT"<< endl;
            cout <<"2.STAFF"<< endl;
            cout <<"3.RESULTS"<< endl;
            cout <<"4.COURSE"<< endl;
            cout <<"5.EXIT"<< endl;
            cout<<"PLEASE ENTER YOUR OPTION: ";
            cin>>Option_1;
            switch(Option_1)
            {
                case 1:
                            int Option_2;
                            cout <<endl;
                            cout << "STUDENT MENU "<< endl;
                            cout << "1.REGISTRATION"<< endl;
                            cout << "2.UPDATE STUDENT INFO"<< endl;
                            cout << "3.DELETE STUDENT"<< endl;
                            cout << "4.LIST STUDENT"<< endl;
                            cout << "5.EXIT"<< endl;
                            cout<<"PLEASE ENTER YOUR OPTION: ";
                            cin>>Option_2;
                            switch(Option_2)
                            {
                                case 1:
                                    newStudentRegistration();
                                    break;
                                case 2:
                                    updateStudentInformation();
                                    break;
                                case 3:
                                    deleteStudentInformation();
                                    break;
                                case 4:
                                    listOfStudents();
                                    break;
                                case 5:exit(0);
                                break;
                                default:
                                        cout<<"INVALID ENTRY";
                            }
                    break;
                case 2:
                            int Option_3;

                            cout <<endl;
                            cout <<"STAFF MENU "<< endl;
                            cout << "1.REGISTRATION"<< endl;
                            cout << "2.UPDATE STAFF"<< endl;
                            cout << "3.DELETE STAFF"<< endl;
                            cout << "4.LIST STAFF"<< endl;
                            cout << "5.EXIT"<<endl;
                            cout<<"PLEASE ENTER YOUR OPTION: ";
                            cin>>Option_3;
                            switch(Option_3)
                            {
                            case 1:
                                newStaffRegistration();
                                break;
                            case 2:
                                    updateStaffInformation();
                                    break;
                            case 3:
                                    deleteStaffInformation();
                                    break;
                            case 4:
                                    listOfStaffs();
                                    break;

                            case 5:exit(0);
                            break;
                            default:
                                    cout<<"INVALID ENTRY";
                            }
                    break;

                case 3:
                            int Option_4;
                            cout <<endl;
                            cout << " RESULTS MENU "<< endl;
                            cout << "1.ADD "<< endl;
                            cout << "2.UPDATE"<< endl;
                            cout << "3.DELETE"<< endl;
                            cout << "4.COMBINED RESULTS"<< endl;
                            cout << "5.YEARLY RESULTS"<< endl;
                            cout << "6.STUDENT RESULTS"<< endl;
                            cout << "7.EXIT"<< endl;
                            cout<<"PLEASE ENTER YOUR OPTION: ";

                            cin>>Option_4;
                            switch(Option_4)
                            {
                            case 1:
                                    newResultAdd();
                                    break;
                            case 2:
                                    updateResultAdd();
                                    break;
                            case 3:
                                    deleteResult();
                                    break;
                            case 4:
                                    overAllClassResult();
                                    break;
                            case 5:
                                    schoolResult();
                                    break;
                            case 6:
                                    studentResult();
                                    break;
                            case 7:exit(0);
                                break;
                                default:
                                        cout<<"INVALID ENTRY";
                            }
                    break;
                case 4:
                            int Option_5;
                            cout <<endl;
                            cout << " COURSE MENU "<< endl;
                            cout << "1.ADD COURSE "<< endl;
                            cout << "2.EDIT COURSE"<< endl;
                            cout << "3.DELETE COURSE"<< endl;
                            cout << "4.VIEW COURSES"<< endl;
                            cout << "5.EXIT"<< endl;
                            cout<<"PLEASE ENTER YOUR OPTION: ";

                            cin>>Option_5;
                            switch(Option_5)
                            {
                                case 1:
                                    addcourse();
                                    break;
                                case 2:
                                    updateCourseInformation();
                                    break;
                                case 3:
                                    deleteCourseInformation();
                                    break;
                                case 4:
                                    listOfCourse();
                                    break;
                                case 5:
                                    exit(0);
                                    break;
                                default:
                                    cout<<"";
                            }
                            break;
                case 5:exit(0);
                        break;
                default:cout<<"INVALID ENTRY";
            }
    }
    return 0;
}

