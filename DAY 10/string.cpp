#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1= "Hello ";
    string str2 = "world";
    cout<< str1<<str2<< endl;

    //length of string
    int n= str1.length();
    cout<<n<<endl;
    
    //append
    cout<< "after append: "<<str1.append("students")<<endl;

    //emptystring
    cout<< "is string empty"<<str2.empty()<<endl;

    //concatination of string
    cout<< "after concatination the string is: "<< str1 + "Baccho"<<endl;
    cout<< "after concatination the string is "<< str1<<endl;
    
    //push_back method
    str2.push_back('U');
    cout << "After push_back() method:" << str2 << endl; // JecrcU
    // pop_back() method
    str2.pop_back();
    cout << "After pop_back() method:" << str2 << endl; // Jecrc

    // find() method
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1:" << index << endl;

    // swap() method
    str1.swap(str2);
    cout << "After swapping str1 and str2:" << endl;
    cout << "str1: " << str1 << endl; // Jecrc
    cout << "str2: " << str2 << endl; // Hellostudents

    // substr() method
    string subStr = str2.substr(5, 6); // 5 is index and 6 is total length of substring
    cout << "Substring of str2 from index 5 with length 6:" << subStr << endl;

    // getline() method
    string str3;
    // cin >> str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;

    return 0;
}
    