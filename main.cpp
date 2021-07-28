#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#ifdef WIN32 // if the OS is windows then
#include <windows.h>
#endif
#if defined(linux) || defined(unix) // if the OS is linux or unix then 
#include <unistd.h>
#endif

using namespace std;


int main() {
    const char charset[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int length;

    cout << "Insert lenght of password: ";
    cin >> length;

    char password[length];

    srand(time(NULL));

    cout << "\nGenerating password";

    for (int j = 0; j < 3; j++) {
        #ifdef WIN32 // if the OS is windows then
            cout << ".";
            Sleep(1000);
        #endif  
        #if defined(linux) || defined(unix)// if the OS is linux or unix then 
            cout << ".";
            sleep(1);
        #endif
    }

    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % 70];
    }

    cout << "\nGenerated password: " << password << endl;

    system("pause");
}
