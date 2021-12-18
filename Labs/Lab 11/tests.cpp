#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "profile.h"
#include "network.h"
#include "doctest.h"

TEST_CASE("TASK A TESTS") {
  Profile me = {"jubuyer", "jubayer-ahmed"};
  Profile alt = {"andres", "not-real-person"};
  Profile test;
  CHECK(me.getFullName() == "jubayer-ahmed (@jubuyer)");
  CHECK(me.getUsername() == "jubuyer");
  CHECK(alt.getFullName() == "not-real-person (@andres)");
  CHECK(alt.getUsername() == "andres");
  me.setDisplayName("jubayer");
  CHECK(me.getFullName() == "jubayer (@jubuyer)");
  CHECK(test.getUsername() == "");
}

TEST_CASE("TASK B TESTS") {
  Network ntwk;
	for (int i = 0; i < 25; i++)
		CHECK(ntwk.addUser("jubayer" + std::to_string(i), "ahmed") == (i < 20));
    CHECK(ntwk.addUser("i l0ve code", "lov3r") == false);
    CHECK(ntwk.addUser("i h@te coding", "h@t3r") == false);
}

TEST_CASE("TASK C TESTS") {
  Network nw2;
  // add three users
  nw2.addUser("mario", "Mario");
  nw2.addUser("luigi", "Luigi");
  nw2.addUser("yoshi", "Yoshi");

  // make them follow each other
  CHECK(nw2.follow("mario", "yoshi"));
  CHECK(nw2.follow("luigi", "mario"));
  CHECK(!nw2.follow("wario", "yoshi"));
  CHECK(!nw2.follow("yoshi", "wario"));
  CHECK(!nw2.follow("bigman", "luigi"));

  SUBCASE("weird tests") {
    CHECK(nw2.follow("mario", "luigi"));
    CHECK(nw2.follow("mario", "luigi"));
    CHECK(!nw2.follow("yoshi", "wario"));
    CHECK(!nw2.follow("bigman", "luigi"));
  }

  // add a user who does not follow others
  nw2.addUser("wario", "Wario");
  CHECK(nw2.follow("yoshi", "wario"));
}
