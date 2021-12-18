#include <iostream>
#include <string>

#include "time.h"
#include "movie.h"

std::string getMovie(Movie mov) {
    std::string g;
    std::string output = "";
    switch (mov.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }

    output += mov.title;
    output += " ";
    output += g;
    output += " (";
    output += std::to_string(mov.duration);
    output += " min)";

    return output;
}

// Testing purposes
// int main(int argc, char const *argv[]) {
//   Movie mov = {"Back to the Future", COMEDY, 116};
//   std::cout << getMovie(mov) << '\n';
//   return 0;
// }
