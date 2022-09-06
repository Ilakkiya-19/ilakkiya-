# ilakkiya-#include<iostream>
using namespace std;
 
class person
{
    int id;
    char name[100];
   
    public:
        void set_p()
        {
            cout<<"Enter the Id:";
            cin>>id;
            fflush(stdin);
            cout<<"Enter the Name:";
            cin.get(name,100);
        }
   
        void display_p()
        {
            cout<<endl<<id<<"\t"<<name;
        }
};
 
class student: person
{
    char course[50];
    int fee;
     
    public:
    void set_s()
        {
            set_p();
            cout<<"Enter the Course Name:";
            fflush(stdin);
            cin.getline(course,50);
            cout<<"Enter the Course Fee:";
            cin>>fee;
        }
         
        void display_s()
        {
            display_p();
            cout<<"t"<<course<<"\t"<<fee;
        }
};
 
main()
{
    student s;
    s.set_s();
    s.display_s();
}
