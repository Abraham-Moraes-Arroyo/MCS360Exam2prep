#include <iostream>
#include <string>
using namespace std;
// base class
class UICMember{
      protected:
        string name;
        int uin;

      public:
      // default constructor
      UICMember(string member_name, int member_id_number){
         name = member_name;
         uin = member_id_number;
      }

         virtual string getRoleDescription(){
         return "Works for UIC";
      }
};

// derived class
class Professor: public UICMember{
      public:
        // declaring derived class constructor with initialization
        Professor(string member_name, int member_id_number) : UICMember(member_name, member_id_number){
        }

          virtual string getRoleDescription(){
          return "Teaches at UIC";
        }
};

// second derived class
class Student: public UICMember {
      public:
        // declaring second derived class constructor with initialization
        Student(string member_name, int member_id_number) : UICMember(member_name, member_id_number){
        }

          virtual string getRoleDescription(){
          return "Takes classes at UIC";
        }  
};

int main(){

    UICMember *M1, *M2;              //declaring pointer variables for the object UICMember
    Professor P("Jane Doe", 29464);  // object of the derivated class Professor
    Student S("John Doe",   55812);  // object of the derivated class Student

    M1 = &P;
    M2 = &S;
    cout << M1->getRoleDescription() << endl;
    cout << M2->getRoleDescription() << endl;
    
    return 0;
}
