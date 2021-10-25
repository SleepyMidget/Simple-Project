#include <iostream>
#include <cstdlib>
#include <ctime>

int main (){
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    std::cout << " Game Tebak Nomor \n\n ";

    do
    {
        std::cout << "Tebak nomor dari angka 1 sampai dengan 100 : ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        std::cout << "Ketinggian!\n\n";
        else if (guess < num)
        std::cout << "Kependekan\n\n";
        else
        std::cout << "\nSelamat jawaban kamu benar hanya dengan " << tries << " cobaan! \n";
    } while (guess !=num);

    return 0;
    
}
