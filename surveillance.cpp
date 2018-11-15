//
// Created by Daniel Shin on 2018-11-15.
//


#include "surveillance.hpp"

void surveillance::print_all(map<string, vector<string>> people) {
    cout << endl << "Everybody in the city" << endl;
    for (auto const &x : people) {
        cout << x.first << endl;
    }
}

void surveillance::visited_kb_tavern(map<string, vector<string>> people) {
    cout << endl << "Visited both Krusty-Burger and Tavern" << endl;
    for (auto const &x : people) {
        vector<string> temp = x.second;
        if (contains(temp, "Krusty-Burger") && contains(temp, "Tavern"))
            cout << x.first << endl;
    }
}

void surveillance::not_visited_kb_home(map<string, vector<string>> people) {
    cout << endl << "Did NOT visit Krusty-Burger and Home" << endl;
    for (auto const &x : people) {
        vector<string> temp = x.second;
        if (!contains(temp, "Krusty-Burger") && !contains(temp, "Home"))
            cout << x.first << endl;
    }
}

void surveillance::visited_kb_school_not_tavern_home(map<string, vector<string>> people) {
    cout << endl << "Visited Krusty-Burger and School but did NOT visit Tavern and Home" << endl;
    for (auto const &x : people) {
        vector<string> temp = x.second;
        if (contains(temp, "Krusty-Burger") && contains(temp, "School") && !contains(temp, "Tavern") &&
            !contains(temp, "Home"))
            cout << x.first << endl;
    }
}

void surveillance::visited_all_remove(map<string, vector<string>> &people) {
    cout << endl << "Removing visited all locations" << endl;
    vector<string> result;
    for (auto const &x : people) {
        vector<string> temp = x.second;
        if (!(contains(temp, "Krusty-Burger") &&
             contains(temp, "School") &&
             contains(temp, "Tavern") &&
             contains(temp, "Home"))) {
//            people.erase(x.first);
            result.push_back(x.first);
        }
    }
    for (auto const &x : result)
        cout << x << endl;

}

bool surveillance::contains(vector<string> locations, string criteria) {
    return (find(locations.begin(), locations.end(), criteria) != locations.end());
}