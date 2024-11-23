#include <thread>
#include <iostream>
#include <vector>
#include<chrono>
#include<mutex>

// #include <this_thread>
using namespace std;
mutex mtx;

void printthis(const string &message){
    mtx.lock();
    cout<<"message: "<<message;
    mtx.unlock()

}
int main(){
    thread t1(printthis, "very nice message");
    thread t2(printthis, "this is a message from thread 2");

    t1.join();
    std::this_thread::sleep_for(std::chrono::seconds(10));
    t2.join();

return 0;
}