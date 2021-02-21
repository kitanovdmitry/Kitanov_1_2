/* Автор: Дмитрий Китанов
Группа: СБС-001-О-01
Задание№: 1: 2)
Цель: определить дальность полёта тела, брошенного под углом к горизонту с начальной скоростью по формуле
*/

#include <iostream>
#include <cmath>

#define PI 3.1415926535

using namespace std;
int main()
{
    float angle = 0.0,
          starting_speed = 0.0;
    bool typeFail;

    do
    {   cout << "Enter correct float value: 1) angle in degrees\n";
        cin >> angle;

        typeFail = cin.fail();
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    } while ((typeFail == true) || (angle < 0.0) || (angle > 180.0));
    cout << "Angle = " << angle << "\n";

    do
    {
        cout << "Enter correct float value: 2) starting speed in m/s\n";
        cin >> starting_speed;

        typeFail = cin.fail();
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    } while ((typeFail == true) || (starting_speed < 0.0));
    cout << "Starting speed = " << starting_speed << "\n";

    angle = (angle * PI) / 180.0; //ïåðåâîäèì ãðàäóñû â ðàäèàíû, ò.ê. ôóíêöèÿ sin ïðèíèìàåò çíà÷åíèå óãëà â ðàäèàíàõ//
    const float g = 9.8;
    const float range_of_flight = abs((starting_speed * starting_speed * sin(2*angle)) / g);

    cout << "Range of the thrown body flight = " << range_of_flight << "\n";
    return 0;

}

