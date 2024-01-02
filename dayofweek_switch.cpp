#include<iostream>

using namespace std;

string day_of_the_week(int day_num){
    string day_name
    switch(day_num){
        case(0):
            day_name= "Sunday";
            break;
        case(1):
            day_name= "Monday";
            break;
        case(2):
            day_name= "Tuesday";
            break;
        case(3):
            day_name= "Wednesday";
            break;
        case(4):
            day_name= "Thursday";
            break;
        case(5):
            day_name= "Friday";
            break;
        case(6):
            day_name= "Satuday";
            break;
        default:
            day_name="Invalid Day Number"
            
    }
} 

int main(){
    cin>> day_num;
    cout<< day_of_the_week(day_num)\n;
}
