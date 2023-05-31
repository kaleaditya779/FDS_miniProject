#include <iostream>
#include<string>
#include<fstream>

using namespace std;


class Stu
{
    friend class W;
    private:
        int id;
        string person_name, person_address, person_relation;
        char person_mobile[10];
        char out_date[10], out_time[5];
        char in_date[10], in_time[5];
        
        
    public:
        void inp_changing_data()
        {
            cout<<"\nPlease enter your id : ";
            cin>>id;

            if (id == 1)
            {
                ofstream adiout("stu1.txt", ios::app);
                cout<<"\nWelcome Name1";
                cout<<"\nPlease Enter given data for processing leave form\n";

                cout<<"\nEnter the name of person to be visited (don't give spaces. give '_') : ";
                cin>>person_name;
                adiout<<"\n****************************************************";
                adiout<<"\nperson to be visited : ";
                adiout<<person_name;

                cout<<"\nEnter the mobile number of person to be visited : ";
                cin>>person_mobile;
                adiout<<"\nHis/Her mobile number : ";
                adiout<<person_mobile;

                cout<<"\nEnter the address of person to be visited (don't give spaces. give '_'): ";
                cin>>person_address;
                adiout<<"\nHis/Her address : ";
                adiout<<person_address;

                cout<<"\nWhat is your relationship with that person? : ";
                cin>>person_relation;
                adiout<<"\nRelationship with student : ";
                adiout<<person_relation;

                cout<<"\n\n";

                cout<<"\nPlease enter out date (dd/mm/yyyy) : ";
                cin>>out_date;
                adiout<<"\nout date (dd/mm/yyyy) : ";
                adiout<<out_date;

                cout<<"\nEnter the expected out time (hh:mm) : ";
                cin>>out_time;
                adiout<<"\nExpected out time (hh:mm) : ";
                adiout<<out_time;

                cout<<"\n\n";

                cout<<"\nEnter date of return (dd/mm/yyyy) : ";
                cin>>in_date;
                adiout<<"\nExpected return date (dd/mm/yyyy) : ";
                adiout<<in_date;

                cout<<"\nEnter expected in time (hh:mm) : ";
                cin>>in_time;
                adiout<<"\nExpected return time (hh:mm) : ";
                adiout<<in_time;


            }


            else if (id == 2)
            {
                ofstream adiout("stu2.txt", ios::app);
                cout<<"\nWelcome Name2";
                cout<<"\nPlease Enter given data for processing leave form\n";

                cout<<"\nEnter the name of person to be visited (don't give spaces. give '_'): ";
                cin>>person_name;
                adiout<<"\n****************************************************";
                adiout<<"\nperson to be visited : ";
                adiout<<person_name;

                cout<<"\nEnter the mobile number of person to be visited : ";
                cin>>person_mobile;
                adiout<<"\nHis/Her mobile number : ";
                adiout<<person_mobile;

                cout<<"\nEnter the address of person to be visited (don't give spaces. give '_'): ";
                cin>>person_address;
                adiout<<"\nHis/Her address : ";
                adiout<<person_address;

                cout<<"\nWhat is your relationship with that person? : ";
                cin>>person_relation;
                adiout<<"\nRelationship with student : ";
                adiout<<person_relation;

                cout<<"\n\n";

                cout<<"\nPlease enter out date (dd/mm/yyyy) : ";
                cin>>out_date;
                adiout<<"\nout date (dd/mm/yyyy) : ";
                adiout<<out_date;

                cout<<"\nEnter the expected out time (hh:mm) : ";
                cin>>out_time;
                adiout<<"\nExpected out time (hh:mm) : ";
                adiout<<out_time;

                cout<<"\n\n";

                cout<<"\nEnter date of return (dd/mm/yyyy) : ";
                cin>>in_date;
                adiout<<"\nExpected return date (dd/mm/yyyy) : ";
                adiout<<in_date;

                cout<<"\nEnter expected in time (hh:mm) : ";
                cin>>in_time;
                adiout<<"\nExpected return time (hh:mm) : ";
                adiout<<in_time;
            }


            else if (id == 3)
            {
                ofstream adiout("stu3.txt", ios::app);
                cout<<"\nWelcome Name3";
                cout<<"\nPlease Enter given data for processing leave form\n";

                cout<<"\nEnter the name of person to be visited (don't give spaces. give '_'): ";
                cin>>person_name;
                adiout<<"\n****************************************************";
                adiout<<"\nperson to be visited : ";
                adiout<<person_name;

                cout<<"\nEnter the mobile number of person to be visited : ";
                cin>>person_mobile;
                adiout<<"\nHis/Her mobile number : ";
                adiout<<person_mobile;

                cout<<"\nEnter the address of person to be visited (don't give spaces. give '_'): ";
                cin>>person_address;
                adiout<<"\nHis/Her address : ";
                adiout<<person_address;

                cout<<"\nWhat is your relationship with that person? : ";
                cin>>person_relation;
                adiout<<"\nRelationship with student : ";
                adiout<<person_relation;

                cout<<"\n\n";

                cout<<"\nPlease enter out date (dd/mm/yyyy) : ";
                cin>>out_date;
                adiout<<"\nout date (dd/mm/yyyy) : ";
                adiout<<out_date;

                cout<<"\nEnter the expected out time (hh:mm) : ";
                cin>>out_time;
                adiout<<"\nExpected out time (hh:mm) : ";
                adiout<<out_time;

                cout<<"\n\n";

                cout<<"\nEnter date of return (dd/mm/yyyy) : ";
                cin>>in_date;
                adiout<<"\nExpected return date (dd/mm/yyyy) : ";
                adiout<<in_date;

                cout<<"\nEnter expected in time (hh:mm) : ";
                cin>>in_time;
                adiout<<"\nExpected return time (hh:mm) : ";
                adiout<<in_time;
            }
            else
            {
                cout<<"\nYou have inputed wrong id";
            }
        }

};



class W
{

    public:
        int fetch_data(Stu);
        
    
};

int W :: fetch_data(Stu stuobj1)
{
    if (stuobj1.id == 1)
    {
        std::string filename = "stu1.txt";
        std::string command = "python ";
        command = command + filename;
        system(command.c_str());

    }
}












int main()
{
    cout<<endl<<"Welcome to the leave form register, simple project by ADITYA KALE.."<<endl;
    cout<<"\n*****************  MENU  *******************************\n";
    cout<<"Please choose the login person : \n";
    int choice;
    cout<<"\n1) Student \n2) Warden \n3) Security \n4) Parent\n";
    cout<<"\nYour choice : ";
    cin>>choice;

    Stu stuobj1;
    W Wobj1;

    switch (choice)
    {

        case 1:
            stuobj1.inp_changing_data();
            break;
        case 2:
            Wobj1.fetch_data(stuobj1);
            break;
        case 3:
            cout<<"Work in progress!!";
            break;
        case 4:
            cout<<"Work in progress!!";

        default:
            cout<<"Wrong choice!!!";
            break;
    }

    
    return 0;
}





    
    
    
    

    
