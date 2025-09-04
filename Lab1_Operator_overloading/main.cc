#include "MyTime.h"

using namespace std;

int main(){
    MyTime t1, t2;

    cout << "Please input the first time in 24hr standard(H:M colon included): ";
    cin >> t1;
    cout << "Please input the second time in 24hr standard(H:M colon included): ";
    cin >> t2;
    cout << t1 << " " << t2 << " are your times" << endl;
    cout << t1 + t2 << " are your times added" << endl;
    cout << t1 - t2 << " are your times subtracted" << endl;
    cout << t1 * 5 << " is your time " << t1 << " multiplied by 5" << endl;
    cout << t2 * 5 << " is your time " << t2 << " multiplied by 5" << endl;
    cout << t1 / 5 << " is your time " << t1 <<" divided by 5" << endl;
    cout << t2 / 5 << " is your time " << t2 << " divided by 5" << endl;
    if(t1 == t2){
        cout << "Your times " << t1 << " " << t2 <<" are not equal" << endl;
    }else{
        cout << "Your times " << t1 << " " << t2 <<" are not equal" << endl;
    }

    if(t1 < t2){
        cout << "Your time " << t1 << " is less than " << t2 << endl;
    }else{
        cout << "Your time " << t1 << " is greater than " << t2 << endl;
    }

        if(t1 <= t2){
        cout << "Your time " << t1 << " is less than " << t2 << endl;
    }else{
        cout << "Your time " << t1 << " is greater than or equal to " << t2 << endl;
    }
}