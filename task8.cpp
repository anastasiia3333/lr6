#include <iostream>
using namespace std;

int dif(int a, int b);
float dif(float a, float b);

int main()
{
    // Отримання адреси перевантаженої функції для цілих чисел
    int (*int_diff_pr)(int, int) = &dif;
    // Виклик функції за допомогою отриманої адреси
    cout << "Різниця між числами типу int: " << int_diff_pr(10, 4) << endl;

    // Отримання адреси перевантаженої функції для дійсних чисел
    float (*float_diff_pr)(float, float) = &dif;
    // Виклик функції за допомогою отриманої адреси
    cout << "Різниця між числами типу float: " << float_diff_pr(4.5, 1.3) << endl;
    return 0;
}

int dif(int a, int b) 
{
	return a-b;
}

float dif(float a, float b)
{
	return a-b;
}