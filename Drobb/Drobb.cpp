

#include <iostream>
using namespace std;
class Drob {
    int chesl;
    int znam;
    int sum;
    
public:
    Drob(int x, int y) {
        chesl = x;
        znam = y;
    }
    void Ssumma(Drob sum) {
        this->sum = chesl + sum.chesl;
        cout << "First drob: " << this->sum << endl;
        this->sum = znam + sum.znam;
        cout << "Second drob: " << this->sum << endl;
    }
    void Summof2dorbs(Drob sum) {
        this->sum = chesl + sum.znam + sum.chesl + znam;
        cout << "Summ of 2 drobs: " << this->sum << endl;
    }
    void Minus(Drob minus) {
        sum = chesl - minus.chesl;
        cout << "Minus first drob: " << sum << endl;
        sum = znam - minus.znam;
        cout << "Minus second drob: " << sum << endl;
    }
    void MinusOf2drobs(Drob minus) {
        sum = chesl + minus.znam - minus.chesl + znam;
        cout << "Minus of 2 drobs: " << sum << endl;
    }
    void multiplication(Drob mult) {
        sum = chesl * mult.chesl;
        cout << "multiplication first drob: " << sum << endl;
        sum = znam * mult.znam;
        cout << "multiplication second drob: " << sum << endl;
    }
    void mult2drobs(Drob mult) {
        sum = chesl + mult.znam * mult.chesl + znam;
        cout << "multiplication of drobs: " << sum << endl;
    }
    void delen(Drob del) {
        sum = chesl / del.chesl;
        cout << "Divison first drob: " << sum << endl;
        sum = znam / del.znam;
        cout << "Second drob: " << sum;

    }
    void delen2drobs(Drob del) {
        sum = chesl + del.znam / del.chesl + znam;
        cout << "2 drobs: " << sum << endl;
    }
};
class Contacts {
    char* fi;
    int workphone;
    int homephone;
    int phone;
    char* info;

public:
    Contacts() {
        fi = nullptr;
        workphone = 0;
        homephone = 0;
        phone = 0;
        info = nullptr;
    }
    Contacts(const char* name, int work, int home, int phone, const char* inf) {
        fi = new char[strlen(name) + 1];
        strcpy_s(fi, strlen(name) + 1, name);
        workphone = work;
        homephone = home;
        this->phone = phone;
        info = new char[strlen(inf) + 1];
        strcpy_s(info, strlen(inf) + 1, inf);
    }
    void Check() {
        if (fi != nullptr) {
            delete[] fi;
        }
    }
    void Cheak() {
        if (info != nullptr) {
            delete[] info;
        }
    }
    void Cout() {
        if (fi == nullptr && info == nullptr) {
            cout << "Nothing" << endl;
            return;
        }
        cout << "Fio: " << fi << "\n";
        cout << "Workphone: " << workphone << "\n";
        cout << "Homephone: " << homephone << "\n";
        cout << "Contact phone: " << phone << "\n";
        cout << "Information: " << info << "\n";
    }

    ~Contacts() {

    }

};

void Print(Contacts* fio) {
    for (int i = 0; i < 3; i++) {
        fio[i].Cout();
    }
}
void addStudents(Contacts ar[], int size) {
    Contacts* arr = new Contacts[size + 1];

    for (int i = 0; i < size; i++) {
        arr[i] = ar[i];
    }
    arr[size] = Contacts("Ilushenko, Nikita, Andreevich", 453535, 654654654, 456465, "Best student");
    for (int i = 0; i < size + 1; i++) {
        arr[i].Cout();
    }

    delete[] arr;
}
void deleteStudents(Contacts ar[], int size, int delcont) {
    Contacts* arr = new Contacts[size - 1];

    for (int i = 0; i < size; i++) {
        arr[i] = ar[i];
    }
    int i = delcont + 1;
    while (i < size) {
        arr[i - 1] = ar[i];
        i++;
    }
    for (int i = 0; i < size ; i++) {
        arr[i].Cout();
    }
    delete[] arr;
    size--;
}


int main()
{
    //N1!
    Drob obj(9, 8);
    Drob obj2(1, 7);
    /*obj.Ssumma(obj2);
    obj.Summof2dorbs(obj2);
    obj.Minus(obj2);
    obj.MinusOf2drobs(obj2);
    obj.multiplication(obj2);
    obj.mult2drobs(obj2);
    obj.delen(obj2);
    obj.delen2drobs(obj2);*/
    //N2
    int size = 3;
    int delcont = 1;
    Contacts* fio = new  Contacts[size];
    fio[0] = Contacts("Ivanov, Ivan, Ivanovich ", 654646456, 232312342, 34897789, "Graphic designer for 10 years");
    fio[1] = Contacts("Pertov, Anatoly, Sergeevich ", 658465409, 43278974, 342423, "Engineer in Microsoft");
    fio[2] = Contacts("Lyakhovetskyi, Leonid, Leonidovich ", 34243243, 9650806, 214124, "Best mentor in computer academy IT-STEP");
    Print(fio);
    addStudents(fio, size);
    deleteStudents(fio, size, delcont);
    delete[] fio;

}


