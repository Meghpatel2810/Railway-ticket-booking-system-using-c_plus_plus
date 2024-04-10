#include<iostream>
#include<windows.h> //For sleep function
using namespace std;

class train{

    private:
    string Class_preference;
    string date;
    string train_name;
    public:
    void choose()
    {
        cout<<"Enter the date (DD/MM/YYYY) : ";
        getline(cin,date);
        cin.clear();

        cout<<"We have the following options for train"<<endl<<"All Classes (General)"<<endl<<"Anubhuti class (EA)"<<endl<<"AC first class (1A)"<<endl<<"Vistadome AC (EV)"<<endl<<"Exec. Chair Car (EC)"<<endl<<"AC 2 tier (2A)"<<endl;
        cout<<"First class (FC)"<<endl<<"AC 3 tier (3A)"<<endl<<"AC 3 Economy (3E)"<<endl<<"Vistadome chair car (VC)"<<endl<<"AC Chair car (CC)"<<endl<<"Sleeper (SL)"<<endl;
        cout<<"Vistadome Non AC (VS)"<<endl<<"Second Sitting (2S)"<<endl<<endl;

        cout<<"Please select your preference";
        getline(cin,Class_preference);
        cin.clear();
    }

    void choose_name()
    {
        cout<<"The trains available on "<<date<<" :-"<<endl;

        Rajdhani Express, Shatabdi Express, Maharaja Express, Gujarat Express, Vande Bharat Express, Golden Chariot, Deccan Odyssey, Gatimaan Express, Duronto Express, Maitree Express
    }
    
    
};

class passenger{
    private:
       string name, gender;
       string passenger_preference;
       string arrival_location, departure_location;
       string date;
       long long contact_number;
    public:
        void passenger_details()
        {
            cout<<"Enter your name: ";
            getline(cin,name);
            cin.clear();

            cout<<"Enter your Contact Number: ";
            cin>>contact_number;

            cout<<"From where you want to start your Journey: ";
            cin>>departure_location;
            cout<<"At where you want to conclude your Journey: ";
            cin>>arrival_location;
        }   
       void choose_Quota()
       {
            cout<<"We have the following Quotas:"<<endl;
            cout<<"General"<<endl;
            cout<<"Ladies"<<endl;
            cout<<"Lower Berth/ Senior Citizen"<<endl;
            cout<<"Person with Disability"<<endl;
            cout<<"Duty Pass"<<endl;
            cout<<"Tatkal"<<endl;
            cout<<"Premium Tatkal"<<endl;
            cout<<"Please type your preference: "<<endl;
            getline(cin,passenger_preference);
            cin.clear();
       } 

};

//Inherit diffrent types of trains and passenger classes 

int main()
{
   //Take necessary inputs from user
    cout<<"Welcome to CRCTC"<<endl;
    
    passenger p;
    p.passenger_details();
    p.choose_Quota();
}
