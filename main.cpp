#include "CUsuario.h"

using namespace std;

void Verificar_Usuario(string _usuario){
    ifstream archivo_txt;
    string texto;
    string contraseña;
    archivo_txt.open("Usuarios.txt",ios::in);

    while (!archivo_txt.eof()){

        getline(archivo_txt,texto);

        if(!texto.find(_usuario)){
            cout<<"Se encuentra"<<endl;
            int tamaño_string_texto = texto.size();
            int posicion_usuario = texto.find(_usuario);
            contraseña = texto.substr(texto.find("-->")+3,tamaño_string_texto-1);
            cout<<"Usuario: "<<_usuario<<endl;
            cout<<"Password: "<<contraseña<<endl;
            break;
        }
        else{
            cout<<"No se encuentra"<<endl;

        }
    }

    archivo_txt.close();

}

void Agregar_Usuario(){
    string _usuario;
    ofstream archivo_txt;
    string contraseña;
    cout<<"Usuario: ";cin>>_usuario;
    cout<<"Password: ";cin>>contraseña;

    archivo_txt.open("Usuarios.txt",ios::app);
    archivo_txt<<"\n"<<_usuario<<"-->"<<contraseña;
    archivo_txt.close();

}
int main(){
    string usuario;
    string usuario2;
    cin>>usuario;
    Verificar_Usuario(usuario);
    Agregar_Usuario();



}