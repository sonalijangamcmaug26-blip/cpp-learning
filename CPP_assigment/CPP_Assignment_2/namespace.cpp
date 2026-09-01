#include <iostream>
using namespace std;

namespace Physics
{
    double clamp(double val, double min, double max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}

namespace GameMath
{
    int clamp(int val, int min, int max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}

int main()
{
    double velocity = Physics::clamp(120.5, 0.0, 100.0);

    int health = GameMath::clamp(150, 0, 100);

    cout << "Physics clamp: "
         << velocity << endl;

    cout << "GameMath clamp: "
         << health << endl;

    cout << "Physics lerp: "
         << Physics::lerp(0, 100, 0.5)
         << endl;

    cout << "GameMath lerp: "
         << GameMath::lerp(0, 100, 0.25)
         << endl;

    // Limited namespace scope
    {
        using namespace Physics;

        cout << "Limited scope clamp: "
             << clamp(150.0, 0.0, 100.0)
             << endl;
    }

    return 0;
}