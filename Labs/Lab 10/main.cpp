#include <iostream>

#include "time.h"
#include "movie.h"
#include "timeSlot.h"

int main(int argc, char const *argv[]) {
  Time time1 = {23, 0};
  Time time2 = {10, 30};
  Time time3 = {13, 40};
  Time start1 = {9, 15};
  Time start2 = {12, 15};
  Time start3	= {10, 30};
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  Movie movie3 = {"JFK", DRAMA, 189};

  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};
  TimeSlot morning2 = {movie3, start3};
  TimeSlot afternoon = scheduleAfter(morning2,movie1);//function call for D

  std::cout << "This is the main program.\n";
  std::cout << "To see tests please use the \x1B[36mMakefile\033[0m to run tests.cpp.\n";
  std::cout << "Tests include getting the details of a movie or timeslot\n and "
  "functions dealing with time.\n"; //function calls for task A, B, E
  std::cout << "In example:\n" << "minutesSinceMidnight(time1) == " << minutesSinceMidnight(time1);
  std::cout << "\nminutesUntil(time2, time3) == " << minutesUntil(time2, time3);
  std::cout << "\ntimeOverlap(morning,morning2) == " << timeOverlap(morning,morning2) << '\n';
  std::cout << "\nInput '\x1B[36mmake help\033[0m' to see a list of targets.\n\n\n";

  std::cout << "\t\t\x1B[33m******\033[0m WELCOME TO \x1B[31mAMC\033[0m THEATRES \x1B[33m******\033[0m " << '\n';
  std::cout << "\n\tTICKETS: ADULT - $20\t CHILD - $10\t SENIOR - $15\n" << '\n';
  std::cout << "\t\t\t\x1B[33m******\033[0m SCHEDULE \x1B[33m******\033[0m" << '\n';
  std::cout << "   " << getTimeSlot(morning) << '\n'; //function calls for task C
  std::cout << "   " << getTimeSlot(morning2) << '\n';
  std::cout << "   " << getTimeSlot(afternoon) << '\n';
  std::cout << "   " << getTimeSlot(daytime) << '\n';
  std::cout << "   " << getTimeSlot(evening) << '\n';
  return 0;
}
