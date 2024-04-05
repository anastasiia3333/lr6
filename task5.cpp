#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

long mystrtol(const char *start, char **end, int base = 10) 
{
    return strtol(start, end, base);
}
 
int main() 
{
    const char *str = "2468qwerty";
    char *end; 
    long num = mystrtol(str, &end); 
    cout << "Number: " << num << endl;
    cout << "Remainder: " << end << endl;
    return 0;
}
