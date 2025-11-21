#include "kuzelky.h"
#include <iostream>
#include <vector>

void vypisZlabky() {
    for (int i = 0; i < 20; ++i) {
        std::cout << "||         ||" << "\n";
    }
}

void vypisDrahu(int pozice) {
    std::vector<std::string> draha;
    switch(pozice) {
        case 0: // startovací hodnota vectoru draha a jeho hodnota pro žlábek na levé půlce dráhy
        case 14: // hodnota vectoru draha pro žlábek na pravé půlce strany
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "|| 8 8 8 8 ||",
                "||  8 8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            break;
        // pozice na levé půlce dráhy
        case 1: // srazí jednu kuželku
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "||   8 8 8 ||",
                "||  8 8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            break;

        case 2:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "||   8 8 8 ||",
                "||    8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            break;

        case 3:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "||     8 8 ||",
                "||    8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            break;

        case 4:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "||     8 8 ||",
                "||    8 8  ||",
                "||     8   ||",
                "||    8    ||",
            };
            break;

        case 5:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "||       8 ||",
                "||      8  ||",
                "||     8   ||",
                "||    8    ||",
            };
            break;

        case 6:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "||       8 ||",
                "||         ||",
                "||         ||",
                "||         ||",
            };
            break;

        case 7:
            draha = { // strike, případně použít pro spare - přidat další příkaz case n: (jako u case 0:)
                "*************",
                "||~~~~~~~~~||",
                "||         ||",
                "||         ||",
                "||         ||",
                "||         ||",
            };
            break;
        // pozice na pravé půlce dráhy
        case 8:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "|| 8       ||",
                "||         ||",
                "||         ||",
                "||         ||",
            };
            break;
        
        case 9:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "|| 8       ||",
                "||  8      ||",
                "||   8     ||",
                "||    8    ||",
            };
            break;

        case 10:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "|| 8 8     ||",
                "||  8 8    ||",
                "||   8     ||",
                "||    8    ||",
            };
            break;

        case 11:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "|| 8 8     ||",
                "||  8 8    ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            break;

        case 12:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "|| 8 8 8   ||",
                "||  8 8    ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            break;

        case 13:
            draha = {
                "*************",
                "||~~~~~~~~~||",
                "|| 8 8 8   ||",
                "||  8 8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            break;
            
    }
    // vypíše vector draha
    for (const auto& line : draha) {
        std::cout << line << "\n";
    }

    vypisZlabky();
}


void vypisDrahu2(int pozice2, int pozice){
    std::vector<std::string> draha2;
    switch(pozice2) {
        case 0:
        case 14:
            draha2 = vypisDrahu - vypisZlabky;
            break;
        case 1:
            if (pozice == 0 || pozice == 14) {
                draha2 = vypisDrahu(1);
            }

            else if (pozice == 8) {
                draha2 = vypisDrahu(7); // spare
            }

            else if (pozice == 9) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||         ||",
                "||  8      ||",
                "||   8     ||",
                "||    8    ||",
            };
            }

            else if (pozice == 10) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||   8     ||",
                "||  8 8    ||",
                "||   8     ||",
                "||    8    ||",
            };
            }

            else if (pozice == 11) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||   8     ||",
                "||  8 8    ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            }


            else if (pozice == 12) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||   8 8   ||",
                "||  8 8    ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            }   

            else if (pozice == 13) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||   8 8   ||",
                "||  8 8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            }

            else {
                draha2 = vypisDrahu(pozice);
            }
            
            break;

        case 2:
            if (pozice == 0 || pozice == 1 || pozice == 14) {
                draha2 = vypisDrahu(2);
            }

            else if (pozice == 8) {
                draha2 = vypisDrahu(7); // spare
            }

            else if (pozice == 9) {
                draha2 = vypisDrahu2(1, pozice);
            }

            else if (pozice == 10) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||         ||",
                "||  8 8    ||",
                "||   8     ||",
                "||    8    ||",
            };
            }

            else if (pozice == 11) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||         ||",
                "||  8 8    ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            }   

            else if (pozice == 12) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||     8   ||",
                "||  8 8    ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            }

            else if (pozice == 13) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||     8   ||",
                "||  8 8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            }

            else {
                draha2 = vypisDrahu(pozice);
            }
            
            break;

        case 3:
            if (pozice == 0 || pozice == 1 || pozice == 2 || pozice == 14) {
                draha2 = vypisDrahu(3);
            }

            else if (pozice == 10) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||         ||",
                    "||    8    ||",
                    "||   8     ||",
                    "||    8    ||",
                };
            }

            else if (pozice == 11) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||         ||",
                    "||    8    ||",
                    "||   8 8   ||",
                    "||    8    ||",
                };
            }   

            else if (pozice == 12) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||     8   ||",
                    "||    8    ||",
                    "||   8 8   ||",
                    "||    8    ||",
                };
            }

            else if (pozice == 13) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||     8   ||",
                "||    8 8  ||",
                "||   8 8   ||",
                "||    8    ||",
            };
            }
            else {
                draha2 = vypisDrahu2(2, pozice);
            }
            
            break;

        case 4:
            if (pozice == 0 || pozice == 1 || pozice == 2 || pozice == 3 || pozice == 14) {
                draha2 = vypisDrahu(4);
            }

            else if (pozice == 9) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||         ||",
                "||         ||",
                "||         ||",
                "||    8    ||",
            };
            }

            else if (pozice == 10) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||         ||",
                    "||    8    ||",
                    "||         ||",
                    "||    8    ||",
                };
            }

            else if (pozice == 11) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||         ||",
                    "||    8    ||",
                    "||     8   ||",
                    "||    8    ||",
                };
            }

            else if (pozice == 12) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||     8   ||",
                    "||    8    ||",
                    "||     8   ||",
                    "||    8    ||",
                };
            }

            else if (pozice == 13) {
                draha2 = {
                "*************",
                "||~~~~~~~~~||",
                "||     8   ||",
                "||    8 8  ||",
                "||     8   ||",
                "||    8    ||",
            };
            }
            else {
                draha2 = vypisDrahu2(3, pozice);
            }
            break;

        case 5:
            
            if (pozice == 9 || pozice == 10) {
                draha2 = vypisDrahu2(4, 9);
            }

            else if (pozice == 11 || pozice == 12) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||         ||",
                    "||         ||",
                    "||     8   ||",
                    "||    8    ||",
                };
            }

            else if (pozice == 13) {
                draha2 = {
                    "*************",
                    "||~~~~~~~~~||",
                    "||         ||",
                    "||      8  ||",
                    "||     8   ||",
                    "||    8    ||",
                };
            }

            else if (pozice == 6 || pozice == 7 || pozice == 8) {
                draha2 = vypisDrahu(pozice); // spare
            }

            else {
                draha2 = vypisDrahu(5);
            }
            break;

        case 6:



    }




    for (const auto& line : draha2) {
        std::cout << line << "\n";
    }

    vypisZlabky();
}