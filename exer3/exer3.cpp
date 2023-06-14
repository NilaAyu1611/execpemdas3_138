include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;					//variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {							//constructor
		x = 0;
	}
	virtual void input() = 0;							 // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { 
		return 0; 
	}		
	virtual float Keliling(int a) {
		return 0;									//fungsi untuk menghitung keliling
	}			
	void setX(int a) {								//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX(int i) {					//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { /*Lingkaran turunan dari bidangDatar*/
public:
	void input() {
		cout << "Input dari Lingkaran" << endl;
	}

	class Bujursangkar :public bidangDatar { /*class bujursangkar turunan dari bidangDatar*/
	public:
		void input() {
			cout << "Input dari Bujursangkar" << endl;
		}
	};


	class bidangDatr : public Lingkaran, public Bujursangkar{
		p
	int main() {
		bidangDatar* obyek;
		Lingkaran a;
		Bujursangkar b;

		obyek = &a;
		obyek->input();
		obyek = &b;
		obyek->input();

		return 0;

		float Lingkarang, Bujursangkar;
		int pilihan
			do {
				cout << "\n\n===========";
				cout << "\n\ M E N U";
				cout << "\n=============";
				cout << "\n 1. Luas Lingkarang";
				cout << "\n 2. Keliling";
				cout << "\n 3. Keluar";
				cout << "\n Pilihan (1/2/3) : ";
				cin >> pilihan;

				switch (pilihan)
				{
				case 1:
					cout << "masukan jari-jari = ";
					cin >> jejari;
					cout << "\n Luas Lingkaran = " << Luas Lingkaran

				}
			};