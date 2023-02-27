#include <map>
class Solution {
public:
    string intToRoman(int num) {
        string rv = ""; //Return Value

        //Base case for Recursive function
        if (num == 0) {
            return rv;
        }

        //Check if Value is less than 5
        if (num < 5) {
            if (num == 4) {
                rv = rv + "IV";
                num -= 4;
                rv += intToRoman(num);
            }
            else {
            rv = rv + Roman[1];
            num--;
            rv += intToRoman(num);
            }
        }

        //Check if Value is greater than or equal to 5 but less than 10
        if (num >= 5 && num < 10) {
             if (num == 9) {
                rv = rv + "IX";
                num -= 9;
                rv += intToRoman(num);
            }
            else {
            rv = rv + Roman[5];
            num -= 5;
            rv += intToRoman(num);
            }    
        }

        //Check if Value is greater than or equal to 10 but less than 50
        if (num >= 10 && num < 50) {
            if (num >= 40 && num <= 49) {
                rv = rv + "XL";
                num -= 40;
                rv += intToRoman(num);
            }
            else {
            rv = rv + Roman[10];
            num -= 10;
            rv += intToRoman(num);
            }
        }

        //Check if Value is greater than or equal to 50 but less than 100
        if (num >= 50 && num < 100) {
              if (num >= 90 && num <= 99) {
                rv = rv + "XC";
                num -= 90;
                rv += intToRoman(num);
            }
            else {
            rv = rv + Roman[50];
            num -= 50;
            rv += intToRoman(num);
            }
        }

        if (num >= 100 && num < 500) {
              if (num >= 400 && num <= 499) {
                rv = rv + "CD";
                num -= 400;
                rv += intToRoman(num);
              }
              else {
            rv = rv + Roman[100];
            num -= 100;
            rv += intToRoman(num);
              } 
        }

        if (num >= 500 && num < 1000) {
              if (num >= 900 && num <= 999) {
                rv = rv + "CM";
                num -= 900;
                rv += intToRoman(num);
              }
              else {
                rv = rv + Roman[500];
                num -= 500;
                rv += intToRoman(num);
              }
        }

        if (num >= 1000) {
            rv = rv + Roman[1000];
            num -= 1000;
            rv += intToRoman(num);
        }

        return rv;
        
    }

private:
     map<int, char> Roman { {1 ,'I'}, {5 ,'V'}, {10 ,'X'}, {50,'L'}, {100,'C'}, {500, 'D'}, {1000, 'M'}};

};

