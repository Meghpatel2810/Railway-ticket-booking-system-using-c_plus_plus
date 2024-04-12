//THIS CODE IS PREPARED BY 23CS069 MEGH PATEL,23CS070 NISARG PATEL,23CS075 TEJAS PATEL

#include<iostream>
#include<cmath>
#include<windows.h> //For sleep function

using namespace std;

class passenger;
class train{

    private:
    string Class_preference;
    string date,rail,train_time;
    string train_name;
    int train_choice;
    string trains[10]={
        "Rajdhani express",
        "Shatabdi Express",
        "Maharaja Express",
        "Gujarat Express",
        "Vande Bharat Express",
        "Golden Chariot",
        "Deccan Odyssey",
        "Gatimaan Express",
        "Duronto Express",
        "Maitree Express"
    };
    string time[10]={
        "8:30-9:00 AM",
        "9:30-10:00 AM",
        "10:30-11:30 AM",
        "2:00-2:30 PM",
        "3:00-3:30 PM",
        "3:30-4:00 PM",
        "4:00-4:30 PM",
        "4:30-5:00 PM",
        "5:00-5:30 PM",
        "5:30-6:00 PM",
    };

    public: 
    void choose()
    {
        cout<<endl<<"We have the following options for train"<<endl<<endl
        <<"All Classes (General)"<<endl<<"Anubhuti class (EA)"<<endl<<"AC first class (1A)"<<endl<<"Vistadome AC (EV)"<<endl
        <<"Exec. Chair Car (EC)"<<endl<<"AC 2 tier (2A)"<<endl;

        cout<<"First class (FC)"<<endl<<"AC 3 tier (3A)"<<endl<<"AC 3 Economy (3E)"<<endl
        <<"Vistadome chair car (VC)"<<endl<<"AC Chair car (CC)"<<endl<<"Sleeper (SL)"<<endl;
        cout<<"Vistadome Non AC (VS)"<<endl<<"Second Sitting (2S)"<<endl<<endl;

        cout<<"Please select your preference: ";
        getline(cin,Class_preference);
        cin.clear();
    }

    void train_names()
    {
        cout<<"Enter the date (DD/MM/YYYY) : ";
        getline(cin,date);
        cin.clear();

        cout<<"--------------------------------------------------------------------------------------------"<<endl;
        cout<<"The trains available on "<<date<<" :-"<<endl;
        for(int i=0;i<10;i++)
        {
            if(i==4)
            {
                cout<<"["<<i+1<<"] "<<trains[i]<<" \t "<<time[i]<<endl;
                continue;
            }
            cout<<"["<<i+1<<"] "<<trains[i]<<" \t\t "<<time[i]<<endl;
        }
        cout<<"Which train would you like to select(Enter number): ";
        cin>>train_choice;
        if(train_choice<1 || train_choice>10)
        {
            cout<<"Please enter correct value";
            exit(0);
        }
        train_choice--;
        rail=trains[train_choice];
        train_time=time[train_choice];

    }

    friend void ticket(train,passenger);
};

class passenger{
    private:
       string name;
       string passenger_preference;
       string arrival_location, departure_location;
       long long contact_number;
    public:
        void passenger_details()
        {
            cout<<"Enter your name: ";
            getline(cin,name);
            cin.clear();

            cout<<"Enter your Contact Number: ";
            cin>>contact_number;
            if(contact_number<pow(10,9))
            {
                cout<<"Please enter correct mobile number";
                exit(0);
            }

            cout<<"From where you want to start your Journey: ";
            cin>>departure_location;
            cout<<"At where you want to conclude your Journey: ";
            cin>>arrival_location;
        }   
       void choose_Quota()
        {
            cout<<"We have the following Quotas:"<<endl<<endl;
            cout<<"General"<<endl;
            cout<<"Ladies"<<endl;
            cout<<"Senior Citizen"<<endl;
            cout<<"Person with Disability"<<endl;
            cout<<"Duty Pass"<<endl;
            cout<<"Tatkal"<<endl;
            cout<<"Premium Tatkal"<<endl<<endl;
            cout<<"Please type your preference: ";
            cin.ignore();
            getline(cin,passenger_preference);
            cin.clear();
        } 
        friend void ticket(train ,passenger );
};

void ticket(train t,passenger p)
{
    system("cls");
    cout<<"TICKET"<<endl<<"****************************************************************************************************************************"<<endl;    
    cout<<"Name of the passenger\t:"<<p.name<<endl;
    cout<<"Conatct number\t\t:"<<p.contact_number<<endl;
    cout<<"Date\t\t\t:"<<t.date<<endl;
    cout<<"From\t\t\t:"<<p.departure_location<<endl;
    cout<<"To\t\t\t:"<<p.arrival_location<<endl;
    cout<<"Train\t\t\t:"<<t.rail<<endl;
    cout<<"Time\t\t\t:"<<t.train_time<<endl;
    
    cout<<"Paasenger coach\t\t:"<<p.passenger_preference<<endl;
    cout<<"Railway coach\t\t:"<<t.Class_preference<<endl;
    cout<<"Ticket Price\t\t:500"<<endl;
    cout<<"*******************************************************************************************************************************************"<<endl;
    
}


int main()
{
   //INPUT
    cout<<"Welcome to CRCTC  [Charusat Railway Catering and Tourism Corporation]"<<endl;
    
    passenger p;
    train t;
    p.passenger_details();
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    p.choose_Quota();
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    t.choose();
    t.train_names();

    for(int i=0;i<15;i++)
    {
        cout<<".";
        Sleep(500);
    }

    //Final Booking
    again:
    char choice;
    cout<<endl<<"Train is available"<<endl<<"You will have to pay on the station"<<endl<<"Do you want to confirm your ticket (Press 'Y' to Book or Press 'N' to exit): ";
    cin>>choice;
    cout<<"For any queries contact +91 2697 265011/21 or inform us at info@charusat.ac.in"<<endl;
    if(choice=='Y')
    {
        for(int i=0;i<15;i++)
        {
            cout<<".";
            Sleep(500);
        }
        ticket(t,p);
    }
    else if(choice=='N')
    {
        cout<<"Thank You";
        return 0;
    }
    else
    {
        cout<<"Please enter a correct value";
        goto again;
    }
}
