
#include <iostream>
#include <math.h>
using namespace std;

class Etudiant {
    private :
    int matricule;
    string nom;
    int nbrNotes;
    double tabNotes[];
    public:
    Etudiant() {
        matricule = 0;
        nom = "";
        nbrNotes = 0;
    }
    Etudiant(int m, string n, int nbr) {
        matricule = m;
        nom = n;
        nbrNotes = nbr;
    }
    ~Etudiant() {
        matricule = 0;
        nom = "";
        nbrNotes = 0;
    }
    Etudiant(const Etudiant& e) {
        matricule = e.matricule;
        nom = e.nom;
        nbrNotes = e.nbrNotes;
    }
    void setMatricule(int m) {
        matricule = m;
    }
    void setmNom(string n) {
        nom = n;
    }
    void setNbrNotes(int n) {
        nbrNotes = n;
    }
    int getMatricule() {
        return matricule;
    }
    string getNom() {
        return nom;
    }
    int getNbrNotes() {
        return nbrNotes;
    }
    void saisie() {
        for(int i = 0; i<nbrNotes; i++) {
            cout<<"Enter la note "<<i+1<<" : ";
            cin>>tabNotes[i];
        }
    }
    void affichage() {
        for(int i = 0; i<nbrNotes; i++) {
            cout<<"la note : "<<i+1<<" = "<<tabNotes[i]<<endl;
        }
    }
    float moyenne() {
        double s=0;
        for(int i = 0; i<nbrNotes; i++) {
            s+=tabNotes[i];
        }
        return s/nbrNotes;
    }
    bool admis() {
        if(moyenne()>=10) {
            return true;
        } else {
            return false;
        }
    }
 
    
};
bool comparer(Etudiant e1, Etudiant e2) {
    if(e1.moyenne() == e2.moyenne()) {
        return true;
    }else {
        return false;
    }
}
int main(){
    Etudiant e1(1,"Ibrahim",5);
    Etudiant e2(2,"Yassin",5);
    cout<<"Entrer les notes de "<<e1.getNom()<<"------"<<endl;
    e1.saisie();
    cout<<"les notes de "<<e1.getNom()<<"-------------"<<endl;
    e1.affichage();
    cout<<"Entrer les notes de "<<e2.getNom()<<"------"<<endl;
    e2.saisie();
    cout<<"les notes de "<<e1.getNom()<<"-------------"<<endl;
    e2.affichage();
    //moyenne
    cout<<"moyenne : \n";
    cout<<e1.getNom()<<" : "<<e1.moyenne()<<endl;
    cout<<e2.getNom()<<" : "<<e2.moyenne()<<endl;
    //admis ou non
    if(e1.admis()) {
        cout<<e1.getNom()<<" : admis"<<endl;

    } else {
        cout<<e1.getNom()<<" : non admis"<<endl;

    }if(e2.admis()) {
        cout<<e2.getNom()<<" : admis"<<endl;
        
    } else {
        cout<<e2.getNom()<<" : non admis"<<endl;
        
    }

    
    // comparer
    if(comparer(e1, e2)) {
        cout<<"la moyenne de "<<e1.getNom()<<" = la moyenne de "<<e2.getNom()<<endl;
    } else {
        cout<<"la moyenne de "<<e1.getNom()<<" != la moyenne de "<<e2.getNom()<<endl;

    }

    
    
    

}

