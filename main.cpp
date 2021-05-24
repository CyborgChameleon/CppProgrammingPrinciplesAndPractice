#include "std_lib_facilities.h"

//g++ -std=c++17 -Wall -Wextra main.cpp

int main(){
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //CHAPTER 3 DRILL
    /*
    //Question1
    
    string name { };
    cout<<"\nPlease write the name that you want to write to: ";
    cin>>name;
    cout<<"\nDear "<<name<<",\n";
    
    
    //Question2 (continue from Question1)
     
    cout<<"\n\tHow are you? I am fine. I miss you. \n";
    
    //cout<<"I was hoping you would remember \n"
    //<<"to give yourself self care because without your best self, you'll feel down. \n"
    //<<"remember to be patient with yourself";
    //write the rest later
    
    
    //Question3
    
    cout<<"\nWhat's the your friends name? ";
    string friend_name { };
    cin>>friend_name;
    cout<<"\nHave you seen "<<friend_name<<" lately?\n";
    
    
    //Question4
    
    char friend_gender {0};
    cout<<"\nWhat is "<<friend_name<<"'s pronoun? [m=male, f=female] ";
    cin>>friend_gender;
    cout<<"\nIf you see "<<friend_name<<", please ask ";
    if(friend_gender=='m'){
        cout<<"him";
    }
    else if(friend_gender=='f'){
        cout<<"her";
    }
    else {
        cout<<"them";
    }
    cout<<" to call me.\n";
    
    
    //Question5
    
    int age;
    cout<<"\nHow old is "<<name<<"? ";
    cin>>age;
    if (0<age&&age<110)
        cout<<"\nI heard you just had a birthday party and you are "<<age<<" years old.\n";
    else
        simple_error("You're kidding!");
    
    
    //Question6
    
    if (age<12)
        cout<<"\nNext year, you will be "<<age+1<<"\n";
    if (age==17)
        cout<<"\nNext year, you will be able to vote!\n";
    if (age>70)
        cout<<"\nI hope you are enjoying your retirement.\n";
    
    
    //Question7
    
    cout<<"\nYours sincerely,\n"
        <<"\n__________________________\n"
        <<"__________________________\n"
        <<"\n"<<name<<"\n";
    */
    
    
    
    //3.9.2 UNSAFE CONVERSIONS: Example 2
    /*
    double d=0;
    while (cin>>d){
        int i{d};
        //tries to preserve d but int needs to truncate the double so the compiler will make it an error
        char c=i;
        int i2=c;
        cout<<"d=="<<d
            <<"c=="<<c
            <<"i2=="<<i2
            <<"char("<<c<<")\n";
    }
    */
    
    
    
    //3.9.2 UNSAFE CONVERSIONS: TRY THIS
    /*
    double d=0;
    while (cin>>d){
        int i = d;
        char c=i;
        int i2=c;
        cout<<"d=="<<d
            <<"c=="<<c
            <<"i2=="<<i2
            <<"char("<<c<<")\n";
    }
    */
    
    
    
    //3.9.2 UNSAFE CONVERSIONS: Example 1
    /*
    int a=2'000; //if you put 127, it'll print else otherwise 128+ will print oops
    char c=a;
    int b=c;
    if (a != b)
        cout<<"oops: "<<a<<"!="<<b<<'\n';
    else
        cout <<"wow!we have a large characters\n";
    */
    
    
    
    //3.9.1 TYPES SAFETY: Example 1
    /*
    char c='x';
    int i1=c;
    int i2='x';
    //i1 & i2 will get 120 (integer value of x in character set)
    char c2=i1;
    //cout<<c<<'<<i1<<'<<c2<<'\n'; //this is probably outdated as this no longer work
    cout<<"c = "<<c<<"\ni1 = "<<i1<<"\ni2 = "<<i2<<"\nc2 = "<<c2<<'\n';
    */
    
    //3.9 TYPES SAFETY: Example 1
    /*
    double x;
    double y=x;
    double z=2.0+x;
    //since x isnt  even initialized or given any value, the compiler will automatically give you error
    */
    
    
    
    //3.7 NAMES: TRY THIS
    /*
    STRING s="Goodby, cruel world!";
    cOut<<S<<'\n';
    */
    
    
    
    //3.6 COMPOSITE ASSIGNMENT OPERATORS: Example 1
    /*
    int number_of_words =0;
    string previous =" ";
    string current;
    while (cin>> current){
        ++number_of_words;
        if (previous == current)
            cout<<"word number "<<number_of_words
                <<" repeated:"<<current<<'\n';
        previous=current;
    }
    */
    
    
    
    //3.5.1 ASSIGNMENT AND INITIALIZATION: TRY THIS
    /*
    string previous =" ";
    string current;
    while (cin>>current){
        if (previous==current)
            cout<<"repeated word: "<<current<< '\n';
    previous=current;
    }
    // ctrl+D=exit while loop in the termnial on unix/linux
    // ctrl+Z=exit while loop in the termnial on windows
    */
    
    
    
    //3.4 OPERATIONS AND OPERATORS: Example 2
    /*
    cout<<"Please enter two names \n";
    string first;
    string second;
    cin>>first >>second;
    if (first==second) cout<<"that's the same name twice\n";
    if (first<second) cout<<first<<" is alphabetically before "<<second<<"\n";
    if (first>second) cout<<first<<" is alphabetically after "<<second<<"\n";
    */
    
    
    
    //3.4 OPERATIONS AND OPERATORS: TRY THIS
    /*
    cout<<"please enter a floating-point value: ";
    int n=0;
    cin>>n;
    //double m=n;
    cout <<"n == "                  <<n
        <<"\nn+1 == "               <<n+1
        <<"\nthree times n == "     <<n*3
        <<"\ntwice n == "           <<n+n
        <<"\nn squared == "         <<n*n
        <<"\nhalf of n == "         <<n/2
        <<"\nsquare root of n == "  <<sqrt(n)
        <<"\n";
    */
    
    
    
    //3.4 OPERATIONS AND OPERATORS: Example 1
    /*
    cout<<"type a number followed by a name";
    
    int count;
    cin>>count;
    string name;
    cin>>name;
    
    int c2 = count+2;
    string s2=name+" Jr.";
    
    int c3 = count-2;
    
    cout<<"the original number is "<<count<<"\n";
    cout<<"the original name is   "<<name<<"\n";

    cout<<s2<<"\n";
    cout<<c2<<"\n";
    
    cout<<c3<<"\n";
    */
    
    
    
    //3.3 INPUT AND TYPE: TRY THIS
    /*
    cout<<"Please enter yor first name and age\n";
    string first_name;
    double age;
    cin>>first_name;
    cin>>age;
    cout<<"Hello " <<first_name <<" (monthes " <<age*12 <<")\n";
    */
    
    
    
    
   //before chapter 3.3
    /*
     //i dont remember where this is from
    int a;
    int b;
    int sum;
    
    cout<<"Enter a number (press enter after you're done)\n";
    cin>> a;
    
    cout<<"Enter another number (press enter after you're done)\n";
    cin>> b;
    
    sum=a+b;
    
    cout<<sum <<endl;
    */
    return 0;
}

