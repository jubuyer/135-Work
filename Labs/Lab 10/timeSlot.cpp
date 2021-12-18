#include <iostream>
#include <string>

#include "time.h"
#include "movie.h"
#include "timeSlot.h"

std::string getTimeSlot(TimeSlot ts) {
  Movie mov = ts.movie;
  Time start = ts.startTime;
  Time end = addMinutes(start, mov.duration);
  std::string output = getMovie(mov);

  output += " [starts at ";
  output += std::to_string(start.h);
  output += ":";
  output += std::to_string(start.m);
  output += ", ends by ";
  output += std::to_string(end.h);
  output += ":";
  output += std::to_string(end.m);
  output += "]";

  return output;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
  Movie mov = ts.movie;
  Time start = ts.startTime;
  Time end = addMinutes(start, mov.duration);
  Time nextStart = end;

  TimeSlot out = {nextMovie, nextStart};

  return out;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
  bool overlap = false;

  Time start1 = ts1.startTime;
  int duration1 = ts1.movie.duration;
  Time start2 = ts2.startTime;
  int duration2 = ts2.movie.duration;

  if (minutesUntil(start1,start2) > minutesUntil(start2,start1)) {
    (duration1 > minutesUntil(start1,start2)) ? overlap = true : overlap = false;
  } else {
    (duration2 > minutesUntil(start2,start1)) ? overlap = true : overlap = false;
  }

  return overlap;
}
