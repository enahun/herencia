#include <iostream>
#include <cstring>
using namespace std;
class Vehiculo
{
 public:
  Vehiculo(int, string);
  void setPasajeros(int);
  void mostrarPasajeros(void);
  void setDestino(string);
  void mostrarDestino(void);
 private:
  int pasajeros;
  string destino;
};

class Terrestre : public Vehiculo {
 public:
  Terrestre(int,string,float);
  void setMillaje(float);
  void mostrarMillaje(void);
 private:
  float millaje;
};

class Aereo : public Terrestre {
 public:
  Aereo(int,string, float,string);
  void setClase(string);
  void mostrarClase(void);
 private:
  string clase;
};

class Maritimo : public Aereo {
 public:
  Maritimo(int,string, float,string,int);
  void setEscalas(int);
  void mostrarEscalas(void);
 private:
  int escalas;
};


Vehiculo::Vehiculo(int p, string d){
  setPasajeros(p);
  setDestino(d);  
}
void Vehiculo::setPasajeros(int p) {pasajeros = p;}
void Vehiculo::mostrarPasajeros(void){ cout << "Pasajeros: "<< pasajeros << endl;}
void Vehiculo::setDestino(string d){destino=d;}
void Vehiculo::mostrarDestino(void){cout << "Destino: " << destino << endl;}

Terrestre::Terrestre(int p,string d,float m):Vehiculo(p,d){
setPasajeros(p);
  setDestino(d);  
  setMillaje(m);
}
void Terrestre::setMillaje(float m){ millaje = m; }
void Terrestre::mostrarMillaje(void){ cout << "Distancia : " << millaje <<"KM"<< endl;}


Aereo::Aereo(int p,string d,float m,string c):Terrestre(p,d,m){
  setPasajeros(p);
  setDestino(d);  
  setMillaje(m);
  setClase(c);
}
void Aereo::setClase( string c) {clase=c;}
void Aereo::mostrarClase(void) { cout << "Clase :"<< clase << endl; }

Maritimo::Maritimo(int p,string d,float m,string c,int e):Aereo(p,d,m,c){
 setPasajeros(p);
  setDestino(d);  
  setMillaje(m);
  setClase(c);
  setEscalas(e);
}
void Maritimo::setEscalas(int e) { escalas = e; }
void Maritimo::mostrarEscalas(void) { cout << "Cantidad de escalas: " << escalas << endl; }

int main()
{
 
  Terrestre t (5,"Ruinas de Copan", 5457);
  cout << "********************" << endl;
  cout << "Terrestre" << endl;
  t.mostrarDestino();
  t.mostrarPasajeros();
  t.mostrarMillaje();
  
  Aereo a(10,"Choluteca",140,"Primera");
  cout << "********************" << endl;
  cout << "Aereo" << endl;
  a.mostrarDestino();
  a.mostrarPasajeros();
  a.mostrarClase();
  a.mostrarMillaje();
  
  Maritimo m(10,"Cancun",1200,"Basica",3);
  cout << "********************" << endl;
  cout << "Maritimo" << endl;
  m.mostrarDestino();
  m.mostrarEscalas();
  m.mostrarClase();
  m.mostrarMillaje();
  m.mostrarPasajeros();

  

  return 0;
}