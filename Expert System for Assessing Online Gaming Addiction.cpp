#include<iostream>
#include<windows.h>
#include<iomanip>
#include<sstream>
#include<string.h>
#include<conio.h>
using namespace std;
void textcolor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
    	wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}
string tengah1(int width, char* s)
{
	stringstream ss;
	int pos = width / 2 + int(strlen(s) / 2);
	ss << setw(pos) << s;
	return ss.str();
}
void header()
{
		textcolor(2);
	cout<<""<<endl;
	cout<<":=================================================================================================:"<<endl;
	cout<<"|>>>>>SISTEM PAKAR DIAGNOSA TINGKAT KECANDUAN GAME ONLINE MENGGUNAKAN METODE CERTAINLY FACTOR<<<<<|"<<endl;
	cout<<":=================================================================================================:"<<endl;
	cout<<"|                                                                                                 |"<<endl;
	cout<<"|                                       Devinka Intan Sagita                                      |"<<endl;
	cout<<"|                            KECERDASAN BUATAN (ARTIFICIAL INTELLIGENCE)                ~(._.)~   |"<<endl;
	cout<<"|                                                                                        (  }     |"<<endl;
	cout<<":=========================================================================================^^======:"<<endl;
	cout<<"|                  - SELAMAT DATANG DI SISTEM PAKAR DIAGNOSA KECANDUAN GAME ONLINE  -             |"<<endl;
	cout<<"|_________________________________________________________________________________________________|"<<endl;
	cout<<"|                                    - METODE CERTAINLY FACTOR -                                  |"<<endl;
	cout<<":=================================================================================================:"<<endl;
	cout<<endl;
}
void awal()
{
	system("cls");
	header();
	textcolor(0);
}

