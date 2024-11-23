// /**
//  * the changes i made here was regarding the use of unsetCountry which was leading to 
//  * country data for processed coutnries being lose entirely which was causing the incorrect count values
//  * SO here i used a set 'processedCountries' to keep track of the countries that have already been processed
//  * in noCenturyCountryCount, at the end of the loop the country name is taken from the Score object
//  * and added to the set, and at the start of the loop, a check is being run which checks whether or not the 
//  * country is present in the set, if present then it simply ignores the comtry by contnuing the loop execution,
//  * if not present then the country is carried forward for processing.
//  */

// #include <iostream>
// #include <string>
// #include <map>
// #include <vector>
// #include <fstream>
// #include <cstdlib>
// #include <set>
// using namespace std;

// class Score {
// private:
//   std::string country;
//   int score;
// public:
//   Score(std::string c, int s) {
//         country = c;
//         score = s;
//         std::cout << c << "," << s << std::endl;
//     }

//   std::string getCountry() {return country;}
//   void unsetCountry() {country = "";}
//   int getScore() {return score;}
// };

// /**
//  * Read `country: score` pairs from infile and return a list of pairs
//  * Stop when `infile` reaches EOF
//  */
// void readScores(std::istream &infile, std::vector<Score> &scores) {
//   while(infile) {
//     std::string country;
//     infile >> std::ws;
//     std::getline(infile, country, ':');
//     int runs;
//     infile >> runs;
//     if (country != "") {
//       Score score(country, runs);
//       scores.push_back(score);
//     }
//   }
// }


// int noCenturyCountryCount(std::vector<Score> &scores) {
//     int noCenturyCount = 0;
//     set<string> processedCountries; // i used a set here to keep track of countries that were alreadu processed

//     for (int i = 0; i < scores.size(); i++) {
//         const string &country = scores[i].getCountry();

//         if (processedCountries.count(country)>0) {
//             continue;
//         }
//         int centuries= 0;
//         for (int j = i; j<scores.size(); j++) {
//             if (scores[j].getCountry()==country) {
//                 if (scores[j].getScore()>=100) {
//                     centuries++;
//                 }
//             }
//         }
//         if (centuries==0) {
//             noCenturyCount++;
//         }

//         processedCountries.insert(country);
//     }
//     return noCenturyCount;
// }

// int main (void) {
//   std::vector<Score> scores;
//   readScores(std::cin, scores);
//   int noCenturyCount = noCenturyCountryCount(scores);
//   std::cout << noCenturyCount << std::endl;
// }
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;

class Score {
private:
    std::string country;
    int score;
public:
    Score(std::string c, int s) : country(c), score(s) {
        std::cout << c << "," << s << std::endl;
    }

    std::string getCountry() const { return country; }
    int getScore() const { return score; }
};

/**
 * Read `country: score` pairs from infile and return a list of pairs
 * Stop when `infile` reaches EOF
 */
void readScores(std::istream &infile, std::vector<Score> &scores) {
    while (infile) {
        std::string country;
        infile >> std::ws;
        std::getline(infile, country, ':');
        int runs;
        infile >> runs;
        if (!country.empty()) {
            scores.emplace_back(country, runs);
        }
    }
}

int noCenturyCountryCount(const std::vector<Score> &scores) {
    unordered_map<std::string, int> countryCenturyCount;

    for (const auto &score : scores) {
        const std::string &country = score.getCountry();
        if (score.getScore()>=100) {
            countryCenturyCount[country]++;
        }
    }

    int noCenturyCount = 0;
    for (const auto &entry : countryCenturyCount) {
        if (entry.second==0) {
            noCenturyCount++;
        }
    }

    return noCenturyCount;
}

int main() {
    std::vector<Score> scores;
    readScores(std::cin, scores);
    int noCenturyCount = noCenturyCountryCount(scores);
    std::cout << noCenturyCount << std::endl;
}
