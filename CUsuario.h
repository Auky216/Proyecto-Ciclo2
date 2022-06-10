#include "iostream"
#include "fstream"

using namespace std;

class CUsuario{
private:
    string usuario;
    string contraseña;
public:
    CUsuario(){};
    CUsuario(string _usuario,string _contraseña){
        this->usuario = _usuario;
        this->contraseña = _contraseña;
    }

    void Verificar_Usuario(){
        ifstream archivo_txt;

        archivo_txt.open("Usuarios.txt",ios::in);
        int cont = 0;

        while (!archivo_txt.eof()){

        }

    }

};




/*void menu1(){
    cout<<"−−−−−BIENVENIDO A LA BATALLA NAVAL−−−−−"<<endl;
    cout<<"Selecciones una de las siguientes opciones :"<<endl;
    cout<<"1. Registrar Jugador 1"<<endl;
    cout<<"2. Registrar Jugador 2"<<endl;
    cout<<"3. Crear tablero"<<endl;
    cout<<"4. Visualizar tablero"<<endl;
    cout<<"5. Inciar Batalla Naval"<<endl;
}*/