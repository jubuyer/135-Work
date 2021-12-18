#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "time.h"
#include "movie.h"
#include "timeSlot.h"
#include "doctest.h"

TEST_CASE("TASK A TESTS") {
	SUBCASE("minutesSinceMidnight() Tests") {
		Time time0 = {23, 0};
		Time time1 = {17, 45};

		CHECK(minutesSinceMidnight(time0) == 1380);
		CHECK(minutesSinceMidnight(time1) == 1065);
	}

	SUBCASE("minutesUntil() Tests") {
		Time time2 = {10, 30};
		Time time3 = {13, 40};
		CHECK(minutesUntil(time2, time3) == 190);
		CHECK(minutesUntil(time3, time2) == -190);
	}
}

TEST_CASE("TASK B TESTS") {
	SUBCASE("addMinutes() Tests") {
		Time time4 = {8, 10};
		Time time5 = addMinutes(time4, 75);
		Time time6 = {9, 25};
		CHECK(time5.h == time6.h);
		CHECK(time5.m == time6.m);
	}

	SUBCASE("addMinutes Full Day Test") {
		Time time7 = {8,10};
		Time time8 = addMinutes(time7, 1444);
		Time time9 = {8, 14};
		Time time10 = {9 , 15};
		Time time11 = addMinutes(time10,116);
		Time time12 = {11, 11};
		CHECK(time8.h == time9.h);
		CHECK(time8.m == time9.m);
		CHECK(time11.h == time12.h);
		CHECK(time11.m == time12.m);
	}

	SUBCASE("getMovie() Tests") {
		Movie movie1 = {"Back to the Future", COMEDY, 116};
		Movie movie2 = {"Black Panther", ACTION, 134};
		CHECK(getMovie(movie1) == "Back to the Future COMEDY (116 min)");
		CHECK(getMovie(movie2) == "Black Panther ACTION (134 min)");
	}
}

TEST_CASE("TASK C TESTS") {
	SUBCASE("getTimeSlot() Tests") {
		Time start1 = {9, 15};
		Time start2 = {12, 15};
		Movie movie1 = {"Back to the Future", COMEDY, 116};
		Movie movie2 = {"Black Panther", ACTION, 134};
		TimeSlot ts1 = {movie1, start1};
		TimeSlot ts2 = {movie2, start2};
		CHECK(getTimeSlot(ts1) == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
		CHECK(getTimeSlot(ts2) == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
	}
}

TEST_CASE("TASK D TESTS") {
	SUBCASE("scheduleAfter() Tests") {
		Time start1 = {9, 15};
		Time start2 = {12, 15};
		Movie movie1 = {"Back to the Future", COMEDY, 116};
		Movie movie2 = {"Black Panther", ACTION, 134};
		TimeSlot ts3 = {movie1, start1};
		TimeSlot ts4 = scheduleAfter(ts3, movie2);
		TimeSlot ts5 = {movie2, start2};
		TimeSlot ts6 = scheduleAfter(ts5, movie1);
		CHECK(getTimeSlot(ts4) == "Black Panther ACTION (134 min) [starts at 11:11, ends by 13:25]");
		CHECK(getTimeSlot(ts6) == "Back to the Future COMEDY (116 min) [starts at 14:29, ends by 16:25]");
	}
}

TEST_CASE("TASK E TESTS") {
	SUBCASE("timeOverlap() Tests") {
		Time start1 = {9, 15};
		Time start2 = {12, 15};
		Time start3	= {10, 30};
		Movie movie1 = {"Back to the Future", COMEDY, 116};
		Movie movie2 = {"Black Panther", ACTION, 134};
		Movie movie3 = {"JFK", DRAMA, 189};
		TimeSlot ts7 = {movie1, start1};
		TimeSlot ts8 = {movie2, start2};
		TimeSlot ts9 = {movie3, start3};
		CHECK(timeOverlap(ts7,ts8) == false);
		CHECK(timeOverlap(ts8,ts9) == true);
		CHECK(timeOverlap(ts7,ts9) == true);
	}
}
