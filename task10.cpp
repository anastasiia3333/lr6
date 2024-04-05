#include <iostream>
#include <string>
 
using namespace std;
 
void reverse(string &str, int count = 100)
{
    string temp = str;
    str = "";
 
    count = min(count, (int)temp.length());
    for (int i = count - 1; i >= 0; i--) { 
        str += temp[i]; 
    }
    for (int i = count; i < (int)temp.length(); i++){
        str += temp[i]; 
    }
}
 
int main() 
{
    string str = "Some text to test a function.";
    reverse(str, 10); 
    cout << str << endl; 
 
    return 0;
}
