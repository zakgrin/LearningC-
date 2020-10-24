#include<iostream>
#include<iomanip>
using namespace std; 

/*
- Usually, class variables are private while class functions&constructre are public.
- This important to control class variables values.
*/
class Time
{
private: 
    int hour;
    int minute;
    int second; 

public: 
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m; 
        second = s; 
    }

    void print()
    {
        cout << setfill('0'); 
        cout << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
    }

    // Setters: 
    void setHour(int h)
    {
        if (h >= 1 && h <= 12)
            hour = h; 
    }
    void setMinute(int m)
    {
        if (m >= 0 && m <= 60)
            minute = m; 
    }
    void setSecond(int s)
    {
        if (s >= 0 && s <= 60)
            second = s; 
    }

    // getters: 
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return second;
    }
}; 


int main()
{
    Time time1(1, 2, 4); 
    time1.print();
    time1.setHour(33);
    time1.setMinute(33); 
    time1.setSecond(33); 
    time1.print();

    cout << "Hour: " << time1.getHour() << endl;
    cout << "Minute: " << time1.getMinute() << endl;
    cout << "Second: " << time1.getSecond() << endl;

    /*
        - class variables can not be accessed directly.
        - by setter we can change class variables. 
        - by getter we can return class variables. 
    */ 

    return 0; 
}