#include <iostream>

using namespace std;

int main(){
    int n , x;
    int num[1000] = {};
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x ;
        num[i] = x;

    }

    int max = num[0];
    for (int i = 1; i < n; i++){
        if (num[i] > max) {
            max = num[i];
        }
    }

    int min = num[0];
    for (int i = 1; i < n; i++){
        if (num[i] < min) {
            min = num[i];
        }
    }  

    cout << min << endl;
    cout << max << endl;

}
