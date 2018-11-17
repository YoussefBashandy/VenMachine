#include <iostream>

using namespace std;

class VenMac{
    private:
        int choice;
        float price;
        float rem;
        float mon;
    public:
         int setChoice(){
            cout << "Enter the number of product you want: " << endl;
            cin >> choice;
        }
         void PriceOfChoice(){
            if(choice = 1){
                price = 2;
            }
            if(choice = 2){
                price = 1.5;
            }
            if(choice = 3){
                price = 2;
            }
            if(choice = 4){
                price = 4.25;
            }
            if(choice = 5){
                price = 2;
            }
            if(choice = 6){
                price = 3.5;
            }
            if(choice = 7){
                price = 5;
            }
            if(choice = 8){
                price = 1;
            }
            if(choice = 9){
                price = 3;
            }
            if(choice = 10){
                price = 2.5;
            }
        }
        float getPrice(){
            return price;
        }
        int setMoney(){
            cout << "Put the money: " << endl;
            cin >> mon;
        }
        float getChoice(){
            if (mon == price){
                cout << "Here is your product." << endl;
            }
            if(mon > price){
                rem = mon - price + 0.5;
                cout << "Here is your product." << endl;
                cout << "The reminder is: " << rem << endl;
            }
            if(mon < price){
                cout << "You can't afford this product." << endl;
                cout << "Your Money is going to be back." << endl;
            }
        }

};
int main()
{
    VenMac VM;
    VM.setChoice();
    VM.PriceOfChoice();
    VM.getPrice();
    VM.setMoney();
    VM.getChoice();
    return 0;
}
