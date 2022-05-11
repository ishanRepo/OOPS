

#include<bits/stdc++.h>
using namespace std;

class Employee{
private:
    //string Name;
    string Company;
    int Age;
protected:
    string Name; // so that it can be accessed at derived class.
public: //Access modifiers
            //by default access modifier is to be private
            //public- can be accessed anywhere in the program
            //private- can be accessed by member functions inside the class
            //protected- similar to private(can't be accessed outside class BUT it can be accessed by any subclass(derived class) )
    //string Name;
    //string Company;
    //int Age;

    // Encapsulation is defined as binding together the data and the functions that manipulates them.
        // The data members (in this case name, company, age) should be labeled as private using the private access specifiers.
        // The member function(getter & setter) which manipulates the data members should be labeled as public using the public access specifier.
    void setName(string name){  //setter
        Name=name;
    }
    string getName(){   //getter
        return Name;
    }
    void setCompany(string company){    //setter
        Company=company;
    }
    string getCompany(){    //getter
        return Company;
    }
    void setAge(int age){   //setter
        Age=age;
    }
    int getAge(){   //getter
        return Age;
    }

    void about(){
        cout<<"Name "<<Name<<endl;
        cout<<"Company "<< Company <<endl;
        cout<<"Age "<< Age <<endl;
    }
        // printname is not defined inside class definition
    void printname();  

        //Default constructor
    Employee(){ 
        cout<<"Default constructor called"<<endl;

    }
        //Parameterised Constructor
    Employee(string name, string company, int age){
        cout<<"Parameterised Constructor called "<<endl;
        Name= name;
        Company= company;
        Age= age;
    }


};
    // Definition of printname using scope resolution operator ::
void Employee::printname(){
    cout<<"name is xyz"<<endl;
}

class Developer: Employee {
public:
    string FavLang;
    Developer(string name, string company, int age, string favlang) : Employee(name, company, age){
        FavLang= favlang;
    }
    void Fixbug(){
        cout<<Name<<" aged "<<getAge()<<" fixed bug using "<<FavLang<<endl;
    }
};


int main()
{
    
   /* Employee e1; //e1 will call default constructor
    e1.Name="Ishan";
    e1.Company="Infosys";
    e1.Age=20;
    e1.about();*/
    
    cout<<endl;

    /*Employee e2;  //e2 will call default constructor
    e2.Name="yash";
    e2.Company="Tcs";
    e2.Age=28;
    e2.about();*/

    cout<<endl;

    Employee e3=Employee("aniket","Infosys",40); //e3 will call parameterised constructor
    e3.about();
    //e3.setAge(18);
    //e3.about();

    Developer d= Developer("Saldina","codebeauty", 25,"c++");
    d.Fixbug();
    //return 0;

} 