/*
#include<iostream>
using namespace std;
class program1
{
    public:void Display()
    {
        cout<<"hello";
    }
};
int main()
{
    program1 obj;
    obj.Display();
    return 0;
}
*/

// function with return type and no parameter(2nd type)

/*#include<iostream>
using namespace std;
class program
{
    private:int pin;
    public: void welcome()
    {
        cout<<"welcome to ATM";
    }
    public:int validate()
    {
        cout<<"\n enter your pin";
        cin>>pin;
        if(pin==1234)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};
*/

//write a program in cpp using opp features(class,object,member function,member variables,access specifiers)
/*
#include<iostream>
using namespace std;
class example1
{
    public:void Fun()
    {
        cout<<"welcome";
    }
};
int main()
{
    example1 obj1;
    obj1.Fun();
    return 0;
}
*/

// write a program to create a class with name my app with func name welcome .this function on execution will display a message on screen 
//welcome to miet jammu.

/*
#include<iostream>
using namespace std;
class MYAPP
{
    public:void welcome()
    {
        cout<<"welcome to MIET";
    }
};
int main()
{
    MYAPP obj;
    obj.welcome();
    return 0;
}
*/

// Q2

/*
#include<iostream>
using namespace std;
class MYAPP
{
    private: string name,address,regno;
    public:void Fun()
    {
        cout<<"enter your name,registration no and address";
        cin>>name>>regno>>address;
        cout<<"welcome to MIET";
        cout<<"\n your details are under:";
        cout<<"\n Name ="<<name<<"\n registration number ="<<regno<<"\n Address="<<address;
    }
};
int main()
{
    MYAPP obj;
    obj.Fun();
    return 0;
}
*/


//Function with no return type and parameter
/*
#include<iostream>
using namespace std;
class program
{
    public:void accept(string username1,string password1) //formal parameter
    {
        cout<<"username ="<<username1;
        cout<<"\npassword ="<<password1;
    }
};
int main()
{
    program obj;
    string username1,password1;
    cout<<"\n enter username and password";
    cin>>username1>>password1;
    obj.accept(username1,password1); //actual parameter
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
class program
{
    private int pin;
    string username1,password1;
    public:void pin_validate()
    {
        cout<<"enter pin";
        cin>>pin;
        if(pin==123)
        {
            cout<<"login successfully";
            cout<<"\nenter username and password";
            cin>>username1,password1;
            accept(username1,password1);
        }
    }
    public:void accept(string username1,string password1) //formal parameter
    {
        cout<<"username ="<<username1;
        cout<<"\npassword ="<<password1;
    }
};
int main()
{
    program obj;
    obj.pin_validate();
    return 0;
}
*/

//program to create a class with name payapp,with functions as:
//accept() will accept amount from user
//validate() will check amount is valid(>0)
//discount() will find 10% on amount.
//display() will display paybill.
/*

#include<iostream>
using namespace std;
class payapp
{
    private:float a,d;
    public:void accept()
    {
        cout<<"enter amount";
        cin>>a;        
    }
    public:void validate()
    {
        if(a>0)
        {
            cout<<"\namount is valid";
        }
    }
    public:void discount()
    {
        d=a/100*10;
        cout<<"\ndiscount ="<<d;
    }
    public:void display()
    {
        cout<<"\nyour paybill ="<<a-d;
    }
};
int main()
{
    payapp obj;
    obj.accept();
    obj.validate();
    obj.discount();
    obj.display();
    return 0;
}
*/

//Q3 from N.B: Two classes

/*
#include<iostream>
using namespace std;
class logindetails
{
    public: void validate()
    {
        int a= 1234;
        cout<<"login password is: "<<a<<endl;
    }
    public:void display()
    {
        cout<<"welcome to myapp\n ";
    }
};

class user_profile
{
    private:string name,email;
    public:void accept()
    {
        cout<<"Enter your name ";
        cin>>name;
        cout<<"\n Enter ur email ";
        cin>>email;
    }
    public : void display()
    {
        cout<<"\n Name is "<<name;
        cout<<"\n Email is"<<email;    
    }
};

int main()
{
    logindetails obj1;
    obj1.validate();
    obj1.display();
    user_profile obj2;
    obj2.accept();
    obj2.display();
    return 0;
}
*/

// program to demostrate working of default constructor
/*
#include<iostream>
using namespace std;
class A
{
    public: A()
    {
        cout<<"default constructor";
    }
};
int main()
{
    A obj;
    return 0;
}
*/

// program to demostrate working of constructor with parameter(PARAMETRIZED CONSTRUCTOR)
/*
#include<iostream>
using namespace std;
class A
{
    public: A(int x)
    {
        cout<<"value of x ="<<x;
    }
};
int main()
{
    int a;
    cout<<"enter no";
    cin>>a;
    A obj(10);
    return 0;
}
*/

/*
// incomplete code
#include<iostream>
using namespace std;
class bankapp
{
    public:bankapp()
    {
        cout<<"welcome to bank";
    }
    public:bankapp(string name,int accno)
    {
        cout<<"\n account holder name is"<<name;
        cout<<"\n account no is"<<accno;
    }
    private:string uname;int acc;
    string choice;
    public:void accdetails()
    {
        cout<<"do you want to update your profile press 'y' or 'n' ";
        cin>>choice;
    }
};
int main()
{
    bankapp obj;
    bankapp obj1(); 
}
*/

/*
//working of constructor and destructor
#include<iostream>
using namespace std;
class A
{
    private:int x;
    public:A()
    {
        x=10;
        cout<<"constructor invoked x"<<x;
    }
    public:void f1()
    {
        cout<<"\nfunction 1";
    }
    public:void f2()
    {
        cout<<"\nfunction 2";
    }
    public:~A()
    {
        cout<<"\n destructor invoked x"<<x;
    }
};
int main()
{
    A obj;
    obj.f2();
    obj.f1();
    return 0;
}
*/

/*
//write a program to create a class with name area and with constructor which set
//default r=10 and create func cal() which calculate area of circle

#include<iostream>
using namespace std;
class area
{
    private:float a,r;
    public:area()
    {
        r=10;
    }
    public: void cal()
    {
        a=3.14*r*r;
        cout<<"\narea of circle is"<<a;
    }
};
int main()
{
    area obj;
    obj.cal();
}
*/


//incomplete code
/*write a program to create a class with name area,default constructor which set
default value of pi=3.14, create different parametrized constructors to calculate area of circle
area of triangle,rectangle.accept choice from user whose area they want to calculate.at last create destructor
to free the memory*/

//Ans4

/*
#include<iostream>
using namespace std;
class loginapp
{
    public: void regster()
    {
        string name;
        cout<<"Enter ur name";
        cin>>name;
        cout<<"\nhi "<<name;
      
    }
    public: void regster(int i)
    {
        if(i>=1 && i<=50)
        {
            
            cout<<"\nregistration no validates";
        }
        else
        {
            cout<<"\n registration no not validates";
        }
    }
};
int main()
{
    int i;
    loginapp obj;
    
    obj.regster();
    cout<<"Enter regno";
    cin>>i;
    obj.regster(i);
}
*/