void salah()
{
	system("cls");
	textcolor(4);
	cout<<"JAWABAN ANDA TIDAK SESUAI. SILAHKAN GANTI JAWABAN ANDA."<<endl;
}
int main()
{
	string nama, julukan,
	g01="sulit berkonsentrasi saat belajar",
	g02="sering mengakses game di waktu luang",
	g03="malas jika disuruh mengerjakan sesuatu selain bermain game",
	g04="selalu meluangkan waktunya untuk bermain game",
	g05="bermain game sampai lupa waktu",
	g06="gelisah jika tidak bermain game",
	g07="terus menerus memikirkan tentang game",
	g08="suka menyendiri di suatu tempat untuk bermain game",
	g09="tidak tertarik untuk bergaul dengan lingkungan sekitar jika tidak berhubungan game",
	g10="rela mengeluarkan banyak uang untuk game",
	g11="pola hidup tidak teratur karena bermain game",
	g12="jika diajak berbicara selalu membicarakan game",
	g13="sering berhalusinasi",
	g14="menganggap game sebagai teman terbaik",
	p01="Kecanduan tinggi",
	p02="Kecanduan Sedang",
	p03="Kecanduan rendah",
	opt1="Tidak",
	opt2="Kemungkinan Kecil",
	opt3="Kemungkinan Besar",
	opt4="Hampir iya",
	opt5="Iya";
	int pilihan1,pilihan2,pilihan3,pilihan4,pilihan5,pilihan6,pilihan7,pilihan8,pilihan9,pilihan10,pilihan11,pilihan12,pilihan13,pilihan14;
	char gender, ulang;
	float a=0, b=0.2, c=0.5, d=0.8, e=1;
	float pil1, pil2, pil3, pil4, pil5, pil6, pil7, pil8, pil9, pil10, pil11, pil12, pil13, pil14;
	float gjl1,gjl2,gjl3,gjl4,gjl5,gjl6,gjl7,gjl8,gjl9,gjl10,gjl11,gjl12,gjl13,gjl14,gjl15,gjl16,gjl17,gjl18;
	float nilai1,nilai2,nilai3,nilai4,nilai5,nilai6,nilai7,nilai8,nilai9,nilai10,nilai11,j3,j2,j1;
	mulai:
	system("cls");
	header();
	textcolor(7);
	cout<<" Silahkan Masukkan Nama Lengkap Pasien  = ";
	getline(cin>>ws,nama);
	cout<<endl;
	cout<<" Silahkan Pilih Gender Pasien [L/P]  = ";
	cin>>gender;
	if(gender=='l' || gender=='L')
	{
		julukan = "Saudara";
	}
	else if (gender=='p' || gender=='P')
	{
		julukan = "Saudari";
	}
	else
	{
		cout<<"JAWABAN ANDA TIDAK SESUAI. SILAHKAN GANTI JAWABAN ANDA."<<endl;
		goto mulai;
	}
	awal();
	textcolor(3);
	cout<<" Selamat Datang, Di Sistem Pakar Diagnosa Tingkat Kecanduan Game Online. "<<endl;
	textcolor(1);
	cout<<"_______________________________________________________________________________________________________"<<endl<<endl;
	textcolor(7);
	cout<<" Silahkan lanjutkan dengan menekan [ENTER] untuk pertanyaan selanjutnya."<<endl<<endl;
	system("pause");
	p1:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g01<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan1;
	if(pilihan1>5||pilihan1<=0)
	{
		salah();
		goto p1;
	}
	p2:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g02<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan2;
	if(pilihan2>5||pilihan2<=0)
	{
		salah();
		goto p2;
	}
	p3:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g03<<"  ?  "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan3;
	if(pilihan3>5||pilihan3<=0)
	{
		salah();
		goto p3;
	}
	p4:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g04<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan4;
	if(pilihan4>5||pilihan4<=0)
	{
		salah();
		goto p4;
	}
	p5:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g05<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan5;
	if(pilihan5>5||pilihan5<=0)
	{
		salah();
		goto p5;
	}
	p6:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g06<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan6;
	if(pilihan6>5||pilihan6<=0)
	{
		salah();
		goto p6;
	}
	p7:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g07<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan7;
	if(pilihan7>5||pilihan7<=0)
	{
		salah();
		goto p7;
	}
	p8:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g08<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan8;
	if(pilihan8>5||pilihan8<=0)
	{
		salah();
		goto p8;
	}
	p9:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g09<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan9;
	if(pilihan9>5||pilihan9<=0)
	{
		salah();
		goto p9;
	}
	p10:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g10<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan10;
	if(pilihan10>5||pilihan10<=0)
	{
		salah();
		goto p10;
	}
	p11:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" memiliki "<<g11<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan11;
	if(pilihan11>5||pilihan11<=0)
	{
		salah();
		goto p11;
	}
	p12:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g12<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan12;
	if(pilihan12>5||pilihan12<=0)
	{
		salah();
		goto p12;
	}
	p13:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g13<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan13;
	if(pilihan13>5||pilihan13<=0)
	{
		salah();
		goto p13;
	}
	p14:
	awal();
	textcolor(2);
	cout<<" ========================================================:"<<endl;
	cout<<" Nama Pasien = "<<nama<<endl;
	cout<<" ========================================================:"<<endl;
	cout<<endl;
	textcolor(7);
	cout<<" Apakah "<<julukan<<" "<<nama<<" "<<g14<<" ? "<<endl;
	cout<<endl;
	cout<<" [1] = "<<opt1<<endl;
	cout<<" [2] = "<<opt2<<endl;
	cout<<" [3] = "<<opt3<<endl;
	cout<<" [4] = "<<opt4<<endl;
	cout<<" [5] = "<<opt5<<endl;
	cout<<endl;
	cout<<" Masukkan Pilihan Anda : "<<endl;
	cin>>pilihan14;
	if(pilihan14>5||pilihan14<=0)
	{
		salah();
		goto p14;
	}

	awal();
	textcolor(2);
	cout<<":====================================================================================================:"<<endl;
	cout<<" DIAGNOSA TINGKAT KECANDUAN ATAS NAMA : "<<nama<<" SEDANG DIPROSES, MOHON DITUNGGU SEBENTAR... [enter]"<<endl;
	cout<<":====================================================================================================:"<<endl;
	cout<<endl;
	textcolor(4);
	system("pause");
	awal();
	textcolor(2);
	cout<<" :==========================================================:"<<endl;
	cout<<" DIAGNOSA PENYAKIT ATAS NAMA : "<<nama<<endl;
	cout<<" :==========================================================:"<<endl;
	cout<<endl;
	cout<<" HASIL DIAGNOSA ANDA : "<<endl;
	cout<<endl;
	textcolor(7);

	if(pilihan1==1)
    {
		pil1=a;
		cout<<"-> "<<g01<<" ("<<opt1<<")";
	}
	else if(pilihan1==2)
	{
		pil1=b;
		cout<<"->  "<<g01<<" ("<<opt2<<")";
	}
	else if(pilihan1==3)
	{
		pil1=c;
		cout<<"->  "<<g01<<" ("<<opt3<<")";
	}
	else if(pilihan1==4)
	{
		pil1=d;
		cout<<"->  "<<g01<<" ("<<opt4<<")";
	}
	else if(pilihan1==5)
	{
		pil1=e;
		cout<<"->  "<<g01<<" ("<<opt5<<")";
	}
	gjl1=pil1*0.2;
	cout<<endl;

	if(pilihan2==1)
	{
		pil2=a;
		cout<<"-> "<<g02<<" ("<<opt1<<")";
	}
	else if(pilihan2==2)
	{
		pil2=b;
		cout<<"->  "<<g02<<" ("<<opt2<<")";
	}
	else if(pilihan2==3)
	{
		pil2=c;
		cout<<"->  "<<g02<<" ("<<opt3<<")";
	}
	else if(pilihan2==4)
	{
		pil2=d;
		cout<<"->  "<<g02<<" ("<<opt4<<")";
	}
	else if(pilihan2==5)
	{
		pil2=e;
		cout<<"->  "<<g02<<" ("<<opt5<<")";
	}
	gjl2=pil2*0.4;
	cout<<endl;

	if(pilihan3==1)
	{
		pil3=a;
		cout<<"-> "<<g03<<" ("<<opt1<<")";
	}
	else if(pilihan3==2)
	{
		pil3=b;
		cout<<"->  "<<g03<<" ("<<opt2<<")";
	}
	else if(pilihan3==3)
	{
		pil3=c;
		cout<<"->  "<<g03<<" ("<<opt3<<")";
	}
	else if(pilihan3==4)
	{
		pil3=d;
		cout<<"->  "<<g03<<" ("<<opt4<<")";
	}
	else if(pilihan3==5)
	{
		pil3=e;
		cout<<"->  "<<g03<<" ("<<opt5<<")";
	}
	gjl3=pil3*0.8;
	cout<<endl;

	if(pilihan4==1)
	{
		pil4=a;
		cout<<"-> "<<g04<<" ("<<opt1<<")";
	}
	else if(pilihan4==2)
	{
		pil4=b;
		cout<<"->  "<<g04<<" ("<<opt2<<")";
	}
	else if(pilihan4==3)
	{
		pil4=c;
		cout<<"->  "<<g04<<" ("<<opt3<<")";
	}
	else if(pilihan4==4)
	{
		pil4=d;
		cout<<"->  "<<g04<<" ("<<opt4<<")";
	}
	else if(pilihan4==5)
	{
		pil4=e;
		cout<<"->  "<<g04<<" ("<<opt5<<")";
	}
	gjl4=pil4*0.4;
	cout<<endl;

	if(pilihan5==1)
	{
		pil5=a;
		cout<<"-> "<<g05<<" ("<<opt1<<")";
	}
	else if(pilihan5==2)
	{
		pil5=b;
		cout<<"->  "<<g05<<" ("<<opt2<<")";
	}
	else if(pilihan5==3)
	{
		pil5=c;
		cout<<"->  "<<g05<<" ("<<opt3<<")";
	}
	else if(pilihan5==4)
	{
		pil5=d;
		cout<<"->  "<<g05<<" ("<<opt4<<")";
	}
	else if(pilihan5==5)
	{
		pil5=e;
		cout<<"->  "<<g05<<" ("<<opt5<<")";
	}
	gjl5=pil5*0.8;
	cout<<endl;

	if(pilihan6==1)
	{
		pil6=a;
		cout<<"-> "<<g06<<" ("<<opt1<<")";
	}
	else if(pilihan6==2)
	{
		pil6=b;
		cout<<"->  "<<g06<<" ("<<opt2<<")";
	}
	else if(pilihan6==3)
	{
		pil6=c;
		cout<<"->  "<<g06<<" ("<<opt3<<")";
	}
	else if(pilihan6==4)
	{
		pil6=d;
		cout<<"->  "<<g06<<" ("<<opt4<<")";
	}
	else if(pilihan6==5)
	{
		pil6=e;
		cout<<"->  "<<g06<<" ("<<opt5<<")";
	}
	gjl6=pil6*0.4;
	cout<<endl;

	if(pilihan7==1)
	{
		pil7=a;
		cout<<"-> "<<g07<<" ("<<opt1<<")";
	}
	else if(pilihan7==2)
	{
		pil7=b;
		cout<<"->  "<<g07<<" ("<<opt2<<")";
	}
	else if(pilihan7==3)
	{
		pil7=c;
		cout<<"->  "<<g07<<" ("<<opt3<<")";
	}
	else if(pilihan7==4)
	{
		pil7=d;
		cout<<"->  "<<g07<<" ("<<opt4<<")";
	}
	else if(pilihan7==5)
	{
		pil7=e;
		cout<<"->  "<<g07<<" ("<<opt5<<")";
	}
	gjl7=pil7*0.4;
	cout<<endl;

	if(pilihan8==1)
	{
		pil8=a;
		cout<<"-> "<<g08<<" ("<<opt1<<")";
	}
	else if(pilihan8==2)
	{
		pil8=b;
		cout<<"->  "<<g08<<" ("<<opt2<<")";
	}
	else if(pilihan8==3)
	{
		pil8=c;
		cout<<"->  "<<g08<<" ("<<opt3<<")";
	}
	else if(pilihan8==4)
	{
		pil8=d;
		cout<<"->  "<<g08<<" ("<<opt4<<")";
	}
	else if(pilihan8==5)
	{
		pil8=e;
		cout<<"->  "<<g08<<" ("<<opt5<<")";
	}
	gjl8=pil8*0.4;
	cout<<endl;

	if(pilihan9==1)
	{
		pil9=a;
		cout<<"-> "<<g09<<" ("<<opt1<<")";
	}
	else if(pilihan9==2)
	{
		pil9=b;
		cout<<"->  "<<g09<<" ("<<opt2<<")";
	}
	else if(pilihan9==3)
	{
		pil9=c;
		cout<<"->  "<<g09<<" ("<<opt3<<")";
	}
	else if(pilihan9==4)
	{
		pil9=d;
		cout<<"->  "<<g09<<" ("<<opt4<<")";
	}
	else if(pilihan9==5)
	{
		pil9=e;
		cout<<"->  "<<g09<<" ("<<opt5<<")";
	}
	gjl9=pil9*0.8;
	cout<<endl;

	if(pilihan10==1)
	{
		pil10=a;
		cout<<"-> "<<g10<<" ("<<opt1<<")";
	}
	else if(pilihan10==2)
	{
		pil10=b;
		cout<<"->  "<<g10<<" ("<<opt2<<")";
	}
	else if(pilihan10==3)
	{
		pil10=c;
		cout<<"->  "<<g10<<" ("<<opt3<<")";
	}
	else if(pilihan10==4)
	{
		pil10=d;
		cout<<"->  "<<g10<<" ("<<opt4<<")";
	}
	else if(pilihan10==5)
	{
		pil10=e;
		cout<<"->  "<<g10<<" ("<<opt5<<")";
	}
	gjl10=pil10*0.8;
	cout<<endl;

	if(pilihan11==1)
	{
		pil11=a;
		cout<<"-> "<<g11<<" ("<<opt1<<")";
	}
	else if(pilihan11==2)
	{
		pil11=b;
		cout<<"->  "<<g11<<" ("<<opt2<<")";
	}
	else if(pilihan11==3)
	{
		pil11=c;
		cout<<"->  "<<g11<<" ("<<opt3<<")";
	}
	else if(pilihan11==4)
	{
		pil11=d;
		cout<<"->  "<<g11<<" ("<<opt4<<")";
	}
	else if(pilihan11==5)
	{
		pil11=e;
		cout<<"->  "<<g11<<" ("<<opt5<<")";
	}
	gjl11=pil11*0.2;
	cout<<endl;

	if(pilihan12==1)
	{
		pil12=a;
		cout<<"-> "<<g12<<" ("<<opt1<<")";
	}
	else if(pilihan12==2)
	{
		pil12=b;
		cout<<"->  "<<g12<<" ("<<opt2<<")";
	}
	else if(pilihan12==3)
	{
		pil12=c;
		cout<<"->  "<<g12<<" ("<<opt3<<")";
	}
	else if(pilihan12==4)
	{
		pil12=d;
		cout<<"->  "<<g12<<" ("<<opt4<<")";
	}
	else if(pilihan12==5)
	{
		pil12=e;
		cout<<"->  "<<g12<<" ("<<opt5<<")";
	}
	gjl12=pil12*0.4;
	cout<<endl;

	if(pilihan13==1)
	{
		pil13=a;
		cout<<"-> "<<g13<<" ("<<opt1<<")";
	}
	else if(pilihan13==2)
	{
		pil13=b;
		cout<<"->  "<<g13<<" ("<<opt2<<")";
	}
	else if(pilihan13==3)
	{
		pil13=c;
		cout<<"->  "<<g13<<" ("<<opt3<<")";
	}
	else if(pilihan13==4)
	{
		pil13=d;
		cout<<"->  "<<g13<<" ("<<opt4<<")";
	}
	else if(pilihan13==5)
	{
		pil13=e;
		cout<<"->  "<<g13<<" ("<<opt5<<")";
	}
	gjl13=pil13*0.2;
	cout<<endl;

	if(pilihan14==1)
	{
		pil14=a;
		cout<<"-> "<<g14<<" ("<<opt1<<")";
	}
	else if(pilihan14==2)
	{
		pil14=b;
		cout<<"->  "<<g14<<" ("<<opt2<<")";
	}
	else if(pilihan14==3)
	{
		pil14=c;
		cout<<"->  "<<g14<<" ("<<opt3<<")";
	}
	else if(pilihan11==4)
	{
		pil14=d;
		cout<<"->  "<<g14<<" ("<<opt4<<")";
	}
	else if(pilihan14==5)
	{
		pil14=e;
		cout<<"->  "<<g14<<" ("<<opt5<<")";
	}
	gjl14=pil14*0.4;
	cout<<endl;

	//menghitung Tingkat Kecanduan Tinggi
	nilai1 = gjl1 + gjl3 * (1 - gjl1);
	nilai2 = nilai1 + gjl5 * (1 - nilai1);
	nilai3 = nilai2 + gjl9 * (1 - nilai2);
	nilai4 = nilai3 + gjl10 * (1 - nilai3);
	nilai5 = nilai4 + gjl13 * (1 - nilai4);
	j1=nilai5;

    //menghitung Tingkat Kecanduan Sedang
    nilai6 = gjl6 + gjl8 * (1 - gjl6);
	nilai7 = nilai6 + gjl12 * (1 - nilai6);
	nilai8 = nilai7 + gjl14 * (1 - nilai7);
	j2=nilai8;

	//menghitung Gangguan Kecanduan Rendah
	nilai9 = gjl2 + gjl4 * (1 - gjl12);
	nilai10 = nilai9 + gjl7 * (1 - nilai9);
	nilai11 = nilai10 + gjl11 * (1 - nilai10);
	j3=nilai11;

	cout<<endl<<endl;

	cout<<"************************************************************************"<<endl;
    cout<<"              Hasil Diagnosa Tingkat kecanduan Game Online              "<<endl;
    cout<<"************************************************************************"<<endl;
    cout<<"    Kecanduan Tinggi : "<<j1*100<<"%                                    "<<endl;
    cout<<"    Kecanduan Sedang : "<<j2*100<< "%                                   "<<endl;
    cout<<"    Kecanduan Rendah  : "<<j3*100<<"%                                   "<<endl;
    cout<<"************************************************************************"<<endl;
    cout<<endl<<endl;
    if(j1<0.2 && j2<0.2 && j3<0.2)
    {
        cout<<" Anda dinyatakan tidak kecanduan game online"<<endl;
    }
    else if(j1>j2 && j1>j3 )
    {
        if(j1>=0.2)
        {
            cout<<" Tingkat kecanduan game online yang dialami termasuk level tinggi, dengan persentase "<<j1*100<<"%"<<endl;
            cout<<" Anda disarankan untuk       :"<<endl;
            cout<<" 1. Membantu untuk mengingatkan serta mengurangi penggunaan gadget pasien."<<endl;
            cout<<" 2. Menuntun pasien untuk fokus terhadap pencapaian positif serta tujuan hidup pasien diluar lingkup dunia game."<<endl;
            cout<<" 3. Membantu pasien menemukan aktifitas positif yang menarik minat pasien."<<endl;
            cout<<" 4. Mengajak pasien untuk berkumpul dengan orang terdekat seperti keluarga, teman ataupun pasangan."<<endl;
            cout<<" 5. Mengajak pasien untuk konseling lebih lanjut dengan ahli terkait."<<endl;
        }
        else
        {
            cout<<" Pasien dinyatakan tidak kecanduan game online."<<endl;
        }
    }

    else if(j2>j1 && j2>j3)
    {
        if(j2>=0.2)
        {
            cout<<" Tingkat kecanduan game online yang pasien alami termasuk level sedang, dengan persentase "<<j2*100<<"%"<<endl;
            cout<<" Anda disarankan untuk       :"<<endl;
            cout<<" 1. Mengajak pasien berkomunikasi."<<endl;
            cout<<" 2. Membantu pasien menemukan aktifitas positif yang pasien minati."<<endl;
            cout<<" 3. Mencoba untuk menyibukkan pasien dengan segala kegiatan agar pikiran pasien dapat teralihkan."<<endl;
            cout<<" 4. Membatasi pasien dalam bermain gadget dan coba untuk berkumpul bersama keluarga terdekat."<<endl;
            cout<<" ."<<endl;
        }
          else
        {
            cout<<" Pasien dinyatakan tidak kecanduan game online."<<endl;
        }
    }
    else if(j3>j1 && j3>j2)
    {
        if(j3>=0.2)
        {
            cout<<" Tingkat kecanduan game online yang pasien alami termasuk level rendah, dengan persentase "<<j3*100<<"%"<<endl;
            cout<<" Anda disarankan untuk       :"<<endl;
            cout<<" 1. Mengajak pasien melakukan aktifitas atau kegiatan positif."<<endl;
            cout<<" 2. Menjaga komunikasi dengan pasien."<<endl;
            cout<<" 3. Mengontrol kesehatan fisik dan pikiran."<<endl;
        }
         else
        {
            cout<<" Paien dinyatakan tidak kecanduan game online."<<endl;
        }
    }
    cout<<endl<<endl;
    cout<<endl;

	akhir:
		textcolor(1);
	cout<<" Apakah Anda Ingin Mengulang Proses Diagnosa Tingkat Kecanduan Game Online ini ? [y/n]"<<endl;
	cin>>ulang;
	cout<<endl<<endl;
	if (ulang=='y'||ulang=='Y')
	{
		goto mulai;
	}
	else if (ulang=='n'||ulang=='N')
   {
   		textcolor(4);
		cout<<" ANDA TELAH KELUAR DARI SISTEM PAKAR DIAGNOSA TINGKAT KECANDUAN GAME ONLINE. TERIMA KASIH."<<endl;
   }
   else
   {
   	    cout<<" MAAF ANDA MEMASUKKAN HURUF YANG SALAH, SILAHKAN COBA LAGI."<<endl;
   	    cout<<endl;
   	    goto akhir;
   	    system("cls");
   }
}


