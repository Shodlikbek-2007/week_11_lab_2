#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "How many elements: ";
    cin >> size;
    vector<int> numbers(size);

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int max = numbers[0], idx = 0;
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            idx = i;
        }
    }

    cout << "Index is: " << idx << endl;
    return 0;
}