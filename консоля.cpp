#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "rus");

	int ticket, left = 0, right = 0, size = 6;
	int counter = 0, tsize = 0;
	
	

	cout << "Задание 4. Счастливый билетик." << endl << endl;
	cout << "-------------------------------" << endl << endl;


	
//Программа будет считать адекватно только билеты с четным количеством цифр
	



	while (true) {
		

		cout << "Введите номер билета: ";
		cin >> ticket;

		counter = ticket;
		while (counter > 0) {
			counter /= 10;
			tsize++;
		}
		
		if (tsize != size) {
			cout << "Ошибка. Номер билета должен состоять из " << size << " Символов. Повторите попытку" << endl;
			tsize = 0;
			continue;
		}
		else {
			tsize = 0;
		}





		while (counter < (size / 2)) {
			right += ticket % 10;
			ticket /= 10;
			counter++;

		} counter = 0;
		

		while (counter < (size / 2)) {
			left += ticket % 10;
			ticket /= 10;
			counter++;

		}counter = 0;

		

		if (left == right) {
			cout << "Поздравляю, билет счастливый !!!" << endl;
		}
		else {
			cout << "Ничего! Повезет в следующий раз!" << endl;
		}

		left = 0;
		right = 0;
		
	}


}