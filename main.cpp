#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

    //Index
    void LootRandomizer();

    int i;

int main()
{

    //Menu
    cout << "What to do?" << endl;
    cout << "(enter number for input)" << endl;
    cout << "(1) Loot Randomizer" << endl;
    cout << "(2)" << endl;
    cout << "(3)" << endl;


    int Input1 = 0;
    cin >> Input1;
    switch (Input1)
    {
        case 1:
        //LootRandomizer();
        break;

        case 2:
        cout << "What to 2do?" << endl;
        break;

        case 3:
        cout << "What to 3do?" << endl;
        break;
    }

}






