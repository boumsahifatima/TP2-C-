#include <iostream>
#include <string>

using namespace std;

class projet
{
private:
    string nom;
    int duree;
    float budget;
public:
    constructeur1();
    constructeur2(string nom,int duree,float budget);
    constructeur3(const projet&p);
    void afficher();
};

projet::constructeur1()
{
    this->nom="sans nom";
    this->duree=0;
    this->budget=0.0;
}

projet::constructeur2(string n,int d,float b)
{
    this->nom=n;
    this->duree=d;
    this->budget=b;
}
projet::constructeur3(projet&p)
{
    this->nom=p.nom;
    this->duree=p.duree;
    this->budget=p.budget;
}
void projet::afficher(){
    cout<<"projet :"<<nom<< "duree : "<<duree<< "budget :"<< budget<<endl;
}


int main()
{
    
    return 0;
}
