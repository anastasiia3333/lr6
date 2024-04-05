#include <iostream>
#include <windows.h>
#include <chrono>
 
using namespace std;
using namespace std::chrono;
 
class stopwatch {
    steady_clock::time_point start;
    steady_clock::time_point end;
    steady_clock::time_point creation_time;
 
public:
    stopwatch();
    stopwatch(steady_clock::time_point start);
    ~stopwatch();
    void Start();
    void Stop();
    void Show();
};
 
stopwatch::stopwatch() : creation_time(steady_clock::now()) {}
 
stopwatch::stopwatch(steady_clock::time_point start) {
    creation_time = start;
}
 
stopwatch::~stopwatch() {
    auto elapsed_time = steady_clock::now() - creation_time;
    cout <<"\nTime has passed since the object was created (or from a given point in time): "
         << duration_cast<duration<double>>(elapsed_time).count() << " seconds\n";
}
 
void stopwatch::Start() {
    start = steady_clock::now();
}
 
void stopwatch::Stop() {
    end = steady_clock::now();
}
 
void stopwatch::Show() {
    auto elapsed_time = end - start;
    cout << "\nElapsed time: "
         << duration_cast<duration<double>>(elapsed_time).count() << " seconds\n";
}
 
int main() {
    SetConsoleOutputCP(65001);
    stopwatch ob;
    
    steady_clock::time_point start = steady_clock::now();
 
    char c;
    cout << "Enter something to turn on the timer: ";
    cin >> c;
    ob.Start();
    
    cout << "Enter something to turn off the timer ";
    cin >> c;
    ob.Stop();
    ob.Show();
 
    stopwatch ob2(start);
 
    return 0;
}
