/*
    Stone Miner
    created by Timnik.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    
    int balance = 0;
    string pickaxe = "noob";
    string username;
    
    printf("   ______________  _  ______    __  ________  _________ \n");
    printf("  / __/_  __/ __ \\/ |/ / __/   /  |/  /  _/ |/ / __/ _ \\ \n");
    printf(" _\\ \\  / / / /_/ /    / _/    / /|_/ // //    / _// , _/ \n");
    printf("/___/ /_/  \\____/_/|_/___/   /_/  /_/___/_/|_/___/_/|_| \n");
    
    printf("\n");
    
    printf("Hello, you are miner your goal is to become rich. To become rich you\n");
    printf("Need to mine stone, you can also invest in better equipment to make more coins.\n");
    printf("\n");
    bool running = true;
    
    bool first_time = true;
    
    while(running) {
        
        if(first_time) {
            cout << "Enter your username: ";
            cin >> username;
            system("clear");
            first_time = false;
        }
        
        //the statics of the player
        cout << "Statics:" << endl;
        cout << "Username: " << username << endl;
        cout << "Balance: " << balance << " coins" << endl;
        cout << "Pickaxe: " << pickaxe << endl;
        
        cout << "Your current balance is: " << balance << " coins." << endl << endl;
        printf("What do you want to do?:\n");
        printf("1. Go to the shop\n");
        printf("2. Mine and earn money\n");
        printf("3. Exit\n");
        printf("Command: ");
        int choice;
        cin >> choice;
        
        system("clear");
        
        if(choice==1) {
            printf("\n");
            printf("Welcome to the shop! Here are some better pickaxes:\n");
            
            printf("1. Wood Pickaxe (120 gold)");
            if(pickaxe != "noob") {
                printf(" (you already own this pickaxe)\n");
            }
            else {
                printf("\n");
            }
            
            printf("2. Stone Pickaxe (1000 gold)");
            if (pickaxe != "wood" and pickaxe != "noob") {
                printf(" (you already own this pickaxe)\n");
            }
            else {
                printf("\n");
            }
            
            printf("3. Diamond Pickaxe (10000 gold)");
            if(pickaxe != "wood" and pickaxe != "noob" and pickaxe != "stone") {
                printf(" (you already own this pickaxe)\n");
            }
            else {
                printf("\n");
            }
            
            printf("4. Rubic Pickaxe (25000 gold)");
            if(pickaxe != "wood" and pickaxe != "noob" and pickaxe != "stone" and pickaxe != "diamond") {
                printf(" (you already own this pickaxe)\n");
            }
            else {
                printf("\n");
            }
            printf("5. Obsidian Pickaxe (50000 gold)\n");
            printf("6. Bedrock Pickaxe (100000 gold)\n");
            printf("7. Terra Pickaxe (250000 gold)\n");
            printf("8. Sun Pickaxe (500000 gold)\n");
            printf("9. Space Pickaxe (1000000 gold)\n");
            printf("10. Death Pickaxe (1500000 gold)\n");
            printf("11. Extraordisn Pickaxe (2000000 gold)\n");
            printf("12. Temple Pickaxe (2500000 gold)\n");
            printf("13. Insanedition Pickaxe (10000000 gold)\n");
            printf("14. Leave\n");
            printf("\nDo you want to buy something?\n");
            printf("Command: \n");
            int choice;
            cin >> choice;
            
            system("clear");
            cout << "Message: ";
            if(choice==1) {
                if(balance<120) {
                    cout << endl;
                    cout << "You don't have money for this item dumb fucker." << endl << endl;
                }
                else {
                    cout << "You sucessfully bought the wood pickaxe for 120 coins." << endl << endl;
                    pickaxe = "wood";
                    balance -= 120;
                }
            }
            else if(choice==2) {
                if(balance<1000) {
                    cout << "You don't have money for this item dumb fucker." << endl << endl;
                }
                else {
                    cout << "You sucessfully bought the stone pickaxe for 1000 coins." << endl << endl;
                    pickaxe = "stone";
                    balance -= 1000;
                }
            }
            else if(choice==3) {
                if(balance<10000) {
                    cout << "You don't have money for this item dumb fucker." << endl << endl;
                }
                else {
                    cout << "You sucessfully bought the diamond pickaxe for 10000 coins." << endl << endl;
                    pickaxe = "diamond";
                    balance -= 10000;
                }
            }
            else if(choice==4) {
                if(balance<25000) {
                    cout << "You don't have money for this item dumb fucker." << endl << endl;
                }
                else {
                    cout << "You sucessfully bought the diamond pickaxe for 25000 coins." << endl << endl;
                    pickaxe = "rubic";
                    balance -= 25000;
                }
            }
            else if(choice==5) {
                if(balance<50000) {
                    cout << "You don't have money for this item dumb fucker." << endl;
                }
                else {
                    pickaxe = "obsidian";
                    balance -= 50000;
                }
            }
            else if(choice==2) {
                if(balance<1000) {
                    cout << "You don't have money for this item dumb fucker." << endl;
                }
                else {
                    pickaxe == "stone";
                    balance -= 1000;
                }
            }
        }
        else if(choice==2) {
            if(pickaxe=="noob") {
                int earned_amount = rand() % 30 + 50;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="wood") {
                int earned_amount = rand() % 30 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="stone") {
                int earned_amount = rand() % 30 + 400;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="diamond") {
                int earned_amount = rand() % 30 + 1200;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="rubic") {
                int earned_amount = rand() % 30 + 3600;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="obsidian") {
                int earned_amount = rand() % 5000 + 7500;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="bedrock") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="terra") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="sun") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="space") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="death") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="extraordisn") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="temple") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else if(pickaxe=="Insanedition") {
                int earned_amount = rand() % 50 + 100;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            else {
                int earned_amount = 10000000;
                cout << "You earned " << earned_amount << "!" << endl;
                balance += earned_amount;
            }
            cout << endl;
        }
        else if (choice==3) {
            return 0;
        }
        else {
            cout << endl;
            cout << "Are you retarded peace of fking shit? This is not a valid command :/" << endl;
        }
    }
    return 0;
    
}
