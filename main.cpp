#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
#include <sstream>

#include "surveillance.hpp"

using namespace std;

int main() {
    vector<string> locations;
    map<string, vector<string>> people;

    ifstream is{"../peoplePlaces.txt"};

    string line;
    string name;
    string info;
    while (getline(is, line)) {
        istringstream iss{line};
        vector<string> temp;
        iss >> name;
        while (iss >> info)
            temp.push_back(info);
        people.insert(pair<string, vector<string>>(name, temp));
    }

    surveillance s{};
    s.visited_kb_tavern(people);

    return 0;
}
