#include <iostream>

using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim() {
		cout << "No Induk = " << nim << endl;
	}
};
 
int main() {
    mahasiswa mhs{ 1 }; //Object mhs
    mhs.shownim(); //Member Access Operator

    mahasiswa& refMhs = mhs; //Pointer References refMhs
    refMhs.nim = 2; //Membber Access Operator
    mhs.shownim();

    mahasiswa* pMhs = &mhs; //pointer Dereferences pMhs
    pMhs->nim = 3; //Arrow Operator
    mhs.shownim();
    return 0;
}

