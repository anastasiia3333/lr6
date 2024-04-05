#include <iostream>
#include <cstring>
using namespace std;

class strtype 
{
    char *p;
    int len;
public:
    // конструктор без параметрів
    strtype() {
        len = 255;
        p = new char[len + 1]; // +1 для нульового символу
        strcpy(p, ""); // Ініціалізуємо рядок нульовим рядком
    }

    // конструктор з параметрами
    strtype(const char *s, int size) {
        len = size;
        p = new char[len + 1]; // +1 для нульового символу
        strncpy(p, s, len); // Копіюємо рядок s до p, обмежуючи його довжину len
        p[len] = '\0'; // Завершуємо рядок нульовим символом
    }

    // Деструктор для звільнення виділеної пам'яті
    ~strtype() {
        delete [] p;
    }

    char *getstring() { return p; }
    int getlength() { return len; }
};

int main() {
    // Використання першого конструктора
    strtype s1;
    cout << "Length of s1: " << s1.getlength() << endl;
    cout << "String s1: " << s1.getstring() << endl;

    // Використання другого конструктора
    const char *test_string = "I like programming!!";
    int size = strlen(test_string); // Визначаємо довжину рядка
    strtype s2(test_string, size);
    cout << "\nLength of s2: " << s2.getlength() << endl;
    cout << "String s2: " << s2.getstring() << endl;

    return 0;
}
