#include <iostream>

#include "profile.h"

// Profile constructor for a user (initializing
// private variables username=usrn, displayname=dspn)
Profile::Profile(std::string usrn, std::string dspn) {
  displayname = dspn;
  username = usrn;
}
// Default Profile constructor (username="", displayname="")
Profile::Profile() {
  displayname = "";
  username = "";
}
// Return username
std::string Profile::getUsername() {
  return username;
}
// Return name in the format: "displayname (@username)"
std::string Profile::getFullName() {
  std::string output = displayname;
  output += " (@";
  output += username;
  output += ")";

  return output;
}
// Change display name
void Profile::setDisplayName(std::string dspn) {
  displayname = dspn;
}
