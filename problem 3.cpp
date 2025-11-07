#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> numbers;
    int a;
    while (true) {
        cin>>a;
        if (a<0) {
            break;
        }
        numbers.push_back(a);
    }

    int odd=0;
    int even=0;

    for (int i=0; i<numbers.size(); i++) {
        if (numbers[i]%2==0) {
            even++;
        }else {
            odd++;
        }
    }

        cout<<"The number of odd elements: "<<odd<<endl;
        cout<<"The number of even elements: "<<even<<endl;
}