#include<iostream>
using namespace std;

void explainPairs(){
    // Example of a simple pair
    pair<int, int> pair1 = {2, 5};
    cout << pair1.first << "," << pair1.second << endl;

    // Example of a pair of pairs
    pair<int, pair<int, int>> pair2 = {1, {2, 3}};
    cout << pair2.first << ",{" << pair2.second.first << "," << pair2.second.second << "}" << endl;

    // Example of an array of pairs
    pair<int, int> arrOfPairs[] = {{1, 2}, {3, 4}, {5, 6}};
    int n = sizeof(arrOfPairs) / sizeof(arrOfPairs[0]);

    for (int i = 0; i < n; i++) {
        cout << "{" << arrOfPairs[i].first << "," << arrOfPairs[i].second << "} ";
    }
    cout << endl;
}

int main(){ 
    explainPairs();
    return 0;
}
