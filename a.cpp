#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, count = 0;
        cin >> N;
        
        for (int i = 0; i < N; ++i) {
            int difficulty;
            cin >> difficulty;
            if (difficulty >= 1000) {
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}