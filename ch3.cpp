#include "std_lib_facilities.h"

int main(){
    
    //3.3 INPUT AND TYPE: TRY THIS
    /*
    cout<<"Please enter yor first name and age\n";
    string first_name;
    double age;
    cin>>first_name;
    cin>>age;
    cout<<"Hello " <<first_name <<" (monthes " <<age*12 <<")\n";
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
    
    //3.7 NAMES: TRY THIS
    /*
    STRING s="Goodby, cruel world!";
    cOut<<S<<'\n';
    */
    
    //3.9 TYPES SAFETY: Example 1
    /*
    double x;
    double y=x;
    double z=2.0+x;
    //since x isnt  even initialized or given any value, the compiler will automatically give you error
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
    
    
    
    
    
    //CHAPTER 3 EXERCISE1 (all of chapter 3 Try This)
    
    //CHAPTER 3 EXERCISE2
    /*
    double miles{0};
    double kilometers{0};
    cout<<"\nThere are 1.609 kilometers to the mile.\n\nType the number of miles that you wish to convert to km:";
    cin>>miles;
    kilometers=miles*1.609;
    cout<<"\nThere is "<<kilometers<<" kilometer";
    if (kilometers>1){
        cout<<"s";
    }
    cout<<" in "<<miles<<" mile";
    if (miles>1){
        cout<<"s";
    }
    cout<<".\n";
    */
    
    //CHAPTER 3 EXERCISE3
    /*
    int double =0;
    */
    
    //CHAPTER 3 EXERCISE4
    /*
    int val1{0}, val2{0};
    int smaller {0}, larger {0}, sum {0}, difference {0}, product {0};//, ratio{0};
    int i {1}, abs1 {0}, abs2 {0}, commonFactor {0};
    string compare {};
    cout<<"\nPlease, give me 2 numbers: ";
    cin>>val1>>val2;
    
    sum=val1+val2;
    product=val1*val2;
    
    if (val1>val2){
        larger=val1;
        smaller=val2;
        difference=larger-smaller;
        compare=" is "+to_string(difference)+" more than ";
    }
    else if (val2>val1){
        larger=val2;
        smaller=val1;
        difference=larger-smaller;
        compare=" is "+to_string(difference)+" less than ";

    }
    else if(val1==val2){
        compare=" is the same as ";
    }
    else{
        simple_error("error!");
    }
    cout<<"\n"<<val1<<compare<<val2<<".\n"
        <<"\nThe sum of "<<val1<<" and "<<val2<<" is "<<sum<<".\n"
        <<"\nThe product of "<<val1<<" and "<<val2<<" is "<<product<<".\n ";
    
    if (val1<0){
        abs1=val1*-1;
    }
    else {
        abs1=val1;
    }
    if (val2<0){
        abs2=val2*-1;
    }
    else {
        abs2=val2;
    }
    
    while (i<=abs1){
        
        if(abs1%i==0&&abs2%i==0){
            commonFactor=i;
        }
        i++;
        
    }
    if (val1<0&&val2<0){
        commonFactor=(-1)*commonFactor;
    }
    cout<<"\nThe ratio between "<<val1<<" and "<<val2<<" is ";
    if (commonFactor!=0){
        cout<<val1/commonFactor<<":"<<val2/commonFactor<<"\n";
    }
    else{
        cout<<val1<<":"<<val2<<"\n";
    }
    */
    
    //CHAPTER 3 EXERCISE5
    /*
    double val1{0}, val2{0};
    double smaller {0}, larger {0}, sum {0}, difference {0}, product {0};//, ratio{0};
    //int i {1}, abs1 {0}, abs2 {0}, commonFactor {0};//this is only needed when calculating the ratio
    string compare {};
    cout<<"\nPlease, give me 2 numbers: ";
    cin>>val1>>val2;
    
    sum=val1+val2;
    product=val1*val2;
    
    if (val1>val2){
        larger=val1;
        smaller=val2;
        difference=larger-smaller;
        compare=" is "+to_string(difference)+" more than ";
    }
    else if (val2>val1){
        larger=val2;
        smaller=val1;
        difference=larger-smaller;
        compare=" is "+to_string(difference)+" less than ";

    }
    else if(val1==val2){
        compare=" is the same as ";
    }
    else{
        simple_error("error!");
    }
    cout<<"\n"<<val1<<compare<<val2<<".\n"
        <<"\nThe sum of "<<val1<<" and "<<val2<<" is "<<sum<<".\n"
        <<"\nThe product of "<<val1<<" and "<<val2<<" is "<<product<<".\n ";
    //from here is the calculation for ratio and it doesnt work because of type safety so more adjustments are needed for this to work
    if (val1<0){
        abs1=val1*-1;
    }
    else {
        abs1=val1;
    }
    if (val2<0){
        abs2=val2*-1;
    }
    else {
        abs2=val2;
    }
    
    while (i<=abs1){
        
        if(abs1%i==0&&abs2%i==0){
            commonFactor=i;
        }
        i++;
        
    }
    if (val1<0&&val2<0){
        commonFactor=(-1)*commonFactor;
    }
    cout<<"\nThe ratio between "<<val1<<" and "<<val2<<" is ";
    if (commonFactor!=0){
        cout<<val1/commonFactor<<":"<<val2/commonFactor<<"\n";
    }
    else{
        cout<<val1<<":"<<val2<<"\n";
    }
    */
    
    //CHAPTER 3 EXERCISE6
    /*
    int a{0}, b{0}, c{0};
    int low{0}, mid{0}, high{0};
    cout<<"\nGimme 3 values: ";
    cin>>a>>b>>c;
     
    if (a>b&&a>c){
        high=a;
        if(b>c){
            mid=b;
            low=c;
        }
        
        if(c>b){
            mid=c;
            low=b;
        }
    }
    else if (b>a&&b>c){
        high=b;
        if(a>c){
            mid=a;
            low=c;
        }
        
        if(c>a){
            mid=c;
            low=a;
        }
    }
    else if (c>a&&c>b){
        high=c;
        if(a>b){
            mid=a;
            low=b;
        }
        
        if(b>a){
            mid=b;
            low=a;
        }
    }
    cout<<"\n"<<low<<", "<<mid<<", "<<high<<",\n";
    */
    
    //CHAPTER 3 EXERCISE7
    /*
    string a{0}, b{0}, c{0};
    string low{0}, mid{0}, high{0};
    cout<<"\nGimme 3 values: ";
    cin>>a>>b>>c;
    if (a>b&&a>c){
        high=a;
        if(b>c){
            mid=b;
            low=c;
        }
        
        if(c>b){
            mid=c;
            low=b;
        }
    
    }
    else if (b>a&&b>c){
        high=b;
        if(a>c){
            mid=a;
            low=c;
        }
        
        if(c>a){
            mid=c;
            low=a;
        }
    
    }
    else if (c>a&&c>b){
        high=c;
        if(a>b){
            mid=a;
            low=b;
            
        }
        
        if(b>a){
            mid=b;
            low=a;
        }
    
    }
    cout<<"\n"<<low<<", "<<mid<<", "<<high<<",\n";
    */
    
    //CHAPTER 3 EXERCISE8
    /*
    int number {};
    string result {};
    cout<<"\nPlease give me a number to determine if it's odd or even.\n";
    cin>>number;
    if (number%2==0){
        result="an even number.";
    }
    else if (number%2==1||number%2==-1){
        result="an odd number.";
    }
    else{
        result="weird, it's neither odd or even.";
    }
    cout<<"\n"<<number<<" is "<<result;
    */
    
    //CHAPTER 3 EXERCISE9
    /*
    string name{};
    int number {};
    
    cout<<"\nName me a number: ";
    cin>>name;
    
    cout<<name;
    if (name=="zero"){
        number=0;
    }
    else if (name=="one"){
        number=1;
    }
    else if (name=="two"){
        number=2;
    }
    else if (name=="three"){
        number=3;
    }
    else if (name=="four"){
        number=4;
    }
    else{
        simple_error("I'm unable to recognize the number please give me something from 0 to 4.");

    }
    cout<<"\nI recognize \""<<name<<"\" as "<<number<<"\n";
    */
    
    //CHAPTER 3 EXERCISE10
    /*
    string operation{};
    double operand1{}, operand2{}, result{};
    cout<<"\nGive me an operation followed by 2 operands: ";
    cin>>operation>>operand1>>operand2;
    
    if (operation=="+"||operation=="plus"){
        operation="+";
        result=operand1+operand2;
    }
    else if (operation=="-"||operation=="min"){
        operation="-";
        result=operand1-operand2;
    }
    else if (operation=="*"||operation=="mul"){
        operation="*";
        result=operand1*operand2;
    }
    else if (operation=="/"||operation=="div"){
        operation="/";
        result=operand1/operand2;
    }
    else {
        simple_error("That's an invalid or unrecognized operation");
    }
    
    cout<<"\n"<<operand1<<" "<<operation<<" "<<operand2<<" = "<<result<<"\n";
    */
    
    //CHAPTER 3 EXERCISE11
    /*
    int penny{},nickle{},dime{},quarter{},loonie{},toonie{};
    string grammarp{}, grammarn{}, grammard{}, grammarq{}, grammarl{}, grammart{};
    double total{};
    
    cout<<"\nWelcome to a coin counter!\n";
    
    
    cout<<"\nCount the number of pennies for me please: ";
    cin>>penny;
    cout<<"\nCount the number of nickles for me please: ";
    cin>>nickle;
    cout<<"\nCount the number of dimes for me please: ";
    cin>>dime;
    cout<<"\nCount the number of quarters for me please: ";
    cin>>quarter;
    cout<<"\nCount the number of loonies for me please: ";
    cin>>loonie;
    cout<<"\nCount the number of toonies for me please: ";
    cin>>toonie;
    
    
    if (penny>1||-1>penny){
        grammarp="pennies";
    }
    else if (penny==1||penny==0){
        grammarp="penny";
    }
    if (nickle>1||-1>nickle){
        grammarn="nickles";
    }
    else if (nickle==1||nickle==0){
        grammarn="nickle";
    }
    if (dime>1||-1>dime){
        grammard="dimes";
    }
    else if (dime==1||dime==0){
        grammard="dime";
    }
    if (quarter>1||-1>quarter){
        grammarq="quarters";
    }
    else if (penny==1||penny==0){
        grammarq="quarter";
    }
    if (loonie>1||-1>loonie){
        grammarl="loonies";
    }
    else if (loonie==1||loonie==0){
        grammarl="loonie";
    }
    if (toonie>1||-1>toonie){
        grammart="toonies";
    }
    else if (toonie==1||toonie==0){
        grammart="toonie";
    }
    
    
    total=0.01*penny+.05*nickle+.1*dime+.25*quarter+1*loonie+2*toonie;
    
    cout<<"\n\n"
        <<"You have "<<penny<<" "<<grammarp<<"\n"
        <<"You have "<<nickle<<" "<<grammarn<<"\n"
        <<"You have "<<dime<<" "<<grammard<<"\n"
        <<"You have "<<quarter<<" "<<grammarq<<"\n"
        <<"You have "<<loonie<<" "<<grammarl<<"\n"
        <<"You have "<<toonie<<" "<<grammart<<"\n"
    
        <<"\nThe value of all of your coins is $"<<total<<"\n";
    */
    
    return 0;
}

