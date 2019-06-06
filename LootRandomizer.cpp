#includes main.cpp

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

    }
