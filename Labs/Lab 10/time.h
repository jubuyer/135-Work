#pragma once

class Time {
public:
    int h;
    int m;
};

void printTime(Time time);

//Task A
int minutesSinceMidnight(Time time);

int minutesUntil(Time earlier, Time later);

//Task B
Time addMinutes(Time time0, int min);
