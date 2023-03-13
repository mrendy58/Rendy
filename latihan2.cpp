#include <iostream>
using namespace std;

double rerata(double a,double b){
    return (a+b)/2;
}

string status(double c){
    if (c >= 60)
        return "lulus";
    else
        return "gagal";
}

int main (){
    double niLM,nilB;
    //double rata;
    //string st;
    cout << "Masukan nilai Matematika = ";
    cin >> niLM;
    cout << "Masukan nilai Bahasa Indonesia = ";
    cin >> nilB;
    //rata = rerata(nilM,nilB);
    //st = status (rata);
    //cout << "status kelulusan = " << st;
    //cout << "status kelulusan = " << status(rata);
    cout << "status kelulusan = " << status(rerata(niLM,nilB));
    return 0;

}