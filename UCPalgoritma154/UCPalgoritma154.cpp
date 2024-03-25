//Regina rana nabila_20230140154

//1. Algoritma pengurutan dimana setiap element dari daftar diambil secara bergantian
//dan ditempatkan di posisi yang tepat dalam sub-daftar yang diurutkan sebelumnya,
//apabila adanya element terkecil di sebelah kiri dan lebih besar di sebelah kanan.

//2.Algortima pengurutan dimana daftar dibagi menjadi dua bagian, yaitu sub-daftar yang
//sudah di urutkan dan sub - daftar yang belum diurutkan. pada setiap iterasi,
//element terkecil dari sub-daftar yang belum diurutkan dipilih dan di pindahkan ke sub daftar yg sudah diurutkan.

//3. dalam algoritma sortir, untuk mengetahui jumlah langkah yaitu menggunakan (jumlah data(n) - 1 = langkah) dengan
//bantuan temp/ (mengadakan tempat untuk sebuah variabel disimpan sementara).

#include <iostream>
using namespace std;

int Regina[45];																			//Membuat Array dengan panjang data 45
int n;																					//Membuat variabel input n

void input() {																			//Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";									//Membuat Inputan jumlah element Array
		cin >> n;																		//Mmemanggil variabel inputan n

		if (n <= 45) {																	//Membuat kondisi n tidak lebih dari 45
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 45 element.\n";				//Menampilkan pesan jika data lebih dari 45
		}
	}
	cout << endl;																		//Membuat jarak per baris program
	cout << "======================" << endl;											//Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)															//Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data Ke-" << (i + 1) << ": ";											//Masukkan atau menginputkan nilai data n
		cin >> Regina[i];																//Menyimpan nilai data n kedalam variabel array
	}
}

void insertionsort() {																	//Procedure InsertionSort

	int temp;																			//Membuat variabel data temporer atau menyimopan sementara
	int i, j;																			//Mmebuat variabel j sebagai penanda

	for (i = 1; i <= n - 1; i++) {														//1.Looping dengan nilai i dimulai dari 1 hingga n-1

		temp = Regina[i];																//2.Simpan nilai variabel array Regina[i] ke variabel sementara temp

		j = i - 1;																		//3.Setting nilai j sama dengan i-1;

		while (j >= 0 && Regina[j] > temp)												//4.Looping while dimana nilai j lebih besar sama dengan 0 dan
																						//variabel array Regina[j] lebih besar daripada temp
		{
			Regina[j + 1] = Regina[j];													//4a.Simpan variabel array Regina[j] ke dalam variabel variabel array Regina[j + 1]
			j--;																		//4b.Decreement nilai j by 1
		}

		Regina[j + 1] = temp;															//5.Simpan nilai temp ke dalam variabel array Regina[j + 1}

		cout << "\nPass" << i << ": ";													//Output ke layar
		for (int k = 0; k < n; k++) {													//Looping nilai k dimulai dari 0 hingga n-1
			cout << Regina[k] << ": ";													//Output ke layar
		}
	}
}

void display() {																		//Procedure Display
	cout << endl;																		//Output baris kosong
	cout << "\n========================" << endl;										//Output ke layar
	cout << "Element Array yang disusun" << endl;										//Output ke layar
	cout << "==========================" << endl;										//Output ke layar

	for (int j = 0; j < n; j++) {														//Looping dengan j dimulai dari 0 hingga n-1
		cout << Regina[j] << endl;														//Output ke layar
	}
	cout << endl;																		//Output baris kosong
}

int main()
{
	input();																			//Memanggil input
	insertionsort();																	//Memanggil insertionsort
	display();																			//Memanggil display
}
