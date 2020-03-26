#include <iostream>
#include<vector>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    vector<string> tor = { "Kolke", "Sebald", "Voll"};
    vector<string> abwehr = { "Riedel", "Straith", "Sonnenberg", "Reinthaler", "Rieble", "Ahlschwede", "Neidhart"};
    vector<string> mittelfeld = {"Buelow", "Nartey", "Pepic", "Butzen", "Scherff", "Vollmann", "Omladic", "Granatowski"};
    vector<string> sturm = {"Opoku", "Hanslik", "Verhoek", "Engelhardt", "Breier"};
    vector<string> starttor;
    starttor.push_back(tor[rand()%3]);
    vector<string> startabwehr;

        while(starttor.size() <1)
        {
            starttor.push_back(tor[rand()%3]);
        }

        cout << starttor[0] << endl;



        while(startabwehr.size() < 4)
        {
            startabwehr.push_back(abwehr[rand()%7]);
        }
        for (int i = 0; i < startabwehr.size(); i++)
        {
            cout << startabwehr[i] << endl;
        }


        vector<string> startmittelfeld;
        startmittelfeld.push_back(mittelfeld[rand()%8]);

        while(startmittelfeld.size() < 4)
        {
            startmittelfeld.push_back((mittelfeld[rand()%8]));
        }
        for (int i = 0; i < startmittelfeld.size(); i++)
        {
            cout << startmittelfeld[i] << endl;
        }
        vector<string> startsturm;
        startsturm.push_back(sturm[rand()%5]);
        while(startsturm.size() < 2)
        {
            startsturm.push_back(sturm[rand()%5]);
        }
        for (int i = 0; i < startsturm.size(); i++)
        {
            cout << startsturm[i] << endl;
        }


    return 0;
}

/*string abwehr()
{

}
*/
