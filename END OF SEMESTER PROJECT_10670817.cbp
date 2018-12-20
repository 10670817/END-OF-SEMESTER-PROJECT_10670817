#include<iostream>
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator> //for std::istream_iterator
#include <vector>
#include <iomanip>
using namespace std;


typedef struct student
{
 string rId;//for Registration No number
 string firstName;//for student first name
 string lastName;//for student last name
 string level;//for class info
 string Email;
 string surName;
};


void newStudentRegistration()
{
    fstream outfile ("studentInfo.txt",ios::app);
    student s1;
    cout<<"STUDENT ID_NUMBER:";
    cin>>s1.rId;
    cout<<"FIRST NAME: ";
    cin>>s1.firstName;
    cout<<"SURNAME: ";
    cin>>s1.surName;
    cout<<"LastName: ";
    cin>>s1.lastName;
    cout<<"Level:";
    cin>>s1.level;
    cout<<"E-MAIL: ";
    cin>>s1.Email;
    outfile<<s1.rId<<" "<<s1.firstName<<" "<<s1.surName<<" "<<s1.lastName<<" "<<s1.level<<" "<<s1.Email<<" "<<endl;
    cout<<"ADDED SUCCESSFULLY";
    cout<<endl;
    outfile.close();
    return;
}

void updateStudentInformation()

   {
    string rId;
    cout<<" Enter student ID:";
    cin>>rId;

    student s1;
    fstream infile ("studentInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && rId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
            cout<<"FIRST NAME: ";
            cin>>s1.firstName;
            cout<<"SURNAME: ";
            cin>>s1.surName;
            cout<<"LAST NAME: ";
            cin>>s1.lastName;
            cout<<"LEVEL:";
            cin>>s1.level;
            cout<<"E-MAIL: ";
            cin>>s1.Email;
            tempfile<<rId<<" "<<s1.firstName<<" "<<s1.surName<<" "<<s1.lastName<<" "<<s1.level<<" "<<s1.Email<<" "<<endl;
            cout<<"UPDATED SUCCESSFULLY";
        }
        else
        {
            tempfile<<line<<endl;
        }


    }
    infile.close();
    tempfile.close();
    remove("studentInfo.txt");
    rename("tempInfo.txt","studentInfo.txt");

}

void deleteStudentInformation()
{
    string rId;
    cout<<"\n Enter Student  ID:\n";
    cin>>rId;

    student s1;
    fstream infile ("studentInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && rId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag!=1)
        {
            tempfile<<line<<endl;
        }
        else
        {
            cout<<"SUCCESSFULLY DELETED";
        }


    }
    infile.close();
    tempfile.close();
    remove("studentInfo.txt");
    rename("tempInfo.txt","studentInfo.txt");



}


void listOfStudents()
{
    ifstream file("studentInfo.txt");
    string content;
    cout<<endl<<"LIST OF STUDENTS";
    cout<<endl;
    cout << setw(15) <<"STD.ID" << setw(15) << "F.NAME" << setw(15)<<"S.NAME"<<setw(15) << "L.NAME" <<setw(15) << "LEVEL" <<setw(15) << "E-MAIL" <<setw(15)<< endl<<endl;
    string line;
    while(std::getline(file, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;

        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;

        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {

                cout<<setw(15)<<*it;// prints d.

        }
        std::cout << '\n';

    }


}

