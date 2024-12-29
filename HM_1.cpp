#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    thread thread1(task1);
    thread thread2(task2);

    cout << "!Hello world!" << endl;

    return 0;
}
