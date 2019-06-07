#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

    //Index
    void LootRandomizer();
    void RollDice();
    void Choice();
    void Restart();
    void Close();
    void Links();

int main()
{

    //Menu
    cout << "What to do?" << endl;
    cout << "(enter number for input)" << endl;
    cout << "(1) Loot Randomizer" << endl;
    cout << "(2) Roll Dice" << endl;
    cout << "(3) View Document Links" << endl;


    int Input1 = 0;
    cin >> Input1;

    if (Input1 > 3)
    {
        Restart();
    }

    switch (Input1)
    {
        case 1:
        LootRandomizer();
        break;

        case 2:
        RollDice();
        break;

        case 3:
        Links();
        break;
    }

}

void LootRandomizer()
    {
        //Note for section
        //LootValue is used for how many times the randomizer occurs
        //Decider should add a random string from Rarity with Type to output the Answer

        //Test
        //cout << Rarity[1] + Type[1] << endl;


        //random number generator


        string Rarity[] = {"Common ", "Uncommon ", "Rare ", "Legendary ", "Mystic "};
        string Type[] = {"Weapon", "Armor", "Item"};



        cout << " " << endl;
        cout << "Input loot amount" << endl;

        //Input Repeat amount
        int LootValue;
        cin >> LootValue;

        //randomizer, holds p1 as Rarity and p2 as Item Type
        srand(time(0));
        int Percentage = rand() % 100 + 1;
        string p1;
        string p2;

        //common (60% - 100%) (40%)
        if (Percentage > 60)
        {
        p1 = Rarity[0];
        }

        //Uncommon (20% - 59%) (39%)
        if (Percentage > 61)
        {
        p1 = Rarity[1];
        }

        //Rare (3% - 19%) (16%)
        if (Percentage > 84)
        {
        p1 = Rarity[2];
        }

        //Legendary (2% - 0%) (2%)
        if (Percentage > 98)
        {
        p1 = Rarity[3];
        }

        cout << p1 << endl;

        Choice();

    }

void RollDice()
{
    cout << " " << endl;
    cout << "Enter how many sides" << endl;
    int DiceSides;
    cin >> DiceSides;

    //randomizer, holds p1 as Rarity and p2 as Item Type
    srand(time(0));
    int Roll = rand() % DiceSides + 1;

    cout << " " << endl;
    cout << "You rolled a " << endl;
    cout << Roll << endl;
    cout << " " << endl;

    Choice();

}

void Choice()
{

    cout << "Restart?" << endl;
    cout << "(1) Yes" << endl;
    cout << "(2) No" << endl;

    int Input2 = 0;
    cin >> Input2;

    if (Input2 > 3)
    {
        Restart();
    }

    switch (Input2)
    {
        case 1:
        Restart();
        break;

        case 2:
        Close();
        break;

    }

}

void Links()
{
    cout << "https://docs.google.com/spreadsheets/d/18s87BkDlKK7UIxPM2VUmC1e_A7D49zWFOPXA9vhOzJM/edit?usp=sharing" << endl;
    cout << " " << endl;
    cout << " " << endl;

    Choice();

}

void Restart()
{

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
    main();

}

void Close()
{
    cout << " " << endl;
    cout << "Closing" << endl;
}
