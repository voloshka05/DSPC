#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void task1() {
    for (int i = 0; i < 5; i++) {
        cout << "Task 1 iteration" << i + 1 << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void task2() {
    for (int i = 0; i < 5; i++) {
        cout << "Task 2 iteration " << i + 1 << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main() {
    thread thread1(task1);
    thread thread2(task2);

    thread1.join();
    thread2.join();

    cout << "Both streams have been completed" << endl;

    return 0;
}
