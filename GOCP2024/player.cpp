#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct player {
    string name;
    int score;
    int match;
    string date;
};

bool comparePlayers(const player &a, const player &b) {
    if (a.score != b.score)
        return a.score > b.score;
    if (a.match != b.match)
        return a.match > b.match; 
    if (a.date != b.date)
        return a.date < b.date;   
    return a.name < b.name;      
}

int main() {
    int t;
    cin >> t;
    vector<player> p;

    for (int i = 0; i < t; ++i) {
        string playerName, joinDate;
        int pScore, pMatch;

        cin >> playerName >> pScore >> pMatch >> joinDate;

        p.push_back({playerName, pScore, pMatch, joinDate});
    }
    
    // Sorting the player vector based on custom comparison function
    sort(p.begin(), p.end(), comparePlayers);

    // Printing the sorted players
    for (const auto& pl : p) {
        cout << pl.name << " " << pl.score << " " << pl.match << " " << pl.date << endl;
    }

    return 0;
}
