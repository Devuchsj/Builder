#include<iostream>
#include <string>
using namespace std;

class Employee{
    private:
        int id;
        string name, role, address, email, contact;
        double salary, experience;

    public:
        void setData(){
            cout<<"enter id=";
            cin>>id;
             cout<<"name =";
            cin>>name ;
              cout<<"enter role=";
            cin>>role;
              cout<<"enter address=";
            cin>>address;
              cout<<"enter email=";
            cin>>email;
              cout<<"enter contact=";
            cin>>contact;
              cout<<"enter salary=";
            cin>>salary;
              cout<<"enter experience=";
            cin>>experience;
        }
            void getData()
            {
                cout<<"Id="<<id<<""<<"name="<<name<<"role="<<role<<""<<"address="<<address<<""<<"email="<<email<<""<<"contact="<<contact<<""<<"salary="<<salary<<""<<"experience="<<experience<<endl;
            }
        
};
             
         

int main(){
   Employee e1,e2,e3,e4,e5;
   e1.setData();
   e1.getData();
    return 0;
}

