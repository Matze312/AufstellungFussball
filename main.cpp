#include <iostream>

using namespace std;

int main()
{
    string tor[3] = { "Kolke", "Sebald", "Voll"};

    for (unsigned int i = 0; i < tor->size(); i++) {

        cout <<tor[i] << endl;
    }

    string abwehr[7] = { "Riedel", "Straith", "Sonnenberg", "Reinthaler", "Rieble", "Ahlschwede", "Neidhart"};

    for(unsigned int a = 0; a < abwehr->size(); a++)
    {
        cout <<abwehr[a] << endl;
    }
    return 0;
}
