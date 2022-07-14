#include <iostream>
#include<cstdlib>
#include <windows.h>
#include<conio.h>
using namespace std;
///||||||1111111111111111111111111111111111111111111111111111111111CLASE COLA2|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
class nodo3
{
      private:
              int id;
              nodo3 *siguiente;
      public:
             nodo3(int);
             void set_id2(int nom){this->id=nom;}
             int get_id2(){return id;}
             void set_siguiente2(nodo3 *x){siguiente=x;}
             nodo3* siguiente_nodo3(){return siguiente;}
};

class cola3
{
      private:
              nodo3 *cabeza;
              int tamanio;
      public:
             cola3();
             bool es_vacia();
             void incluir_nodo3(nodo3 *);
             bool eliminar_nodo3();
             int mostrar_cola3(int);
             nodo3* crear_nodo3(int);
};

/*cola3.cpp*/

nodo3::nodo3(int nom)
{
    siguiente=NULL;
    this ->id=nom;
}

cola3::cola3()
{
     cabeza=NULL;
     tamanio=0;
}
bool cola3::es_vacia()
{
         if(cabeza==NULL){return true;}
         else {return false;}
}

void cola3::incluir_nodo3(nodo3 *x)
{
         if(es_vacia()==true)
         {
              cabeza=x;
              tamanio++;
         }
         else
         {
             nodo3 *P=cabeza;
             while(P->siguiente_nodo3()!=NULL)
             {
                  P=P->siguiente_nodo3();
             }
             P->set_siguiente2(x);
             tamanio++;
         }
}

bool cola3::eliminar_nodo3()
{
         if(es_vacia()==true){return false;}
         else
         {
             nodo3 *p=cabeza;
             cabeza=cabeza->siguiente_nodo3();
             tamanio--;
             delete p;
             return true;
         }
}

int cola3::mostrar_cola3(int i)
{
         if(es_vacia()==true){cout<<"lista vacia"<<endl;}
         else
         {
             nodo3 *P=cabeza;
             for(int j=0;j<i;j++)
             {
                 P=P->siguiente_nodo3();
             }
             return P->get_id2();
         }
}

nodo3* cola3::crear_nodo3(int nom)
{
         nodo3 *P=NULL;
         P=new nodo3(nom);
         if(P==NULL)
         {
                    throw("no hay memoria suficiente");
         }
         return P;
}
///|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||CLASE PILA||||||||||||||||||||||||||||||||||||||||||||||||||
class nodo1
{
   private:
                int id;
               nodo1 *next;
   public:
             nodo1(int);
             nodo1 *get_next(){return next;}
             int get_id(){return id;}
             void set_next(nodo1 *x){next=x;}
};

class pila_
{
      private:
              nodo1 *pila;
              nodo1 *pila_aux;
              int tam;
      public:
             pila_();
             bool es_vacia();
             void limpiar_pila(){pila=NULL;}
             void apilar(int);
             int desapilar();
             void Imprimir_nodo1();
};

/* pila.cpp */

nodo1::nodo1(int n)
{
      id=n;
      next=NULL;
}

pila_::pila_()
{
            pila=NULL;
            pila_aux=NULL;
            tam=0;
}

bool pila_::es_vacia()
{
     if(pila==NULL){ return true;}
     else {return false;}
}
void pila_::apilar(int Dato)
{
     nodo1 *ptrNuevo;
     ptrNuevo = new nodo1(Dato);
     if (es_vacia())
     {
                     pila = ptrNuevo;
                     tam++;
     }
     else
     {
         ptrNuevo->set_next(pila);
         pila = ptrNuevo;
         tam++;
     }
}

int  pila_::desapilar()
{
    int num;
     if (es_vacia()) { cout<<"La pila esta vacia!!!";}
     else
     {
         num=pila->get_id();
         pila = pila->get_next();
         tam--;
         return num;
     }
}

void pila_::Imprimir_nodo1()
{
     if(es_vacia()){cout<<"La pila esta vacia!!!"<<endl;}
     else
     {
          pila_aux=pila;
          int pos=tam;
          while (pila_aux->get_next()!=NULL)
          {
                cout<<" posicion: "<<pos<<" dato: "<<pila_aux->get_id()<<endl;
                pila_aux = pila_aux->get_next();
                pos--;
          }
          cout<<" posicion: "<<pos<<" dato: "<<pila_aux->get_id()<<endl;
     }
}


//====================================CLASE DEL PRIMERA COLA Y NODO===========================================================================
class nodo
{
      private:
              int id,cont,time;
              string nom,destino,hora,fecha;
              nodo *siguiente;

