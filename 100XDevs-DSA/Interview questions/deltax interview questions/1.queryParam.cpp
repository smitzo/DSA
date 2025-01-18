/*Get me that query parameter
Given a valid url and the names of one or more query parameters as key, determine the value for those keys
in the URL without using regex or built-in url parsers.
Note: Query parameters are a defined set of parameters attached to the end of a url. To append query
params to the end of a URL, a "?" Is added followed immediately by a query parameter. To add multiple
parameters, an '&' is added in between each.
INPUT
The first line of input contains a valid url. The next line contains a positive integer N. The next N lines contain
different keys (name of a query parameter)
OUTPUT
In separate lines, print the value of the corresponding query parameter if it exists in the URL. Print-1
otherwise.
CONSTRAINTS
1 <= N <= 1000
Sample Input
http://www.deltax.com/career?test_param=google&param_1-india
2
test_param

*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Function to parse the query string and build a map of parameters
unordered_map<string, string> parseQueryParameters(const string& url) {
    unordered_map<string, string> params;
    
    // Find the position of the '?' which indicates the start of query parameters
    int queryStart = url.find('?');
    if (queryStart == -1) { // No query parameters found
        return params;
    }
    
    string queryString = url.substr(queryStart + 1);
    int start = 0;
    int end = queryString.find('&');
    
    while (end != -1) {
        string param = queryString.substr(start, end - start);
        int equalPos = param.find('=');
        
        if (equalPos != -1) {
            string key = param.substr(0, equalPos);
            string value = param.substr(equalPos + 1);
            params[key] = value;
        }
        
        start = end + 1;
        end = queryString.find('&', start);
    }
    
    string lastParam = queryString.substr(start);
    int equalPos = lastParam.find('=');
    
    if (equalPos != -1) {
        string key = lastParam.substr(0, equalPos);
        string value = lastParam.substr(equalPos + 1);
        params[key] = value;
    }
    
    return params;
}

int main() {
    string url;
    getline(cin, url);
    
    int N;
    cin >> N;
    cin.ignore(); // To ignore the newline character after the integer input
    
    unordered_map<string, string> queryParams = parseQueryParameters(url);
    
    for (int i = 0; i < N; ++i) {
        string key;
        getline(cin, key);
        
        if (queryParams.find(key) != queryParams.end()) {
            cout << queryParams[key] << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    
    return 0;
}
