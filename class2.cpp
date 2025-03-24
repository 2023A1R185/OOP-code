/*
//ARRAYS AND OBJECTS


//Q1:to demonstrate array initialize using direct method
#include<iostream>
using namespace std;
class array
{
    private:
    int a[5];
    int b[5]={1,2,3,4,5};
    public:void display()
    {
        a[0]=3;
        a[1]=4;
        cout<<"\n element at index 0 is"<<a[0];
        cout<<"\n element at index 1 is"<<a[1];
        cout<<"\n enter array element";
        cin>>a[2];
        cout<<"\n element at index 2 is"<<a[2];
        cout<<"\n element of array b at position 0 is"<<b[0];
    }
};
int main()
{
    array obj;
    obj.display();
    return 0;
}

//modify function
#include<iostream>
using namespace std;
class program
{
    public:int x;
    program(int y)
    {
        x=y;
    }
    void display()
    {
        cout<<"\n value of x is"<<x;
    }
};
void modify(program obj2)
// modify function will accept obj as parameter 
//any change applied by this object inside this function definition
//will not accept the original value of x passed by object1
{
    obj2.x=20;
    cout<<"\n modified value of x by object2 is"<<obj2.x;
}
int main()
{
    program obj1(5);
    obj1.display();
    modify(obj1);  // calling modify func with class object.
    obj1.display();
    return 0;
}


#include<iostream>
using namespace std;
class bankapp
{
    public : int x;string name;int y;
    public:bankapp(int x1,string name1,int y1)
    {
   x = x1;
   name =name1;
   y=y1;
    }
    public:void display()
    {
     cout<<"product id is "<<x;
        cout<<"\nproduct name is "<<name;
        cout<<"\nproduct price is "<<y;
    }

};
int main()
{
    bankapp obj(134,"oven",1000);
}


// STATIC MEMEBERS IN CPP


#include<iostream>
using namespace std;
class pr
{
    public:void fun()
    {
        static int n=0;
        n++;
        cout<<"value of n is"<<n<<endl;
    }
};
int main()
{
    pr obj1,obj2,obj3,obj4;
    obj1.fun();
    obj2.fun();
    obj3.fun();
    obj4.fun();
    return 0;
}


#include<iostream>
using namespace std;
class countuser
{
    public:static int count;
    countuser()
    {
        count++;
    }
};
int countuser::count=0;
int main()
{
    countuser user1,user2,user3,user4;
    cout<<"\n total users are "<<countuser::count;
    return 0;
}


// program to show working of returning object from function
#include<iostream>
using namespace std;
class pr
{
    public:int a;
    public:pr(int b)
    {
        a=b;
    }
    public:void display()
    {
        cout<<"value of a is"<<a<<endl;   // (endl and \n) work same as new line.any one can be used
    }   
};
pr fun()  //func with return type class
{
    pr obj1(2);   // here creating object of class to invoke parametrized constructor
    return obj1;  // this func will return object of class program
}
int main()
{
    pr obj2(1);
    obj2.display();
    obj2=fun();   // calling func with with return type as class
    return 0;     // this func will return object,to store or receive the value of object,we have
}                 // to call func from inside other object


//"static object" vs normal object
#include<iostream>
using namespace std;
class program
{
    public:program()
    {
        cout<<"\n constructor invoked";
    }
    ~program()
    {
        cout<<"\n destructor invoked";
    }
    void display()
    {
        cout<<"\n member function called";
    }
};
void fun1()
{
   static program obj;
   obj.display(); 
}
int main()
{
    fun1();
    cout<<"\n recalling fun1()";
    fun1();
    return 0;
}
*/

