#include <iostream> 
#include <string> //string types
using namespace std;

struct Persondata{
    int age, years_worked, sex_gender;
    float salary;
    string name;

};

void is_jubiled(Persondata show_jub);

int main(void){

    Persondata p1;
    cout << "Ingrese nombre: "; cin >> p1.name;
    cout << "Ingrese edad: "; cin >> p1.age;
    cout << "Ingrese años trabajados: "; cin >> p1.years_worked;
    cout << "Ingrese su salario: "; cin >> p1.salary; 
    cout << "Ingrese '1' hombre o '2' mujer: "; cin >> p1.sex_gender;

    is_jubiled(p1);

    return 0;
}

void is_jubiled(Persondata show_jub){

    if (show_jub.sex_gender == 1){
    if (show_jub.age >= 60 && show_jub.years_worked >= 25){
        cout << show_jub.name << " cumple los requisitos para jubilacion" << endl;

    }
    else{
        cout << "Aun no cumple los requisitos para jubilacion: 25 anios laborados y tener 60 anios de edad." << endl;
    }
    
    }
    else if(show_jub.sex_gender == 2){
        if (show_jub.age >= 55 && show_jub.years_worked >= 25){
            cout << show_jub.name << " cumple los requisitos para jubilacion" << endl;
        }
        else{
            cout << "Aun no cumple los requisitos para jubilacion: 25 anios laborados y tener 55 anios de edad" << endl;
        }
    }
}