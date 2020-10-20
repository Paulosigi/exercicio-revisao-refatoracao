#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado { 
	
  protected:
    std::string nome;
    double salarioHora;  
    double quotaMensalVendas;  

  public:
    void setNome (std::string _nome) {nome = _nome;}
    std::string getNome() {return nome;} 
    void setSalarioHora (double salario) {salarioHora = salario;}
    double getSalarioHora () {return salarioHora;}
    void setQuotaMensalVendas (double quota) {quotaMensalVendas = quota;}   
    double getQuotaMensalVendas () {return quotaMensalVendas;}

    static const int mesesNoAno = 12;

    double pagamentoMes(double horasTrabalhadas) { 
      double t = horasTrabalhadas;	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	    return t * salarioHora;
    }	
};

#endif