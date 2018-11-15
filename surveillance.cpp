//
// Created by Daniel Shin on 2018-11-15.
//


#include "surveillance.hpp"

void surveillance::visited_kb_tavern(map<string, vector<string>> people) {
    for (auto const &x : people) {
        vector<string> temp = x.second;
        if (contains(temp, "Krusty-Burger") && contains(temp, "Tavern"))
            cout << x.first << endl;
    }
}

vector<string> surveillance::not_visited_kb_home(map<string, vector<string>> people) {
    return vector<string>();
}

vector<string> surveillance::visited_kb_school_not_tavern_home(map<string, vector<string>> people) {
    return vector<string>();
}

vector<string> surveillance::visited_all_remove(map<string, vector<string>> people) {
    return vector<string>();
}

bool surveillance::contains(vector<string> locations, string criteria) {
    return (find(locations.begin(), locations.end(), criteria) != locations.end());
}

