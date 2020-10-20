#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

	public:	
	  double quotaTotalAnual() {
	    return quotaMensalVendas * mesesNoAno;
	  }
	
};

