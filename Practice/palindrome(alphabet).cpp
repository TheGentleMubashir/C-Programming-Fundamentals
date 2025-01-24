#include <iostream>

using namespace std;

void reverse_array(char arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

int main() {
    char characters[] = {'a', 'b', 'c', 'd', 'e'};
    int size = sizeof(characters) / sizeof(characters[0]);

    reverse_array(characters, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    return 0;
}