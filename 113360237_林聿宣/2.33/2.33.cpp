#include <iostream>
using namespace std;

int main() {
    double milesPerDay;       
    double costPerGallon;     
    double milesPerGallon;   
    double parkingFeesPerDay; 
    double tollsPerDay;      

    cout << "請輸入每天行駛的總里程 :";
    cin >> milesPerDay;

    cout << "請輸入每加侖汽油的價格 :";
    cin >> costPerGallon;

    cout << "請輸入每加侖汽油的平均行駛里程數 :";
    cin >> milesPerGallon;

    cout << "請輸入每天的停車費 :";
    cin >> parkingFeesPerDay;

    cout << "請輸入每天的過路費 :";
    cin >> tollsPerDay;

    double gasolineCostPerDay = (milesPerDay / milesPerGallon) * costPerGallon;
    double totalCostPerDay = gasolineCostPerDay + parkingFeesPerDay + tollsPerDay;
    cout << "您每天的駕車成本是: " << totalCostPerDay <<"元"<< endl;

    return 0;
}

