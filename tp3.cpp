
#include <iostream>
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
            cout<<"la note : "<<i+1<<" = "<<tabNotes[i];
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
   
}

