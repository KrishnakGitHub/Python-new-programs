#include <bits/stdc++.h>
using namespace std;

# define vi vector<int>

int reversort(vi &L){
    int cost = 0;
    
    for(int i = 0; i < L.size()-1; i++){
        int m = *min_element(L.begin() + i, L.end());
        
        auto x = find(L.begin(), L.end(), m);
        
        reverse(L.begin()+i, x+1);
        
        cost += distance(L.begin(), x) - i + 1;
    }
    return cost;
}

int main() {
    
    // Input test number of test cases
    int T;
    cin >> T;
    
    // 
    
    for(int c = 0; c < T; c++){
        int N;
        cin >> N;
        
        vi L;
        
        for(int i = 0; i < N; i++){
            int num;
            cin >> num;
            L.push_back(num);
        }
        
        cout << "case #" << c << ":" << reversort(L) << endl;
    }
    

}
