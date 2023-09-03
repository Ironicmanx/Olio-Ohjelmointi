#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxNum); // create the actual game function

int main()
{
    cout << "RANDMAX = " << RAND_MAX << endl;
    cout << "Time = " << time(0) << endl;
    srand(time(0)); // random number generator

    int satunnainenLuku = rand() % 20;
    int kayttajanNumero = -1;
    int arvauskerrat = 0; // the number of guesses

    while (kayttajanNumero != satunnainenLuku)
    {
        cout << "Arvaa luku 0-19 valilta" << endl;
        cin >> kayttajanNumero;

        cout << "Annoit numeron = " << kayttajanNumero << endl;
        arvauskerrat++;
    }

    cout << "Arvasit oikein " << arvauskerrat << " kerralla" << endl;

    return 0;
}

int game(int maxNum)
{
    for (int i = maxNum; i > 0; i--)
    {
        cout << i << endl;
    }
    return maxNum;
}
