#include <iostream>
using namespace std;

int main() {
    double milesPerDay;       
    double costPerGallon;     
    double milesPerGallon;   
    double parkingFeesPerDay; 
    double tollsPerDay;      

    cout << "�п�J�C�Ѧ�p���`���{ :";
    cin >> milesPerDay;

    cout << "�п�J�C�[�ڨT�o������ :";
    cin >> costPerGallon;

    cout << "�п�J�C�[�ڨT�o��������p���{�� :";
    cin >> milesPerGallon;

    cout << "�п�J�C�Ѫ������O :";
    cin >> parkingFeesPerDay;

    cout << "�п�J�C�Ѫ��L���O :";
    cin >> tollsPerDay;

    double gasolineCostPerDay = (milesPerDay / milesPerGallon) * costPerGallon;
    double totalCostPerDay = gasolineCostPerDay + parkingFeesPerDay + tollsPerDay;
    cout << "�z�C�Ѫ��r�������O: " << totalCostPerDay <<"��"<< endl;

    return 0;
}

