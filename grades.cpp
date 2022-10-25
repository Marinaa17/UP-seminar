#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double input = 0;
    std::cin >> input;

    int gradeAsInt = (int)round( input );

    if( input < 3 )
    {
        gradeAsInt = (int)input;
    }
    else
    {
        if( input > 6 )
        {
            cout << "Nevalidna ocenka";
            return 0;
        }
    }

    switch( gradeAsInt )
    {
        case 2:
            cout << "Slab";
            break;

        case 3:
            cout << "Sreden";
            break;

        case 4:
            cout << "Dobur";
            break;

        case 5:
            cout << "Mnogo dobur";
            break;

        case 6:
            cout << "Otlichen";
            break;

        default:
            cout << "Nevalidna ocenka";
            break;
    }

    return EXIT_SUCCESS;
}
