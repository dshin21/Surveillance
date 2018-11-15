//
// Created by Daniel Shin on 2018-11-15.
//

#ifndef SURVEILLANCE_SURVEILLANCE_HPP
#define SURVEILLANCE_SURVEILLANCE_HPP

#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>


using namespace std;

class surveillance {
public:
    void print_all(map<string, vector<string>>);

    void visited_kb_tavern(map<string, vector<string>>);

    void not_visited_kb_home(map<string, vector<string>>);

    void visited_kb_school_not_tavern_home(map<string, vector<string>>);

    void visited_all_remove(map<string, vector<string>> &);

private:
    bool contains(vector<string> locations, string criteria);
};


#endif //SURVEILLANCE_SURVEILLANCE_HPP
