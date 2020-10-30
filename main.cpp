//-- Datos de Entrada: largo, ancho
//-- Datos de Salida : area, perimetro

#include "CRectangulo.h"

int main()
{
  CRectangulo R1;  //--- esta trabajando el constructor por defecto
  tnumero l,a;

  cout << "Largo : ";  cin >> l;
  cout << "Ancho : "; cin >> a;
  R1.setLargo(l);
  R1.setAncho(a);
  cout << "El area es : " << R1.area() << "\n";
  cout << "El perimetro es : " << R1.perimetro() << "\n";
  cout << "\n\n";

  cout << "leemos datos para el segundo objeto\n";
  cout << "Largo : ";  cin >> l;
  cout << "Ancho : "; cin >> a;

  CRectangulo R2(l,a);
  cout << "El area es : " << R2.area() << "\n";
  cout << "El perimetro : " << R2.perimetro() << "\n";
  return 0;
}
