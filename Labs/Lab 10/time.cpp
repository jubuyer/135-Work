#include <iostream>

#include "time.h"

/*
@param time - Time object

Prints the time in HH:MM format
*/
void printTime(Time time) {
    std::cout << time.h << ":" << time.m;
}

/*
@param time - Time object

@returns an integer representing the number of minutes since 00:00;
*/
int minutesSinceMidnight(Time time) {
	return ((time.h * 60) + (time.m));
}

/*
@param earlier - Time object to be compared
@param later - Time object to be compared

@returns an integer representing the minutes until time later from time earlier
*/
int minutesUntil(Time earlier, Time later) {
  //alternate implementation
  //return (-1 * (minutesSinceMidnight(earlier) - minutesSinceMidnight(later)));
  return (minutesSinceMidnight(later) - minutesSinceMidnight(earlier));
}

/*
@param time - Time object
@param min - integer representing minutes to add to Time object

@returns a Time object with the new time
*/
Time addMinutes(Time time, int min) {
  Time answer;
  if (min >= 60) {
    if(((time.m + (min%60)) >= 60)) { //catches overflow of minutes
      int overflow = ((time.m + (min%60)) / 60);      
      int hours = (((time.h + (min/60)) % 24) + overflow);
      int minutes = (time.m - (overflow * 60) + (min%60));
      answer = {hours,minutes};    
    } else if (((time.m + (min%60)) < 60)) { //adds hours, if over 24 hours, resets from 00:00
      answer = {((time.h + (min/60)) % 24),time.m + (min%60)};
    }
  } else {
    answer = {time.h, (time.m + min)};
  }

  return answer;
}
