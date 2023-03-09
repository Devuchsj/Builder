#include<iostream>
#include <string>
using namespace std;

class highschool{
    private:
        int id,stu_roll_no, stu_standard, stu_age;
        string stu_name, stu_contact,stu_address;
        static char stu_edu_institute_name[100];

    public:
        void setData(){
            cout<<"enter id=";
            cin>>id;
             cout<<"stu_roll_no =";
            cin>>stu_roll_no ;
              cout<<"enter stu_standard=";
            cin>>stu_standard;
              cout<<"enter stu_age=";
            cin>>stu_age;
              cout<<"enter stu_name=";
            cin>>stu_name;
              cout<<"enter stu_contact=";
            cin>>stu_contact;
             // cout<<"enter stu_edu_institute_name=";
            //cin>>stu_edu_institute_name;
              cout<<"enter stu_address=";
            cin>>stu_address;
        }
            void getData()
            {
                cout<<"Id="<<id<<""<<"stu_roll_no="<<stu_roll_no<<"stu_standard="<<stu_standard<<""<<"stu_age="<<stu_age<<""<<"stu_name="<<stu_name<<""<<"stu_contact="<<stu_contact<<""<<"stu_address="<<stu_address<<endl;
            }
        
};
         char highschool::stu_edu_institute_name[]="scet";  
       
class college{
    private:
        int id,stu_roll_no, stu_standard, stu_age;
        string stu_name, stu_contact,stu_address;
        static char stu_edu_institute_name[100];

    public:
        void setData(){
            cout<<"enter id=";
            cin>>id;
             cout<<"stu_roll_no =";
            cin>>stu_roll_no ;
              cout<<"enter stu_standard=";
            cin>>stu_standard;
              cout<<"enter stu_age=";
            cin>>stu_age;
              cout<<"enter stu_name=";
            cin>>stu_name;
              cout<<"enter stu_contact=";
            cin>>stu_contact;
             // cout<<"enter stu_edu_institute_name=";
           // cin>>stu_edu_institute_name;
              cout<<"enter stu_address=";
            cin>>stu_address;
        }
            void getData()
            {
                cout<<"Id="<<id<<""<<"stu_roll_no="<<stu_roll_no<<"stu_standard="<<stu_standard<<""<<"stu_age="<<stu_age<<""<<"stu_name="<<stu_name<<""<<"stu_contact="<<stu_contact<<""<<"stu_address="<<stu_address<<endl;
            }
        
};
         char college::stu_edu_institute_name[]="scet";  
           

int main(){
   highschool h1;
   college c1;
   h1.setData();
   h1.getData();
   c1.setData();
   c1.getData();
    return 0;
}

