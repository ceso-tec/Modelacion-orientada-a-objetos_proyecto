Gestion Sencilla de una Flota de Vehiculos.

El proyecto es una implementacion en C++ que simula una flota de automoviles dentro de una entidad estacionamiento, aplicando conceptos fundamentales de la Programacion Orientada a Objetos (POO), como lo es la herencia, polimorfismo y agregacion.

El sistema se compone de una clase padre Automovil.h que actua como plantilla para las clases derivadas Coche.h, Camion.h y Motocicleta.h que son agrupados y gestionados por agregacion en la clase Estacionamiento.h

El programa realiza las siguientes acciones:
1. Instanciacion: Se crean objetos de Coche, Camion y Motocicleta, usando constructores que inicializar sus atributos especificos.
2. Agregacion: La instancia de Estacionamiento recopila todos estos objetos en su lista interna de punteros a la clase padre Automovil.
3. Reporte de caracteristicas: Se llama a miEstacionamiento.mostrarAutomoviles(), que itera sobre la lista y usa polimorfismo para invocar la funcion mostrarInfo() especifica de cada automovil, reportando su marca, modelo, año y atributo unico.

Consideraciones:
Compilar
  g++ main.cpp -o main.o
Ejecutar
  ./main.o
