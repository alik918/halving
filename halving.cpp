		#include <iostream>
using namespace std;
int main()
{
    int i; // начало цикла халвинга
	float nSubsidy; // награда за блок до халвинга
	cout << "Введите награду за блок до халвинга         : "; 
    cin >> nSubsidy; 
	int CoinsPerCycle; // количество монет за цикл
	int HalvingInterval; //высота блока-интервал халвинга 
	cout << "Введите начальный блок халвинга             : "; 
    cin >> HalvingInterval;   
    int Maxmoney = HalvingInterval * nSubsidy; // количество монет за первый цикл
	int Halving = 0; // счетчик халвингов
	int a; // объявление количества предполагаемых халвингов
	float b; //объявление уменьшения награды за блок
	cout << "Введите количество предполагаемых халвингов : "; 
    cin >> a; 
    cout << "Введите размер уменьшения награды в %       : "; 
    cin >> b;
    cout << "     Before Halving " <<   endl;
    cout << " Награда за блок составляет     = " << nSubsidy << endl;
    cout << " Количество монет до 1 халвинга = " << Maxmoney << endl;
    cout << " Количество монет всего         = " << Maxmoney << endl;
    setlocale(0, "");
    for (i = HalvingInterval; i <= HalvingInterval*a; i += HalvingInterval) //начальное значение, конечное-количество халвингов, шаг цикла.
    {
		nSubsidy = nSubsidy - nSubsidy/100*b;
		CoinsPerCycle = nSubsidy * HalvingInterval;
        Maxmoney = Maxmoney + CoinsPerCycle;
		Halving = Halving + 1;
	cout << "      Halving  № " << Halving << endl;
    cout << " Награда за блок составит   = " << nSubsidy << endl;
	cout << " Количество монет за цикл   = " << CoinsPerCycle << endl;
    cout << " Количество монет всего     = " << Maxmoney << endl; 
	}
        return 0;
}
