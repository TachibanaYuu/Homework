#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string state = "";
    state = s[s.length()-2];
    state += s[s.length()-1];

    string hour = "";
    hour = s[0];
    hour += s[1];
    int hour_int = stoi(hour);
    string result = "";
    if (state == "PM") {
        if (hour_int < 12){
            hour_int += 12;
        }
    }
    if (state == "AM") {
        result += "0";
        if (hour_int >= 12) {
            hour_int -= 12;
        }
    }
    result += to_string(hour_int);
    for (int i = 2; i <= 7; i++) result += s[i];
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
