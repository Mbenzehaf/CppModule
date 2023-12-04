/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:07:17 by mben-zeh          #+#    #+#             */
/*   Updated: 2023/12/02 12:40:58 by mben-zeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

class Etudiant
{
//attributes
private:
int matricule;
std :: string name;
int nbrNotes;
float *tabNotes;
static int n;
public :
    Etudiant();
    Etudiant(std::string,int);
     ~Etudiant();
    Etudiant(const Etudiant&);
    void saisie();
    void affichage();
    int getmatricule();
    std::string getname();
    int getnbrNotes();
    float *gettabNotes();
    float moyenne();
        float get_tab(); 
    // int getmatricule();
    // std::string getnom(){return nom;}
    // float getnbrNotes();
    // float *gettabNotes();
};
int Etudiant::n = 1;
Etudiant::Etudiant()
{
    this->matricule = n++;
    this->nbrNotes = 0;
   //this->nom="";
    this->tabNotes=NULL;
}
Etudiant::Etudiant(std::string name,int nbrNotes)
{
    this->name = name;
    this->matricule = n++;
    this->nbrNotes = nbrNotes;
    this->tabNotes = new float[nbrNotes];
    
   
}
Etudiant::~Etudiant()
{
    delete[] this->tabNotes;
}
Etudiant::Etudiant(const Etudiant &E)
{
    this->matricule = E.matricule;
    this->name =E.name;
    this->nbrNotes = E.nbrNotes;
    this->tabNotes = new float[this->nbrNotes];
    for(int i=0;i < nbrNotes;i++)
        this->tabNotes[i] = E.tabNotes[i];
}
int Etudiant::getmatricule()
{
    return (matricule);
}
std::string Etudiant::getname()
{
    return (this->name);
}
int Etudiant::getnbrNotes()
{
    return (this->nbrNotes);
}
float *Etudiant::gettabNotes()
{
    return (tabNotes);    
}

void Etudiant::saisie()
{
    std::cout<<"Saisie des notes : "<<std::endl;
    for(int i = 0;i < this->nbrNotes;i++)
       {
        std::cout<<"Donner la note "<<i + 1<<" :";
        std::cin >> tabNotes[i];
       }

}
void Etudiant::affichage()
{
    std::cout<<"- Matricule : "<<this->matricule<<std::endl;
    std::cout<<"- Nom : "<<this->name<<std::endl;
    std::cout<<"- Nombre de notes :"<<this->nbrNotes<<std::endl;
    std::cout<<"- Notes :";
    for(int i = 0;i < this->nbrNotes;i++)
        std::cout<<this->tabNotes[i]<<" ";
    std::cout << std::endl;
}
 float Etudiant::moyenne()
    {
        float moyenne;

        moyenne = 0;
        for(int i=0;i<this->nbrNotes;i++)
        {
            moyenne+=this->tabNotes[i];
        }
        return (moyenne/nbrNotes);
    }
    float Etudiant ::get_tab() {
    std::cout << "get : " << std::endl; 
    for (int i = 0; i < nbrNotes; i++)
            return tabNotes[i]; 
        return(0);
        } 
// Etudiant::Etudiant(std::string nom,float nbrNotes,float *tabNotes)
// {
//     this->nom = nom;
//     this->matricule = this->n++;
//     this->nbrNotes = nbrNotes;
//     this->tabNotes = tabNotes;
// }
// Etudiant::~Etudiant()
// {
//     delete[] this->tabNotes;
// }

int main()
{
    std::vector<int> v1;
    //std :: cout << v1[0]<<std::endl;
    if(v1.size() == 0)
        std :: cout <<"null vector"<<std::endl;
    v1.push_back(10);
     std :: cout << v1[0]<<std::endl;
    
    //  std::cout << "Creation d'un objet Etudiant E avec 5 notes"<<std::endl;
    // Etudiant mohammed("mohammed",5);
    // mohammed.saisie();
    //  std::cout << "Affichage de l'etudiant E: "<<std::endl;
    // mohammed.affichage();
    // Etudiant E2=mohammed;
    // std::cout << "Affichage de l'etudiant E2: "<<std::endl;
    // E2.affichage();
    // std::cout << E2.moyenne();
    // E2.get_tab();
    //mohammed.affichage("mohammed",4);
   // mohammed.affichage();
    
   // std :: cout <<"mohammed"<<mohammed.getmatricule();
}