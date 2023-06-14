#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() = 0;							 // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) {
			return 3.14 * a * a; }		//fungsi untuk menghitung luas
		virtual float Keliling(int a) {
			return 0.5 * 3.14 * a * a;
		}			//fungsi untuk menghitung keliling
	void setX(int a) {								//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX(int i) {					//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { /*Lingkaran turunan dari bidangDatar*/ 
public:
	void input(){
		cout << "Input dari Lingkaran" << endl;
}

class Bujursangkar :public bidangDatar { /*class bujursangkar turunan dari bidangDatar*/ 
public:
	void input() {
		cout << "Input dari Bujursangkar" << endl;
	}
};

int main() {
	bidangDatar* obyek;
	Lingkaran a;
	Bujursangkar b;

	obyek = &a;
	obyek->input();
	obyek = &b;
	obyek->input();

	return 0;
};