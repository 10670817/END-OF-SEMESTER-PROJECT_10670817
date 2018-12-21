#include<iostream>
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator> //for std::istream_iterator
#include <vector>
#include <iomanip>
using namespace std;



typedef struct staff
{
 string ID;// for staff id
 string firstName;
 string surName;
 string lastName;
 string qualification;//for Registration No number
 string mNumber;//for class info
 string pay;//Pay of the Teacher
 string Email;//for contacting
 string Subject;//Subject to teach
 string LecturePeriods;//Times teaching within a week
};


void newStaffRegistration()
{
    fstream outfile ("staffInfo.txt",ios::app);
    staff s1;
    cout<<"STAFF ID: ";
    cin>>s1.ID;
    cout<<"FIRST NAME: ";
    cin>>s1.firstName;
    cout<<"SURNAME: ";
    cin>>s1.surName;
    cout<<"LAST NAME: ";
    cin>>s1.lastName;
    cout<<"QUALIFICATION: ";
    cin>>s1.qualification;
    cout<<"CONtACT: ";
    cin>>s1.mNumber;
    cout<<"E-MAIL: ";
    cin>>s1.Email;
    cout<<"lECTURE PERIODS: ";
    cin>>s1.LecturePeriods;
    outfile<<s1.ID<<" "<<s1.firstName<<" "<<s1.lastName<<" "<<s1.qualification<<" "<<s1.mNumber<<" "<<s1.Email<<" "<<s1.LecturePeriods<<" "<<endl;
    cout<<"Successfully Added";
    cout<<endl;
    outfile.close();
    return;
}
void updateStaffInformation()
{
    string sId;
    cout<<" Enter staff Id: ";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
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
            if(i==0 && sId==*it)
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
            cout<<"Qualification:";
            cin>>s1.qualification;
              cout<<"CONACT: ";
            cin>>s1.mNumber;
           cout<<"E-MAIL: ";
           cin>>s1.Email;
           cout<<"lECTURE PERIODS: ";
           cin>>s1.LecturePeriods;
          tempfile<<s1.firstName<<" "<<s1.lastName<<" "<<s1.qualification<<" "<<s1.mNumber<<" "<<s1.Email<<" "<<s1.LecturePeriods<<" "<<endl;

            cout<<"SUCCESSFULLY UPDATED STAFF";

        }
        else
        {

            tempfile<<line<<endl;
        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}
void deleteStaffInformation()
{
        string sId;
    cout<<" Enter staff Id: ";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
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
            if(i==0 && sId==*it)
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
            cout<<"\n\n ** deleted successfully**\n";

        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}

void listOfStaffs()
{

    fstream file ("staffInfo.txt");
    staff s1;
cout<<endl<<"LIST OF STAFF";
    cout<<setw(15)<<"S.ID"<<setw(15)<<"F.NAME:"<<setw(15)<<"L.NAME"<<setw(15)<<"QUALIFICATION"<<setw(15)<<"CONTACT"<<setw(15)<<"E_MAIL"<<setw(15)<<"LECTUREPERIODS"<<setw(15)<<endl<<endl;
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
        cout<<endl;
    }
        cout<<endl;

}
