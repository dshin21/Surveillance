//
// Created by Daniel Shin on 2018-11-15.
//

#ifndef SURVEILLANCE_SURVEILLANCE_HPP
#define SURVEILLANCE_SURVEILLANCE_HPP

#include <string>
#include <vector>

using namespace std;

class surveillance {
    vector<string> visited_kb_tavern();

    vector<string> not_visited_kb_home();

    vector<string> visited_kb_school_not_tavern_home();

    vector<string> visited_all_remove();
};


#endif //SURVEILLANCE_SURVEILLANCE_HPP
