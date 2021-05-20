#include "std_lib_facilities.h"

//g++ -std=c++17 -Wall -Wextra main.cpp

int main(){
    //3.8 TYPES AND OBJECTS:
    
    
    
    
    
    
    
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

