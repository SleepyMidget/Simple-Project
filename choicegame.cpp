#include <iostream>
using namespace std;

int main() {
string jwb;
while (jwb != "y" && jwb != "n")
{
    cout << "\n\n CHOICE GAME \n\n";

    cout << "Suatu hari kamu sedang berjalan, lalu di depanmu ada batu. Melompat? (y/n) :";
    cin >> jwb;
}
    if (jwb == "y")
    {
        cout << "Selamat kamu berhasil menghindari batu tersebut";
    }
    else if (jwb == "n")
    {
        cout << "Kamu tersandung lalu meninggal :( ";
    }
    cout << "\n\n GAME ENDS \n\n";
    return 0;
}
