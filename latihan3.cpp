#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status (double c){
    if (c >= 60)
        return "lulus";
    else
        return "gagal";
}
string status2(double rata,double nil){
    if (rata >= 60 || nil >= 70)
        return "lulus";
    else
        return "gagal";
}
int main (){
    double niLM,nilB;
    cout << "Masukan nilai Matematika = ";
    cin >> niLM;
    cout << "Masukan nilai Bahasa Indonesia = ";
    cin >> nilB;
    cout << "status kelulusan = " << status(rerata(niLM,nilB));
    cout << "\nstatus kelulusan ke 2 = " << status(rerata(niLM,nilB));
    return 0;
#
}