      public:
             nodo(int,string,string,string,string,int);
             void set_dato(int d){id=d;}
             int get_dato(){return id;}
             void set_time(int d){time=d;}
             int get_time(){return time;}
             void set_nom(string nom){this->nom=nom;}
             string get_nom(){return nom;}
             void set_destino(string destino){this->destino=destino;}
             string get_destino(){return destino;}
             void set_fecha(string fecha){this->fecha=fecha;}
             string get_fecha(){return fecha;}
             void set_hora(string hora){this->hora=hora;}
             string get_hora(){return hora;}

             void set_siguiente(nodo *x){siguiente=x;}
             nodo* siguiente_nodo(){return siguiente;}
};
class cola
{
      private:
              nodo *cabeza;
              int cont;
      public:
             cola();
             void set_dato(int d){cont=d;}
             int get_dato(){return cont;}
             bool es_vacia();
             void incluir_nodo(nodo *);
             void mostrar_cola();
             void eliminar_nodo();
             nodo* crear_nodo(int,string,string,string,string,int);
             void menu();
             void anime(int);
};
nodo::nodo(int d,string nom, string destino, string fecha ,string hora,int time)
{
    siguiente=NULL;
    id=d;
    this ->nom=nom;
    this ->destino=destino;
    this->hora=hora;
    this->fecha=fecha;
    this->cont=0;
    this->time=time;
}///////////////////////
//Prototipos
void maquina();
void maquina1();
void maquina2();
void maquina3();
void maquina4();
void maquina5();
void maquina6();
void maquina7();
void maquina8();
void maquina9();
void maquina10();
void avion();
void anime_avion();
void avion1();
void anime1();
void anime2();
void anime3();
void taxi1();
void taxi2();
void taxi3();
/////////////////////////////
void Cordenada(int x,int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y= y;
	SetConsoleCursorPosition(hcon,dwPos);

}
cola::cola()
{
     cabeza=NULL;
     cont=0;
}
bool cola::es_vacia()
{
         if(cabeza==NULL){return true;}
        else {return false;}
}
void cola::incluir_nodo(nodo *x)
{
         if(es_vacia()==true)
         {
              cabeza=x;
              cont++;
         }
         else
         {
             nodo *P=cabeza;
             while(P->siguiente_nodo()!=NULL)
             {
                  P=P->siguiente_nodo();
             }
             P->set_siguiente(x);
             cont++;
         }
}
void cola::eliminar_nodo(){
             nodo *p=cabeza;
             cabeza=cabeza->siguiente_nodo();
             cont--;
             delete p;
}
void cola::mostrar_cola()
{
         if(es_vacia()==true){cout<<"lista vacia"<<endl;}
         else
         {
             nodo *P=cabeza;
                 Cordenada(70,1);cout<<"nombre:  "<<P->get_nom()<<endl;
                 Cordenada(70,2);cout<<"id:      "<<P->get_dato()<<endl;
                 Cordenada(70,3);cout<<"destino: "<<P->get_destino()<<endl;
                 Cordenada(70,4); cout<<"Fecha:  "<<P->get_fecha()<<endl;
                 Cordenada(70,5);cout<<"Hora:    "<<P->get_hora()<<endl;
                 Cordenada(70,6);cout<<"Tiempo:  "<<P->get_time()<<endl;
            }
}
nodo* cola::crear_nodo(int x,string nom, string  destino, string fecha, string hora,int time)
{
         nodo *P=NULL;
         P=new nodo(x,nom,destino,hora,fecha,time);
         if(P==NULL)
         {
                    throw("no hay memoria suficiente");
         }
         return P;
}
void cola::menu(){

    pila_ j;
    cola3 l;
    string nom1,destino1,hora1,fecha1;
int num=0,id,time1,nom=0,ContAB,cont1=18;

   nodo* pun;
   nodo3* nod;
                    time1=rand()%4;
                    id=rand()%100;
                    pun=crear_nodo(id,"Jesus","A","20/10/00","10:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Pedro","A","20/10/00","11:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Zara","A","20/10/00","12:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Jose","B","20/10/00","9:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Luis","B","20/10/00","7:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Daniel","B","20/10/00","7:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Petra","A","20/10/00","7:30",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Juana","A","20/10/00","8:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Juan","A","20/10/00","9:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Daniela","B","20/10/00","7:20",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Jorge","B","20/10/00","2:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Gared","B","20/10/00","13:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Isaias","A","20/10/00","6:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Hector","A","20/10/00","9:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Fernanda","A","20/10/00","15:00",time1);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Monse","A","20/10/00","16:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Iris","B","20/10/00","16:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Melani","B","20/10/00","18:00",time1);
                    incluir_nodo(pun);
                    time1=rand()%4;
                     id=rand()%100;
                    pun=crear_nodo(id,"Francisco","B","20/10/00","18:00",time1);
                    incluir_nodo(pun);
                    nodo* P=cabeza;
                    //nodo1* O=pila;
                    //nodo2* C=cabeza;
                    //nodo3* A=cabeza

                    anime(0);
                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        P=P->siguiente_nodo();
                    }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);

                                                                ///i
                    if(P->get_time()==0){
                             j.apilar(P->get_dato());
                            eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{

                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(0);



                    if(P->get_time()==0){
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(1);


                    if(P->get_time()==0){
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(2);

                                                    ///
                    if(P->get_time()==0){
                             j.apilar(P->get_dato());
                            eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(2);


                    if(P->get_time()==0){
                             j.apilar(P->get_dato());
                            eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{

                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);

                    anime(3);

                                                            ///
                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    getch();
                    Cordenada(2,21);
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                       avion();
                     Cordenada(1,1);cout<<"AVION LLENO!!";
                    Sleep(1000);
                    system("cls");
                    anime_avion();
                    anime1();
                    anime2();
                    anime3();
                    Cordenada(70,3);cout<<"DESTINO A";
                    Cordenada(53,9);cout<<l.mostrar_cola3(0);
                      Cordenada(59,9);cout<<l.mostrar_cola3(1);
                        Cordenada(64,9);cout<<l.mostrar_cola3(2);
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                    Sleep(600);
                     taxi1();
                    taxi2();
                    taxi3();
                    Sleep(1000);
                    anime(3);
                    Cordenada(2,20);


                if(P->get_time()==0){
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(4);
                if(P->get_time()==0){
                    j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(5);

                    if(P->get_time()==0){                       ///
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(5);

                    if(P->get_time()==0){
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(6);

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(7);

                    if(P->get_time()==0){       ///
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(7);

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(8);

                    if(P->get_time()==0){           ///
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);

                    avion();
                    Cordenada(1,1);cout<<"AVION LLENO!!";
                    Sleep(1000);
                    system("cls");
                    anime_avion();
                    anime1();
                    anime2();
                    anime3();
                    Cordenada(70,3);cout<<"DESTINO B";
                    Cordenada(53,9);cout<<l.mostrar_cola3(0);
                      Cordenada(59,9);cout<<l.mostrar_cola3(1);
                        Cordenada(64,9);cout<<l.mostrar_cola3(2);
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                    Sleep(600);
                    taxi1();
                    taxi2();
                    taxi3();
                    Sleep(1000);
                    anime(8);

                    if(P->get_time()==0){
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(9);



                    if(P->get_time()==0){               ///
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(9);

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    anime(10);

                    if(P->get_time()==0){                   ///
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina10();


                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                   system("cls");
                    mostrar_cola();
                    maquina10();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                   system("cls");
                    mostrar_cola();
                    maquina10();


                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina10();

                    if(P->get_time()==0){                      ///
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    avion();
                     Cordenada(1,1);cout<<"AVION LLENO!!";
                     Sleep(600);
                    Sleep(1000);
                    system("cls");
                    anime_avion();
                    anime1();
                    anime2();
                    anime3();
                    Cordenada(70,3);cout<<"DESTINO A";
                   Cordenada(53,9);cout<<l.mostrar_cola3(0);
                      Cordenada(59,9);cout<<l.mostrar_cola3(1);
                        Cordenada(64,9);cout<<l.mostrar_cola3(2);
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        Sleep(600);
                        taxi1();
                    taxi2();
                    taxi3();
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina9();


                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina9();

                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina9();

                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina9();
                     if(P->get_time()==0){          ///
                         j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina8();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina8();

                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina8();

                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina8();

                     if(P->get_time()==0){                                                      ///
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina7();

                    if(P->get_time()==0){
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina7();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }

                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina7();
                    if(P->get_time()==0){                          ///
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    avion();
                    Cordenada(1,1);cout<<"AVION LLENO!!";
                    Sleep(600);
                    system("cls");
                    anime_avion();
                    anime1();
                    anime2();
                    anime3();
                    Cordenada(70,3);cout<<"DESTINO B";
                    Cordenada(53,9);cout<<l.mostrar_cola3(0);
                      Cordenada(59,9);cout<<l.mostrar_cola3(1);
                        Cordenada(64,9);cout<<l.mostrar_cola3(2);
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        Sleep(400);
                        taxi1();
                    taxi2();
                    taxi3();
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina6();

                    if(P->get_time()==0){   ///
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina5();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina5();

                    if(P->get_time()==0){                               ///
                    j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina4();

                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina4();

                     if(P->get_time()==0){                          ///
                         j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);

                    Cordenada(1,1);cout<<"AVION LLENO!!";
                    avion();
                    Sleep(600);
                    system("cls");
                    anime_avion();
                    anime1();
                    anime2();
                    anime3();
                    Cordenada(70,3);cout<<"DESTINO A";
                   Cordenada(53,9);cout<<"99";
                      Cordenada(59,9);cout<<l.mostrar_cola3(1);
                        Cordenada(64,9);cout<<l.mostrar_cola3(0);
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        Sleep(600);
                        taxi1();
                    taxi2();
                    taxi3();
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina3();

                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina3();

                     if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina3();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina3();

                    if(P->get_time()==0){                    ///
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina2();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina2();

                    if(P->get_time()==0){        ///
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina1();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina1();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina1();
                    if(P->get_time()==0){
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina1();

                    if(P->get_time()==0){
                            j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina1();
                    if(P->get_time()==0){           ///
                        j.apilar(P->get_dato());
                        eliminar_nodo();
                        P=P->siguiente_nodo();
                        }
                    else{
                         P->set_time(P->get_time()-1);
                    }
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                     nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);
                    nod=l.crear_nodo3(j.desapilar());
                    l.incluir_nodo3(nod);

                    Cordenada(1,1);cout<<"AVION LLENO!!";
                    avion();
                    Sleep(1000);
                    system("cls");

                    anime_avion();
                    anime1();
                    anime2();
                    anime3();
                    Cordenada(70,3);cout<<"DESTINO B";
                    Cordenada(53,9);cout<<"99";
                      Cordenada(59,9);cout<<l.mostrar_cola3(0);
                        Cordenada(64,9);cout<<l.mostrar_cola3(1);
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        l.eliminar_nodo3();
                        Sleep(600);
                        taxi1();
                    taxi2();
                    taxi3();

                    Sleep(1000);
                    system("cls");
                    mostrar_cola();
                    maquina();


    system("pause");
    system("cls");

}





//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7
void  cola::anime(int nom){
        int i=10,o=0,band=1;
    switch(nom){
            case 0:{
            while(band==1){
                if(o<6){
                mostrar_cola();
                maquina();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            mostrar_cola();
            maquina();
                    Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
                break;
        }
        case 1:{
                while(band==1){
                if(o<6){
                mostrar_cola();
                maquina1();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina1();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina1();
            mostrar_cola();
                    Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
                break;
        }
        case 2:{
             while(band==1){
                if(o<5){
                maquina2();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina2();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina2();
            mostrar_cola();
                    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
                break;
        }
 case 3:{
             while(band==1){
                if(o<5){
                maquina3();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina3();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina3();
            mostrar_cola();
                    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
                break;

        }
        case 4:{
        while(band==1){
                if(o<4){
                maquina4();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina4();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina4();
            mostrar_cola();
                    Cordenada(73,10);
                cout<<"( )";
                Cordenada(73,11);
                cout<<" !";
                Cordenada(73,12);
                cout<<" !";
                Cordenada(73,13);
                cout<<" |";
                Cordenada(73,14);
                cout<<" |";
                break;

        }
        case 5:{
        while(band==1){
                if(o<4){
                maquina5();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina5();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina5();
            mostrar_cola();
                    Cordenada(78,10);
                cout<<"( )";
                Cordenada(78,11);
                cout<<" !";
                Cordenada(78,12);
                cout<<" !";
                Cordenada(78,13);
                cout<<" |";
                Cordenada(78,14);
                cout<<" |";
                break;

        }
         case 6:{
        while(band==1){
                if(o<3){
                maquina6();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina6();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina6();
            mostrar_cola();
                    Cordenada(83,10);
                cout<<"( )";
                Cordenada(83,11);
                cout<<" !";
                Cordenada(83,12);
                cout<<" !";
                Cordenada(83,13);
                cout<<" |";
                Cordenada(83,14);
                cout<<" |";
                break;

        }
        case 7:{
        while(band==1){
                if(o<3){
                maquina7();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina7();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina7();
            mostrar_cola();
                    Cordenada(88,10);
                cout<<"( )";
                Cordenada(88,11);
                cout<<" !";
                Cordenada(88,12);
                cout<<" !";
                Cordenada(88,13);
                cout<<" |";
                Cordenada(88,14);
                cout<<" |";
                break;

        }
        case 8:{
        while(band==1){
                if(o<2){
                maquina8();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina8();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina8();
            mostrar_cola();
                    Cordenada(93,10);
                cout<<"( )";
                Cordenada(93,11);
                cout<<" !";
                Cordenada(93,12);
                cout<<" !";
                Cordenada(93,13);
                cout<<" |";
                Cordenada(93,14);
                cout<<" |";
                break;

        }
        case 9:{
        while(band==1){
                if(o<2){
                maquina9();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina9();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina9();
            mostrar_cola();
                    Cordenada(98,10);
                cout<<"( )";
                Cordenada(98,11);
                cout<<" !";
                Cordenada(98,12);
                cout<<" !";
                Cordenada(98,13);
                cout<<" |";
                Cordenada(98,14);
                cout<<" |";
                break;
        }
           case 10:{
        while(band==1){
                if(o<1){
                maquina10();
                mostrar_cola();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina10();
                 mostrar_cola();
                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina10();
            mostrar_cola();
                    Cordenada(103,10);
                cout<<"( )";
                Cordenada(103,11);
                cout<<" !";
                Cordenada(103,12);
                cout<<" !";
                Cordenada(103,13);
                cout<<" |";
                Cordenada(103,14);
                cout<<" |";
                break;

        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void maquina10(){
Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
     Cordenada(73,10);
                cout<<"( )";
                Cordenada(73,11);
                cout<<" !";
                Cordenada(73,12);
                cout<<" !";
                Cordenada(73,13);
                cout<<" |";
                Cordenada(73,14);
                cout<<" |";
    Cordenada(78,10);
                cout<<"( )";
                Cordenada(78,11);
                cout<<" !";
                Cordenada(78,12);
                cout<<" !";
                Cordenada(78,13);
                cout<<" |";
                Cordenada(78,14);
                cout<<" |";
    Cordenada(83,10);
                cout<<"( )";
                Cordenada(83,11);
                cout<<" !";
                Cordenada(83,12);
                cout<<" !";
                Cordenada(83,13);
                cout<<" |";
                Cordenada(83,14);
                cout<<" |";
     Cordenada(88,10);
                cout<<"( )";
                Cordenada(88,11);
                cout<<" !";
                Cordenada(88,12);
                cout<<" !";
                Cordenada(88,13);
                cout<<" |";
                Cordenada(88,14);
                cout<<" |";
    Cordenada(93,10);
                cout<<"( )";
                Cordenada(93,11);
                cout<<" !";
                Cordenada(93,12);
                cout<<" !";
                Cordenada(93,13);
                cout<<" |";
                Cordenada(93,14);
                cout<<" |";
    Cordenada(98,10);
                cout<<"( )";
                Cordenada(98,11);
                cout<<" !";
                Cordenada(98,12);
                cout<<" !";
                Cordenada(98,13);
                cout<<" |";
                Cordenada(98,14);
                cout<<" |";
}
void maquina9(){
Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
     Cordenada(73,10);
                cout<<"( )";
                Cordenada(73,11);
                cout<<" !";
                Cordenada(73,12);
                cout<<" !";
                Cordenada(73,13);
                cout<<" |";
                Cordenada(73,14);
                cout<<" |";
    Cordenada(78,10);
                cout<<"( )";
                Cordenada(78,11);
                cout<<" !";
                Cordenada(78,12);
                cout<<" !";
                Cordenada(78,13);
                cout<<" |";
                Cordenada(78,14);
                cout<<" |";
    Cordenada(83,10);
                cout<<"( )";
                Cordenada(83,11);
                cout<<" !";
                Cordenada(83,12);
                cout<<" !";
                Cordenada(83,13);
                cout<<" |";
                Cordenada(83,14);
                cout<<" |";
     Cordenada(88,10);
                cout<<"( )";
                Cordenada(88,11);
                cout<<" !";
                Cordenada(88,12);
                cout<<" !";
                Cordenada(88,13);
                cout<<" |";
                Cordenada(88,14);
                cout<<" |";
    Cordenada(93,10);
                cout<<"( )";
                Cordenada(93,11);
                cout<<" !";
                Cordenada(93,12);
                cout<<" !";
                Cordenada(93,13);
                cout<<" |";
                Cordenada(93,14);
                cout<<" |";
}

void maquina8(){
Cordenada(40,2);cout<<"|AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
     Cordenada(73,10);
                cout<<"( )";
                Cordenada(73,11);
                cout<<" !";
                Cordenada(73,12);
                cout<<" !";
                Cordenada(73,13);
                cout<<" |";
                Cordenada(73,14);
                cout<<" |";
    Cordenada(78,10);
                cout<<"( )";
                Cordenada(78,11);
                cout<<" !";
                Cordenada(78,12);
                cout<<" !";
                Cordenada(78,13);
                cout<<" |";
                Cordenada(78,14);
                cout<<" |";
    Cordenada(83,10);
                cout<<"( )";
                Cordenada(83,11);
                cout<<" !";
                Cordenada(83,12);
                cout<<" !";
                Cordenada(83,13);
                cout<<" |";
                Cordenada(83,14);
                cout<<" |";
     Cordenada(88,10);
                cout<<"( )";
                Cordenada(88,11);
                cout<<" !";
                Cordenada(88,12);
                cout<<" !";
                Cordenada(88,13);
                cout<<" |";
                Cordenada(88,14);
                cout<<" |";
}
void maquina7(){
Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
     Cordenada(73,10);
                cout<<"( )";
                Cordenada(73,11);
                cout<<" !";
                Cordenada(73,12);
                cout<<" !";
                Cordenada(73,13);
                cout<<" |";
                Cordenada(73,14);
                cout<<" |";
    Cordenada(78,10);
                cout<<"( )";
                Cordenada(78,11);
                cout<<" !";
                Cordenada(78,12);
                cout<<" !";
                Cordenada(78,13);
                cout<<" |";
                Cordenada(78,14);
                cout<<" |";
    Cordenada(83,10);
                cout<<"( )";
                Cordenada(83,11);
                cout<<" !";
                Cordenada(83,12);
                cout<<" !";
                Cordenada(83,13);
                cout<<" |";
                Cordenada(83,14);
                cout<<" |";
}

void maquina6(){
Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
     Cordenada(73,10);
                cout<<"( )";
                Cordenada(73,11);
                cout<<" !";
                Cordenada(73,12);
                cout<<" !";
                Cordenada(73,13);
                cout<<" |";
                Cordenada(73,14);
                cout<<" |";
    Cordenada(78,10);
                cout<<"( )";
                Cordenada(78,11);
                cout<<" !";
                Cordenada(78,12);
                cout<<" !";
                Cordenada(78,13);
                cout<<" |";
                Cordenada(78,14);
                cout<<" |";
}
void maquina5(){
Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
     Cordenada(73,10);
                cout<<"( )";
                Cordenada(73,11);
                cout<<" !";
                Cordenada(73,12);
                cout<<" !";
                Cordenada(73,13);
                cout<<" |";
                Cordenada(73,14);
                cout<<" |";
}
void maquina4(){
Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
    Cordenada(68,10);
                cout<<"( )";
                Cordenada(68,11);
                cout<<" !";
                Cordenada(68,12);
                cout<<" !";
                Cordenada(68,13);
                cout<<" |";
                Cordenada(68,14);
                cout<<" |";
}

void maquina3(){
     Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
}

void maquina2(){
 Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
   Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";

}
    void maquina1(){
         Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";

        Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
    }

void maquina(){
    Cordenada(40,2);cout<<"| AIRPORT";
    Cordenada(40,3);cout<<"|";
    Cordenada(40,4);cout<<"|";
    Cordenada(40,5);cout<<"|";
    Cordenada(40,6);cout<<"|";
    Cordenada(40,7);cout<<"|";
    Cordenada(40,8);cout<<"|";
      Cordenada(40,9);cout<<"|";
    Cordenada(40,10);cout<<"|";
    Cordenada(40,11);cout<<"|";
    Cordenada(40,12);cout<<"|";
  Cordenada(40,13);cout<<"|";
    Cordenada(40,14);cout<<"|";
    Cordenada(40,15);cout<<"|";
    Cordenada(41,15);cout<<"__________";
    Cordenada(50,2);cout<<"|";
    Cordenada(50,3);cout<<"|";
    Cordenada(50,4);cout<<"|";
    Cordenada(50,5);cout<<"|";
    Cordenada(50,6);cout<<"|";
    Cordenada(50,7);cout<<"|";
    Cordenada(50,8);cout<<"|";
      Cordenada(50,9);cout<<"|";
    Cordenada(50,10);cout<<"|";
    Cordenada(50,11);cout<<"|";
    Cordenada(50,12);cout<<"|";
  Cordenada(50,13);cout<<"|";
    Cordenada(50,14);cout<<"|";
    Cordenada(50,15);cout<<"|";
Cordenada(55,15);
cout<<"_   _   _   _   _   _   _   _   _   _   _   _   _   _   _   _";
}
void anime_avion(){
    for(int i=0;i<6;i++){

system("cls");
Cordenada(110,31-(i*4));cout<<"/_\\";
Cordenada(110,32-(i*4));cout<<"|o|";
Cordenada(110,33-(i*4));cout<<"|o|";
Cordenada(110,34-(i*4));cout<<"|o|";
Cordenada(110,35-(i*4));cout<<"|_|";
Cordenada(113,32-(i*4));cout<<"--->";
Cordenada(106,32-(i*4));cout<<"<---";
Cordenada(108,35-(i*4));cout<<"<<";
Cordenada(113,35-(i*4));cout<<">>";
Sleep(500);
    }
}

void avion(){
Cordenada(5,1);cout<<"/_\\";
Cordenada(5,2);cout<<"|o|";
Cordenada(5,3);cout<<"|o|";
Cordenada(5,4);cout<<"|o|";
Cordenada(5,5);cout<<"|_|";
Cordenada(8,2);cout<<"--->";
Cordenada(1,2);cout<<"<---";
Cordenada(3,5);cout<<"<<";
Cordenada(8,5);cout<<">>";
}
void avion1(){
Cordenada(5,1);cout<<"/_\\";
Cordenada(5,2);cout<<"| |";
Cordenada(5,3);cout<<"| |";
Cordenada(5,4);cout<<"| |";
Cordenada(5,5);cout<<"|_|";
Cordenada(8,2);cout<<"--->";
Cordenada(1,2);cout<<"<---";
Cordenada(3,5);cout<<"<<";
Cordenada(8,5);cout<<">>";
}
void anime1(){
    int band=1,o=0,i=10;
            while(band==1){
                if(o<6){
                maquina();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina();
                Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
                        maquina();
                    Cordenada(53,10);
                cout<<"( )";
                Cordenada(53,11);
                cout<<" !";
                Cordenada(53,12);
                cout<<" !";
                Cordenada(53,13);
                cout<<" |";
                Cordenada(53,14);
                cout<<" |";
        }
void anime2(){
    int band=1,o=0,i=10;
 while(band==1){
                if(o<6){

                maquina1();
                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina1();

                    Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina1();
                    Cordenada(58,10);
                cout<<"( )";
                Cordenada(58,11);
                cout<<" !";
                Cordenada(58,12);
                cout<<" !";
                Cordenada(58,13);
                cout<<" |";
                Cordenada(58,14);
                cout<<" |";
        }
        void anime3(){
            int band=1,o=0,i=10;
                while(band==1){
                if(o<5){
                maquina2();

                Cordenada(115-(i*o),10);
                cout<<"( )";
                Cordenada(115-(i*o),11);
                cout<<" !";
                Cordenada(115-(i*o),12);
                cout<<" !";
                Cordenada(115-(i*o),13);
                cout<<" |";
                Cordenada(115-(i*o),14);
                cout<<" |";
                Cordenada(117-(i*o),13);
                cout<<"\\";
                Cordenada(118-(i*o),14);
                cout<<"\\";
                Sleep(500);
                system("cls");
                //////////////////////////////////////////
                 maquina2();
        Cordenada(110-(i*o),10);
                cout<<"( )";
                Cordenada(110-(i*o),11);
                cout<<" !";
                Cordenada(110-(i*o),12);
                cout<<" !";
                Cordenada(110-(i*o),13);
                cout<<" |";
                Cordenada(110-(i*o),14);
                cout<<" |";
                Sleep(500);
                system("cls");
                o++;
                        }
                    else
                        band=0;
            }
            maquina2();
                    Cordenada(63,10);
                cout<<"( )";
                Cordenada(63,11);
                cout<<" !";
                Cordenada(63,12);
                cout<<" !";
                Cordenada(63,13);
                cout<<" |";
                Cordenada(63,14);
                cout<<" |";
        }

void taxi1(){
    for(int i=0;i<2;i++){
    Cordenada(31,1+(i*5));  cout<<"*______*";
    Cordenada(31,2+(i*5));  cout<<"|      |";
    Cordenada(30,3+(i*5)); cout<<"( )____( )";
    Cordenada(31,4+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,5+(i*5)); cout<<"( )||||( )";
    Cordenada(31,6+(i*5));  cout<<"|__  __|";
    Cordenada(31,7+(i*5)); cout<<"/|\\  /|\\";
    maquina3();
    Sleep(400);
    system("cls");
    Cordenada(31,6+(i*5));  cout<<"*______*";
    Cordenada(31,7+(i*5));  cout<<"|      |";
    Cordenada(30,8+(i*5)); cout<<"( )____( )";
    Cordenada(31,9+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,10+(i*5)); cout<<"( )||||( )";
    Cordenada(31,11+(i*5));  cout<<"|__  __|";
    maquina3();
     if(i==1){
        getch();
    }
    Sleep(400);
    system("cls");

    }
    for(int i=2;i<5;i++){
    Cordenada(31,1+(i*5));  cout<<"*______*";
    Cordenada(31,2+(i*5));  cout<<"|      |";
    Cordenada(30,3+(i*5)); cout<<"( )____( )";
    Cordenada(31,4+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,5+(i*5)); cout<<"( )||||( )";
    Cordenada(31,6+(i*5));  cout<<"|__  __|";
    Cordenada(31,7+(i*5)); cout<<"/|\\  /|\\";
    maquina2();
    Sleep(400);
    system("cls");
    Cordenada(31,6+(i*5));  cout<<"*______*";
    Cordenada(31,7+(i*5));  cout<<"|      |";
    Cordenada(30,8+(i*5)); cout<<"( )____( )";
    Cordenada(31,9+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,10+(i*5)); cout<<"( )||||( )";
    Cordenada(31,11+(i*5));  cout<<"|__  __|";
    maquina2();
    system("cls");
}
maquina2();
}
void taxi2(){
    for(int i=0;i<2;i++){
    Cordenada(31,1+(i*5));  cout<<"*______*";
    Cordenada(31,2+(i*5));  cout<<"|      |";
    Cordenada(30,3+(i*5)); cout<<"( )____( )";
    Cordenada(31,4+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,5+(i*5)); cout<<"( )||||( )";
    Cordenada(31,6+(i*5));  cout<<"|__  __|";
    Cordenada(31,7+(i*5)); cout<<"/|\\  /|\\";
    maquina2();
    Sleep(400);
    system("cls");
    Cordenada(31,6+(i*5));  cout<<"*______*";
    Cordenada(31,7+(i*5));  cout<<"|      |";
    Cordenada(30,8+(i*5)); cout<<"( )____( )";
    Cordenada(31,9+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,10+(i*5)); cout<<"( )||||( )";
    Cordenada(31,11+(i*5));  cout<<"|__  __|";
    maquina2();
     if(i==1){
        getch();
    }
    Sleep(400);
    system("cls");

    }
    for(int i=2;i<5;i++){
    Cordenada(31,1+(i*5));  cout<<"*______*";
    Cordenada(31,2+(i*5));  cout<<"|      |";
    Cordenada(30,3+(i*5)); cout<<"( )____( )";
    Cordenada(31,4+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,5+(i*5)); cout<<"( )||||( )";
    Cordenada(31,6+(i*5));  cout<<"|__  __|";
    Cordenada(31,7+(i*5)); cout<<"/|\\  /|\\";
    maquina1();
    Sleep(400);
    system("cls");
    Cordenada(31,6+(i*5));  cout<<"*______*";
    Cordenada(31,7+(i*5));  cout<<"|      |";
    Cordenada(30,8+(i*5)); cout<<"( )____( )";
    Cordenada(31,9+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,10+(i*5)); cout<<"( )||||( )";
    Cordenada(31,11+(i*5));  cout<<"|__  __|";
    maquina1();
    system("cls");
}
maquina1();
}

void taxi3(){
    for(int i=0;i<2;i++){
    Cordenada(31,1+(i*5));  cout<<"*______*";
    Cordenada(31,2+(i*5));  cout<<"|      |";
    Cordenada(30,3+(i*5)); cout<<"( )____( )";
    Cordenada(31,4+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,5+(i*5)); cout<<"( )||||( )";
    Cordenada(31,6+(i*5));  cout<<"|__  __|";
    Cordenada(31,7+(i*5)); cout<<"/|\\  /|\\";
    maquina1();
    Sleep(400);
    system("cls");
    Cordenada(31,6+(i*5));  cout<<"*______*";
    Cordenada(31,7+(i*5));  cout<<"|      |";
    Cordenada(30,8+(i*5)); cout<<"( )____( )";
    Cordenada(31,9+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,10+(i*5)); cout<<"( )||||( )";
    Cordenada(31,11+(i*5));  cout<<"|__  __|";
    maquina1();
     if(i==1){
        getch();
    }
    Sleep(400);
    system("cls");

    }
    for(int i=2;i<5;i++){
    Cordenada(31,1+(i*5));  cout<<"*______*";
    Cordenada(31,2+(i*5));  cout<<"|      |";
    Cordenada(30,3+(i*5)); cout<<"( )____( )";
    Cordenada(31,4+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,5+(i*5)); cout<<"( )||||( )";
    Cordenada(31,6+(i*5));  cout<<"|__  __|";
    Cordenada(31,7+(i*5)); cout<<"/|\\  /|\\";
    maquina();
    Sleep(400);
    system("cls");
    Cordenada(31,6+(i*5));  cout<<"*______*";
    Cordenada(31,7+(i*5));  cout<<"|      |";
    Cordenada(30,8+(i*5)); cout<<"( )____( )";
    Cordenada(31,9+(i*5));  cout<<"|/TAXI\\|";
    Cordenada(30,10+(i*5)); cout<<"( )||||( )";
    Cordenada(31,11+(i*5));  cout<<"|__  __|";
    maquina();
    system("cls");
}
maquina();
}

int main(){
cola p;
p.menu();
return 0;
}
