#include<iostream>
#include<string>
using namespace std;
double geteffectiveness(string yourtype,string opponenttype)
{
    if (yourtype == opponenttype)
    {
        return 0.5;
    }
    if ((yourtype == "fire" && opponenttype == "grass") ||
    (yourtype == "water" && opponenttype == "fire") ||
    (yourtype == "grass" && opponenttype == "water") ||
    (yourtype == "electric" && opponenttype == "water"))
    {
        return 2.0;
    }
    if ((yourtype == "fire" && opponenttype == "water") ||
        (yourtype == "water" && opponenttype == "electric") ||
        (yourtype == "grass" && opponenttype == "grass") ||
        (yourtype == "electric" && opponenttype == "grass") ||
        (yourtype == "fire" && opponenttype == "electric") ||
        (yourtype == "grass" && opponenttype == "electric"))
        {
            return 0.5;
        }
        return 1.0;
    }
    double calculatedamage(string yourtype,string opponenttype,int attack,int defense)
    {
    double effectiveness = geteffectiveness(yourtype,opponenttype);
    float damage = 50 * (attack / defense) * effectiveness;
    return damage;
}
main()
{
    string yourtype;
    string opponenttype;
    int attack,defense;
    cin>>yourtype >> opponenttype >> attack >> defense; 
    int result = calculatedamage(yourtype,opponenttype,attack,defense);
    cout<<result;     
}