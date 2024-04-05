#include <iostream>
using namespace std;

class samp {
    int a;
public:
    // Перевантажений конструктор для створення об'єкта з вказаним значенням a
    samp(int val) {
        a = val;
    }
    // Конструктор за замовчуванням для створення об'єкта зі значенням a за замовчуванням
    samp() {
        a = 0;
    }
    int get_a() {
        return a;
    }
};

int main() {
    samp obj(88); // Створення об'єкта з вказаним значенням a
    samp objarray[10]; // Масив з 10 об'єктів, створених за замовчуванням

    cout << "obj: " << obj.get_a() << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Array: [" << i << "] a = " << objarray[i].get_a() << endl;
    }
    return 0;
}