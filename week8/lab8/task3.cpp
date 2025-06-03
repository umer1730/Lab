    #include<iostream>
    using namespace std;
    main() 
    {
        string seed;
        int water,fert,temp;
        cout<<"Enter seed symbol:";
        cin>>seed;
        cout<<"Enter water level:";
        cin>>water;
        cout<<"Enter fertilizer level:";
        cin>>fert;
        cout<<"Enter temperature:";
        cin>>temp;
        cout<<"Plant:";
        for (int i = 0; i < water; i++) 
        {
            for (int j = 0;j < water;j++)
        {
            cout<<"-";
        }
        if (temp >= 20 && temp <= 30)
        {
            for (int k = 0; k < fert; k++) 
            {
                cout<<seed;
            }
        } 
    }
    if(temp<=20 || temp>=30)
    {
        cout<<seed;
    }
        return 0;
    }