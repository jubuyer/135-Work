#include <iostream>
#include <cctype>

#include "profile.h"
#include "network.h"

// Constructor, makes an empty network (numUsers = 0)
Network::Network(){
  numUsers = 0;
  //initializes network following to false (nobody following anyone)
  for(int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      following[i][j] = false;
    }
  }
}

// Returns user ID (index in the 'profiles' array) by their username
// (or -1 if username is not found)
int Network::findID (std::string usrn) {
  int id = -1;
  for (int i =0; (i < (sizeof(profiles)/sizeof(profiles[1]))); i++) {
    if (usrn == profiles[i].getUsername()) {
      id = i;
    }
  }
  return id;
}

// Attempts to sign up a new user with specified username and displayname
// return true if the operation was successful, otherwise return false
bool Network::addUser(std::string usrn, std::string dspn) {
  bool out = true;

  if(numUsers >= 20) {
    out = false;
  }

  for(int i = 0; i < 20; i++) {
    if((usrn == profiles[i].getUsername()) || (dspn == profiles[i].getFullName())) {
      out = false;
    }
  }

  if(usrn.empty()) {
    out = false;
  }

  for(int i =0; i < usrn.length(); i++) {
    if (!isalnum(usrn[i])) {
      out = false;
    }
  }

  if(out) {
    Profile prof = {usrn, dspn};
    profiles[numUsers] = prof;
    numUsers++;
  }

  return out;
}

// Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
// return true if success (if both usernames exist), otherwise return false
bool Network::follow(std::string usrn1, std::string usrn2) {
  bool success = false;
  bool usrn1Exists = false;
  bool usrn2Exists = false;
  if((findID(usrn1) != -1)) {
    usrn1Exists = true;
  }
  if((findID(usrn2) != -1)) {
    usrn2Exists = true;
  }

  if(usrn1Exists && usrn2Exists) {
    success = true;
    following[findID(usrn1)][findID(usrn2)] = true;
  }

  return success;
}

// Print Dot file (graphical representation of the network)
void Network::printDot() {
  std::cout << "digraph {\n\t";
  for(int i = 0; i < numUsers; i++) {
    std::cout << "\"@" << profiles[i].getUsername() << "\"\n\t";
  }

  std::cout << "\n\n\t";

  for(int j = 0; j < 20; j++) {
    for(int k = 0; k < 20; k++) {
      if(following[j][k]) {
        std::cout << "\"@" << profiles[j].getUsername() << "\" -> \"@";
        std::cout << profiles[k].getUsername() << "\"\n\t";
      }
    }
  }

  std::cout << "\n}\n";
}
