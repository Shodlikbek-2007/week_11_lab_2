#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> unique;
    int a;
    for (int i=0; i<a; i++) {
        cin>>unique[i];
    }
    int count=0;
    for (int i=0; i<a; i++) {
        if (unique[i] != unique[i+1]) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}