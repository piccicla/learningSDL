/*
 1. Create and implement a class called Time. Have a method on the class called Init that takes in the hour, minute and second in 24 hour time.

This class should be able to:

- Display the time in 12 hour format
- eg. 12:10:01 am - 12 hours, 10 minutes and 1 second in the morning

- Display the time in 24 hour format
- eg. 22:10:05 - this is 10:10:05 pm in 12 hour time

You should not have to change the internal data representation of the class to display in either format


 * */

#include <iostream>

class Time{
private:
    int hour;
    int minute;   
    int second;
public:
    void SetTime(int h,int m,int s);
    void Display12H();
    void Display24H();
    
};

void Time::SetTime(int h,int m,int s){
            hour = h;
            minute = m;
            second = s;
    }
void Time::Display12H(){
        if (this->hour > 12){
            std::cout<<((this->hour)-12)<<":"<<this->minute<<":"<<this->second<<" pm"<<std::endl;
        }
        else{
            std::cout<<this->hour<<":"<<this->minute<<":"<<this->second<<" am"<<std::endl;
        }
    }
void Time::Display24H(){
        std::cout<<this->hour<<":"<<this->minute<<":"<<this->second<<std::endl;
    }


/*
int main(int argc, char **argv)
{
	Time t;
    t.SetTime(3,4,5);
    t.Display12H();
    t.Display24H();
    
    t.SetTime(13,4,5);
    t.Display12H();
    t.Display24H();
    
    
    return 0;
}*/