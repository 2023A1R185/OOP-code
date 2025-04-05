//mutable and immutable(Read only) form of data
/*
#include<iostream>
using namespace std;
class program
{
    public:int b;  //local variable
    public:program(const int a)   //constant variable inside
    {
        b=a;   //passing read only value to local variable
    }
    void modify()
    {
        cout<<"/n value of b is "<<b;
        b=16;
        cout<<"/n value of b is "<<b;
    }
};
int main()      // if we pass any variable to a,this will raise error
{
    program obj(24);
    obj.modify();
    return 0;
}

#include<iostream>
using namespace std;
class program
{
    public:const int a=1;  //constant variable
    void modify()
    {
        cout<<"/n value of a is "<<a;
        //a=16;
    }
};
int main()      // if we pass any variable to a,this will raise error
{
    program obj;
    obj.modify();
    return 0;
}

#include<iostream>
using namespace std;
class program
{
    public:int a=1;  //constant variable
    void modify() const
    {
        cout<<"/n value of a is "<<a;
        //a=16;
    }
};
int main()      // if we pass any variable to a,this will raise error
{
    program obj;
    obj.modify();
    return 0;
}


//logically object or function of parent class is incorrect if we create it.
//inheritance(single level)
#include<iostream>
using namespace std;
class myapp  //parent class
{
    public:void welcome_message()
    {
        cout<<"\n welcome to student management app";
    }
};
class studentinfo:public myapp   //child class(studentinfo) ": sign of inheritance"
{
    private:int pass=123,pass1;
    public:void login()
    {
        cout<<"\n enter your password";
        cin>>pass1;
        if(pass==pass1)
        {
            cout<<"\n login successful";
        }
        else
        {
            cout<<"\n login failed";
        }
    }
};
int main()
{
    studentinfo obj;  //child class object
    obj.welcome_message();  //calling parent class with child class object
    obj.login();
    return 0;
}

#include<iostream>
using namespace std;
class myapp  //parent class
{
    public:void welcome_message()
    {
        cout<<"\n welcome to student management app";
    }
};
class login:public myapp   //child class(studentinfo) ": sign of inheritance"
{
    private:int pass=123,pass1;
    public:void accept()
    {
        cout<<"\n enter your password";
        cin>>pass1;
        if(pass==pass1)
        {
            cout<<"\n login successful";
        }
        else
        {
            cout<<"\n login failed";
        }
    }
};
class studentinfo:public login  //grand child class
{
    private:string name;int regno;
    public:void info()
    {
        cout<<"\n enter your name and registration no";
        cin>>name>>regno;
    }
    public:void display()
    {
        cout<<"\n information entered by the student is: "<<"\n nameis"<<name<<"\n registration is "<<regno;
    }
    
};
int main()
{
    studentinfo obj;  //child class object
    obj.welcome_message();  //calling parent class with child class object
    obj.accept();
    obj.info();
    obj.display();
    return 0;
}


//constructor and destructor in inheritance
#include<iostream>
using namespace std;
class parent
{
    public:parent()
    {
        cout<<"\n parent class constructor";
    }
    public:~parent()
    {
        cout<<"\n parent class destructor";
    }
};
class child:public parent
{
    public:child()
    {
        cout<<"\n child class constructor";
    }
    public:~child()
    {
        cout<<"\n parent class destructor";
    }
};
class grand_child:public child
{
    public:grand_child()
    {
        cout<<"\n grand child class constructor";
    }
    public:~grand_child()
    {
        cout<<"\n grand child class destructor";
    }
};
int main()
{
    grand_child obj;
    return 0;
}


#include<iostream>
using namespace std;
class myapp
{
    public:void message()
    {
        cout<<"\n welcome to MYAPP";
    }
    public:void login()
    {
        int pin;
        cout<<"\n enter PIN";
        cin>>pin;
        if(pin==123)
        {
            cout<<"\n pin is validate till 2 years";
        }
        else
        {
            cout<<"\n pin is not validate till 2 years";
        }
    }
};
class studentinfo:public myapp
{
    private:string name;int regno;
    protected : float marks;
    public:void accept()
    {
        cout<<"\n enter student name";
        cin>>name;
        cout<<"\n enter student registration number";
        cin>>regno;
        cout<<"\n enter student marks";
        cin>>marks;
    }
    public:void display()
    {
        cout<<"\n student name is "<<name;
        cout<<"\n student registration number is "<<regno;
        cout<<"\n student marks is "<<marks;
    }
};
class grade_calc:public studentinfo
{
public : float per;
void cal()
{
    per = (marks/500) * 100;
    if(per >=80 && per <=100)
    {
        cout<<"\n A Grade";
    }
    else if(per>=70 && per<=80)
    {
        cout<<"\n B Grade";
    }
    else if(per>=60 && per<=70)
    {
        cout<<"\n C grade";
    }
    else
    {
        cout<<"\n not qualified";
    }  
}
};
int main()
{
    grade_calc obj;
    obj.message();
    obj.login();
    obj.accept();
    obj.display();   
    obj.cal(); 
}


// Multiple inheritance
#include<iostream>
using namespace std;
class parent1
{
    public:void fun1()
    {
        cout<<"\n Parent1 class function";
    }
};
class parent2
{
    public:void fun2()
    {
        cout<<"\n Parent2 class function";
    }
};
class child:public parent1,public parent2
{
    public:void fun3()
    {
        cout<<"\n child class function";
    }
};
int main()
{
    child obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();
    return 0;
}
*/

#include<iostream>
using namespace std;
class skill_course
{
    protected:string ch1;
    public:void list1()
    {
        cout<<"\n Student opt 1st course is C";
        cout<<"\n Student opt 2nd course is CPP";
                cout<<"\n Student opt 3dr course is JAVA";
        cout<<"\n Student opt 4th course is C#";
        cin>>ch1;
    }
};
class shortterm_course
{
    protected:string ch2;
    public:void list2()
    {
        cout<<"\n Student opt 1st short term course is cyber security";
        cout<<"\n Student opt 2nd short term course is ethical hacking";
        cout<<"\n Student opt 3dr short term course is mern drivzzzz";
        cout<<"\n Student opt 4th short term course is full stack development";
        cin>>ch2;
    }
};
class specilization_course
{
    protected:string ch3 ;
    public:void list3()
    {
        cout<<"\n Student opt 1st specialization course is AI & ML";
        cout<<"\n Student opt 2nd specialization course is devopp";
        cout<<"\n Student opt 3dr specialization course is software architecture";
        cout<<"\n Student opt 4th specialization course is software testing";
        cin>>ch3;
    }
};
class child1:public skill_course,public shortterm_course,public specilization_course
{
    public:void select()
    {
cout<<"\n Course selected by the student is ";
cout<<"\n "<<ch1 <<"\n "<<ch2 <<"\n "<<ch3;
    }
};
int main()
{
    child1 obj;
    obj.list1();
    obj.list2();
    obj.list3();
    obj.select();
    return 0;
}