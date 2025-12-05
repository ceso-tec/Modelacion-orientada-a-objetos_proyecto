Gestion Sencilla de una Flota de Vehiculos.

El proyecto es una implementacion en C++ que simula una flota de automoviles dentro de una entidad estacionamiento, aplicando conceptos fundamentales de la Programacion Orientada a Objetos (POO), como lo es la herencia, polimorfismo y agregacion.

El sistema se compone de una clase padre Automovil.h que actua como plantilla para las clases hijas Coche.h, Camion.h y Motocicleta.h que son agrupados y gestionados por agregacion en la clase Estacionamiento.h

Para que sirve:
Simular la gestion de una flota variada de automoviles bajo una unica interfaz de control e ilustrar el uso de la herencia para definir caracteristicas comunes.

Para que no sirve:
Este proyecto es solo una simulacion de la logica en un estacionamiento, por lo que no guarda informacion en bases de datos o archivos y las tarifas calculadas son ficticias, por lo que no representan un sistema de cobro comercial real.

Acciones principales del programa.
1. Instanciacion: Se crean objetos de Coche, Camion y Motocicleta, usando constructores que inicializan sus atributos especificos.
2. Agregacion: La instancia de Estacionamiento recopila todos estos objetos en su lista interna de punteros a la clase padre Automovil.
3. Reporte de caracteristicas: Se llama a miEstacionamiento.mostrarAutomoviles(), que itera sobre la lista y usa polimorfismo para invocar la funcion mostrarInfo() especifica de cada automovil, reportando su marca, modelo, año y atributo unico.
4. Generacion de tarifas: Se sigue el mismo proceso llamando a miEstacionamiento.calcularTarifasTotales(), que itera sobre la lista y usa polimorfismo para invocar la funcion calcularTarifa() para reportar la tarifa especifica de cada automovil.

Consideraciones:
Compilar todos los archivos juntos usando un compilador de C++
  Windows "g++ main.cpp -o main.exe"
  macOS "g++ main.cpp -o main.o"
  
Ejecutar el programa resultante:
  Windows "./main.exe"
  macOS "./main.o"
