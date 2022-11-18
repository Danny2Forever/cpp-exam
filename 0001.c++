#include <iostream>
using namespace std;
int main(){
    int a ,b ,c;
    cin >> a ;
    cin >> b ;
    cin >> c ;

    int score = a + b + c ;
    if(score >= 80 and score <= 100){
        cout << "A" << endl;
    }else if (score >= 75 and score < 80)
    {
        cout << "B+" << endl;
    }else if (score >= 70 and score < 75)
    {
        cout << "B" << endl;
    }else if (score >= 65 and score < 70)
    {
        cout << "C+" << endl;
    }else if (score >= 60 and score < 65)
    {
        cout << "C" << endl;
    }else if (score >= 55 and score < 60)
    {
        cout << "D+" << endl;
    }else if (score >= 50 and score < 55)
    {
        cout << "D" << endl;
    }else if (score >= 0 and score < 50)
    {
        cout << "F" << endl;
    }
}
