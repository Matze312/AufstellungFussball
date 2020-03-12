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
    int a;
    int m;
    int s;
    int summe;
    cout << "Geben Sie Ihre Wunschformation ein !" << endl;
    cout << "Bedenken Sie aber das maximal 1 Torwart+ 10 weitere Feldspieler moeglich sind" << endl;
    cout << "Geben Sie die Anzahl Ihrer Verteidiger ein" << endl;
    cin >> a;
    cout << "Geben Sie die Anzahl Ihrer Mittelfeldspieler ein" << endl;
    cin >> m;
    cout <<"Geben Sie Zuletzt die Anzahl Ihrer Angreifer ein" << endl;
    cin >> s;

    summe=a+m+s;
    if(summe==10)
    {
        while(starttor.size() <1)
        {
            starttor.push_back(tor[rand()%3]);
        }

        cout << starttor[0] << endl;



        while(startabwehr.size() < a)
        {
            startabwehr.push_back(abwehr[rand()%7]);
        }
        for (int i = 0; i < startabwehr.size(); i++)
        {
            cout << startabwehr[i] << endl;
        }


        vector<string> startmittelfeld;
        startmittelfeld.push_back(mittelfeld[rand()%8]);

        while(startmittelfeld.size() < m)
        {
            startmittelfeld.push_back((mittelfeld[rand()%8]));
        }
        for (int i = 0; i < startmittelfeld.size(); i++)
        {
            cout << startmittelfeld[i] << endl;
        }
        vector<string> startsturm;
        startsturm.push_back(sturm[rand()%5]);
        while(startsturm.size() < s)
        {
            startsturm.push_back(sturm[rand()%5]);
        }
        for (int i = 0; i < startsturm.size(); i++)
        {
            cout << startsturm[i] << endl;
        }

    }else
    {
        cout << "Bitte starten Sie ihr Programm neu" << endl;
    }


    return 0;
}

/*string abwehr()
{

}
*/
