#include <iostream>
using namespace std;

class matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir;
	}

	virtual float hitunglahNilaiAkhir() { return 0;}
	virtual void cekKelulusan() { return ;}
	virtual void input() { return ;}

	void setPresensi(float nilai) {
		this -> presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	float getActivity() {
		return activity;
	}

	float getExercise() {
		return exercise;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}

//jawaban
};
class pemrograman : public matakuliah {
//jawaban
public:
	float presensi;
};
int main() {
//jawaban
	cout << "program dibuat" << endl;
	cout << "Nilai presensi : ";
}