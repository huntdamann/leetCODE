#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
      
      /* ------------- Variables -------------------------- */
        //Unordered Map is tasked with holding a vector of angrams keyed by their common string of characters
        unordered_map<string, vector<string> > check; 
        //Return value for groupAnagrams()
        vector<vector<string> > rv;
        //Temporary variable to hold strs[]
        string tmp;
      /* -------------------------------------------------- */
      
      
      /*------------------ Functionality ------------------ */
      //Simple sorting of each string present in strs[]. After a strs[i] is sorted, it is checked insde of
      //the unordered map, check[i], to see if it is equal to a previous string. This would signify it is 
      //an anagram. Else, we will push string unto check[] and start its own branch
        for (int i = 0; i < strs.size(); ++i) {
            tmp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            if (auto search = check.find(strs[i]); search != check.end()) {
                search->second.push_back(tmp);

            }

            else {
                check[strs[i]].push_back(tmp);
            }
        }

        for (auto i = check.begin(); i != check.end(); ++i) {
            rv.push_back(i->second);
        }
 
        return rv;
    }
};
