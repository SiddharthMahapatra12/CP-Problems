#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, X, M, S, R;
        cin >> N >> X;
        vector<int> A(N);
        for(int i = 0; i < N; i++) cin >> A[i];
        M = *min_element(A.begin(), A.end());
        S = accumulate(A.begin(), A.end(), 0);
        R = S%X;
        cout << (M > S%X ? S/X : -1) << endl;
    }
    return 0;
}
