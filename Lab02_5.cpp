#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <ctime>
#include <time.h>

using namespace std;

class Time_Day{
    DWORD time_start;
    DWORD time_end;
public:
    Time_Day(DWORD s_time){
        time_start = s_time
    };
    void PrintDate();
    ~Time_Day();
};

void Time_Day::PrintDate(){
    time_t now;
    tm * dt;
    time now;
    dt = localtime(&now);
    char * date_now = asctime(dt);
    cout << date_now;
}

Time_Day::~Time_Day(){

}


int main(){

return 0;
};
