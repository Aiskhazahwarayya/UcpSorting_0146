// UCPSorting_0146.cpp
//Tipe  B

// 1. Merupakan salah satu algoritma pengurutan paling sederhana yang bekerja dengan memindai data berulang kali, membandingkan elemen yang berdekatan, dan menukarnya jika urutannya salah.
// 2. Merupakan  penyortiran atau  penyisipan dengan membandingkan elemen yang dipisahkan oleh jarak  untuk membentuk beberapa subdata.
// 3. Insertion Sort, Karena data sudah ada beberapa yang diurutkan sebagian dan hanya perlu membuat sedikit perbandingan.
// 4.

#include <iostream>
using namespace std;

int aiskha[46];
int n;

void input() {
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
		}
	}
	cout << endl;
	cout << "===============" << endl;
	cout << "Masukan  Eleman Array" << endl;
	cout << "===============" << endl;


	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> aiskha[i];
	}
}

void selectionSort(){
	int i, j;

	for (i = 1; j <= n - 2; i++) //step 1
	{
		i = j; // step 2
		while (j >= 0 && aiskha[j] > i) 
		{
			aiskha[j + 1] = aiskha[j];
			j = j - 1; 
		}
		aiskha[j + 1] = i; 

	}

}

void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================" << endl;
	for (int j = 0; j < n; j++) {
		cout << aiskha[j] << endl;
	}

	cout << "Jumlah pass =" << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	selectionSort();
	display();
}


