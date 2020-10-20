#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  protected: 
	  int projetos;	

  public:
    void setProjetos(int _projetos) {projetos = _projetos;}
    int getProjetos () {return projetos;}
};

