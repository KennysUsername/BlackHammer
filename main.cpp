#include <iostream>

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
        LootRandomizer();
        break;

        case 2:
        cout << "What to 2do?" << endl;
        break;

        case 3:
        cout << "What to 3do?" << endl;
        break;
    }

}

    void LootRandomizer()
    {
        //Note for section
        //LootValue is used for how many times the randomizer occurs
        //Decider should add a random string from Rarity with Type to output the Answer

        string Rarity[] = {"Common ", "Uncommon ", "Rare ", "Legendary ", "Mystic "};
        string Type[] = {"Weapon", "Armor", "Item"};

        cout << " " << endl;
        cout << "Input loot amount" << endl;

        //Input Repeat amount
        int LootValue;
        cin >> LootValue

        int i = 0;
        while (i < LootValue + 1)
        {

        cout << Rarity[rand() % Rarity.length()] + Type[Rand() % Type.length()]
        i++

        }

    }




