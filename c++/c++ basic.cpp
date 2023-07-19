#include <iostream>
using namespace std;
 

 /*int addition (int a,int b)
    {
        int r;
        r=a+b;
        return r;
    }
 */
 
 int main(){
   /*cout<<"Hello World!"<<endl;
    cout<<"My name is Ashish\n";*/
    
   //-------------Datatypes in c++-----------------

   /*-----int (integer), char (charater), bool (boolean), string (text), 
    -------float (decimal), double (large decimal)*/

    //------------variables in c++-----------------
    /*Rules of variable in c++
     1. Do not use special symbol like $,@,&,%,etc
     2. Do not start your variable name with number.
     3. Do not use witespace in your variable name, u can use underscrore_
     4. Do not use keyword cout, cin, return, int*/

    /* int myNum = 6;
     float myFloat = 5.99;
     double myDouble = 9.9587345;
     char myChar = '+';
     bool myBoolean = false;
     string myName;*/

     /*cout<<"Int datatype output is : "<<myNum<<endl;
     cout<<"float datatype output is : "<<myFloat<<endl;
     cout<<"double datatype output is : "<<myDouble<<endl;
     cout<<"char datatype output is : "<<myChar<<endl;
     cout<<"bool datatype output is : "<<myBoolean<<endl;
     cout<<"string datatype output is : "<<myName<<endl;*/

    //--------------size of datatypes-------------------

     /*cout<<"Int datatype output is : "<<sizeof(int)<<endl;
     cout<<"Int datatype output is : "<<sizeof(float)<<endl;
     cout<<"Int datatype output is : "<<sizeof(double)<<endl;
     cout<<"Int datatype output is : "<<sizeof(char)<<endl;
     cout<<"Int datatype output is : "<<sizeof(bool)<<endl;
     cout<<"Int datatype output is : "<<sizeof(string)<<endl;*/

     /*cout<<"Int datatype output is : "<<sizeof(int)<<endl;
      cout<<"Int datatype output is : "<<sizeof(short int)<<endl;
       cout<<"Int datatype output is : "<<sizeof(long int)<<endl;
        cout<<"Int datatype output is : "<<sizeof(long long int)<<endl;*/

    //---------------taking Input & outpuut from user---------------------

     /*cout<<"Enter your name "<<endl;
     cin>>myName;
     cout<<"I love u "<<myName<<endl;
     cout<<"u r the best mom in world. I love u soooo much"<<endl;*/

    /*cout<<"Enter your name "<<endl;
     cin>>myName;
     cout<<"your name is "<<myName<<endl;
     cout<<"YOu are a good friend. you are best player and you also good in cards"<<endl;
    */
    //----------Taking Input use (cin), and for output use (cout)----------

    //-----------operators in c++------------------
    /*
    1. Arithemetic Operator (+,-,*,/,%)
    2. Relational Operator (==, !=, <, >)
    3. Logical Operator (&&, ||, !)
    4. Bitwise Operator (&, >>, <<)
    5. Assignment Operator (+=,-=, *=, /=)
    6. Miscelleneous Operator (sizeof(), pointer(*))
    */

   //--------------Arithemetic Operators--------------
    /* --------Binary operators----------------
    int a = 5;
    int b = 8;
    int c;

    c = a + b;
    cout<<"Addition of a + b is "<<c<<endl;

    c = a - b;
    cout<<"Subtraction of a - b is "<<c<<endl;
    
    c = a * b;
    cout<<"Multiply of a * b is "<<c<<endl;

    c = a / b;
    cout<<"Divide of a / b is "<<c<<endl;

    c = a % b; (% gives u remainder)
    cout<<"Modulus of a % b is "<<c<<endl;
    */

   /*-------unary operator-------------

    Pre incrementer(++a or --a), Post incrementer(a++ or a--)
   
  
  int i=1;
      //1   //3
  i = i++ + ++i;

  cout<<i<<endl;
  
  int i=1;
  int j=2;
  int k;
     //1 //2  //1   //2   //3   //4
  k = i + j + i++ + j++ + ++i + ++j;

  cout<<i<<" "<<j<<" "<<k<<endl;
  

  int i=0;
      //0   //0   //1   //1
  i = i++ - --i + ++i - i--;

  cout<<i<<endl;
  */

   //--------------Relational Operators-----------------
    /*
    int a = 21;
    int b = 15;
    int c;

    if (a>b){
        cout<<"Value is equal"<<endl;
    }
    else
    {
        cout<<"Value is not equal"<<endl;
    }
    */

    //-------------Assignment Operator--------------
    /*
    int a = 21, b;

    b=a;
    cout<<"Equal of A and B is "<<b<<endl;

    b+=a; //b=b+a
    cout<<"Plus Equal of A and B is "<<b<<endl;

    b-=a; //b=b-a------21=21-21. ---21=0 but b=21 hahaha
    cout<<"Sub Equal of A and B is "<<b<<endl;

    b*=a; //b=b*a
    cout<<"Multiple Equal of A and B is "<<b<<endl;
     
    b/=a; //b=b/a
    cout<<"Divide Equal of A and B is "<<b<<endl;
    */
   //----------------Logical Operators---------------------
   /*  
    int n;
    cin>>n;

    if(n%2==0 && n%3==0)
    {
      cout<<"Divisible by both"<<endl;
    }
    else if(n%2==0)
    {
      cout<<"Divisible by only 2"<<endl;
    }
    else if(n%3==0)
    {
      cout<<"Divisible by only 3"<<endl;
    }
    else
    {
      cout<<"Divisible by none"<<endl;
    }
   */


   //-----------------Bitewise Operators-------------------
   

   //-----------------miscelleneous Operators---------------


   //----------------if-else statement--------------------

    /*
   int age;

   cout<<"Enter your Age for seeing the voters Age limit"<<endl;
   cin>>age;

   if (age<18)
   {
       cout<<"Your age is too less you can not vote right now!"<<endl;
   }
    else if (age>=18 && age<=80)
    {
        cout<<"You can vote!"<<endl;
    }
   else 
   {
       cout<<"Invalid Input. you can't give your vote!!"<<endl;
   }
    */


   //----------------Switch Case Statement---------------------

    /*
     char grade = 'A';
     cin>>grade;

     switch (grade)

     {

     case 'A':

       cout<<"Your Grade is A"<<endl;

       break;


     case 'B':

       cout<<"Your Grade is B"<<endl;

       break;
   

     case 'C':

       cout<<"Your Grade is C"<<endl;

       break;
     

     case 'D':

       cout<<"Your Grade is D"<<endl;

       break;


     default: 
     cout<<"Invalide Input by user!"<<endl;

     }
    */


    //-----------------C++ Loops------------------------
    /*
    1. for loop
    2. do-while loop
    3. while loop
    */

   //----------for loop-----------

   /*
   for (int i = 1; i <= 100; i++)
   {
       cout<<"Value incremented by 1 in every step till 100 is "<<i<<endl;
   }
   */

  //----------while loop-------------

    /*
    int a = 20;

    while (a<=100)
    {
        
        cout<<"Value increased in every step is "<<a<<endl;
        a++;
    }
    */


   //---------------do-while loop--------------

    /*
    int a = 10;

    do
    {
      cout<<"The incrementention value by 1 in every step is "<<a<<endl;
      a = a+1; //a+=1
    } while (a<=25);
    */
   //-----------------tables by code----------------------

   /*
   int limit = 10;

   for (int i = 0; i <= 100; i++)
   {
       cout<<"10 x "<<i<<" = "<<i*limit<<endl;
   }
   */
   
   //------------function---------------------
   //-----------easy to add--------------

   /*
   int z;

   z = addition (6,9);
   cout<<"The result is "<<z<<endl;
   */
   
   //---------------Arrays in c++---------------------
   //-----------1D & 2D arrays------------
   /* 
   int arr[5] = {2,5,69,9,8};
               //0,1,2, 3,4
   cout<<"The value of arr[0] is "<<arr[0]<<endl;
   cout<<"The value of arr[1] is "<<arr[1]<<endl;
   cout<<"The value of arr[2] is "<<arr[2]<<endl;
   cout<<"The value of arr[3] is "<<arr[3]<<endl;
   cout<<"The value of arr[4] is "<<arr[4]<<endl;
   */
  /*
  int n;
  cout<<"enter n ";
  cin>>n;

  int arr[n];

  for (int i = 0; i<n; i++)
  {
      cin>>arr[i];
  }

  for (int i = 0; i<n; i++)
  {
    cout<<arr[i]<<endl;
  }
  */
  
   /*
   int a[5][2] = {{0,0}, 
                  {1,2},
                  {2,4},
                  {3,6},
                  {4,8}};

  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 2; j++)
    {
      cout<< "a["<<i<<"]["<<j<<"]:";
      cout<<a[i][j]<<endl;
    }
   */ 
   
   //===================pointers in c++--------------------
   /*
   int var = 250;
   int *ptr;

   ptr = &var;

   cout<<"The Value of VAR Variable ";
   cout<<var<<endl;

   cout<<"Address stored in PTR Variable ";
   cout<<*ptr<<endl;
   */

  
  //================================ C++ complete ============================


    return 0;

   }

