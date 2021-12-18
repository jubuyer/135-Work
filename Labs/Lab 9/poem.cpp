#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    int flag = 0;

    while(true) {
        string *p;
        p = createAPoemDynamically();
        std::cout << "Poem has been \x1B[32mcreated\033[0m" << '\n';

        delete p;
        std::cout << "Allocated memory has been \x1B[31mdeleted\033[0m" << '\n';
        flag++;
        if (flag == 20) { //so that memory isn't constantly used
            break; //don't need to use ctrl+c to stop code
        }
    }

    return 0;
}
