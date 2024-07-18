#include <iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char *argv[]) {
    cout << "Pointers" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* address = &size;
    cout << "location of size: " << address << endl;
    printArray(arr, size);
    
    *arr = 10;
    *(arr + 3) = 40;
    printArray(arr, size);

    short shortVariable = 20;
    long longVariable = 30;

    short *myshort = &shortVariable;
    long *mylong = &longVariable;

    cout << "Short: " << myshort << endl;
    cout << "Long: " << mylong << endl;
    cout << "incrementing" << endl;
    myshort++;
    mylong++;
    cout << "Short: " << myshort << endl;
    cout << "Long: " << mylong << endl;

    char a;
    char * b;
    char ** c;
    a = 'T';
    b = &a;
    c = &b;

    cout << **c << endl;

    int * nullpointer = NULL;
    nullpointer = 0;
    nullpointer = nullptr;

    cout << "Null pointer: " << nullpointer << endl;

    return 0;

}

