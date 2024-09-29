#ifndef LIB_H
#define LIB_H

struct Libro {
    char titulo[100];
    char autor[100];
    int anioPubli;
};

Libro bibliotecaPredefinida[100] = {
{"Estructura e Interpretacion de Programas de Computadora", "Harold Abelson, Gerald Jay Sussman, Julie Sussman", 1984},
{"El Arte de la Programacion Informatica", "Donald E. Knuth", 1968},
{"Introduccion a los Algoritmos", "Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein", 1990},
{"Patrones de Diseno: Elementos de Software Orientado a Objetos Reutilizable", "Erich Gamma, Richard Helm, Ralph Johnson, John Vlissides", 1994},
{"Codigo: El Lenguaje Oculto de la Computadora Hardware y Software", "Charles Petzold", 1999},
{"Codigo Limpio: Manual de Artesania de Software Agil", "Robert C. Martin", 2008},
{"Refactorizacion: Mejorando el Diseno del Codigo Existente", "Martin Fowler", 1999},
{"El Programador Pragmatico: Tu Viaje hacia la Maestria", "Andrew Hunt, David Thomas", 1999},
{"Redes de Computadoras: Un Enfoque Descendente", "James F. Kurose, Keith W. Ross", 2000},
{"Conceptos de Sistemas Operativos", "Abraham Silberschatz, Peter Baer Galvin, Greg Gagne", 1984},
{"Inteligencia Artificial: Un Enfoque Moderno", "Stuart J. Russell, Peter Norvig", 1995},
{"Redes de Computadoras", "Andrew S. Tanenbaum, David J. Wetherall", 1981},
{"Sistemas Operativos Modernos", "Andrew S. Tanenbaum, Herbert Bos", 1992},
{"Conceptos de Sistemas de Bases de Datos", "Abraham Silberschatz, Henry F. Korth, S. Sudarshan", 1986},
{"Organizacion y Diseno de Computadoras: La Interfaz Hardware/Software", "David A. Patterson, John L. Hennessy", 1994},
{"Inteligencia Artificial: Fundamentos de Agentes Computacionales", "David L. Poole, Alan K. Mackworth", 2010},
{"Arquitectura de Computadoras: Un Enfoque Cuantitativo", "John L. Hennessy, David A. Patterson", 1990},
{"Seguridad Informatica: Principios y Practicas", "William Stallings, Lawrie Brown", 2007},
{"Mineria de Datos: Conceptos y Tecnicas", "Jiawei Han, Micheline Kamber, Jian Pei", 2000},
{"Introduccion a la Teoria de la Computacion", "Michael Sipser", 1996},
{"Algoritmos en C", "Robert Sedgewick", 1990},
{"Sistemas de Gestion de Bases de Datos", "Raghu Ramakrishnan, Johannes Gehrke", 1998},
{"Graficos por Computadora: Principios y Practica", "James D. Foley, Andries van Dam, Steven K. Feiner, John F. Hughes", 1990},
{"Vision por Computadora: Algoritmos y Aplicaciones", "Richard Szeliski", 2010},
{"Ingenieria de Software: Un Enfoque Practico", "Roger S. Pressman", 1978},
{"Inteligencia Artificial: Estructuras y Estrategias para la Resolucion de Problemas Complejos", "George F. Luger", 1998},
{"Sistemas Informaticos: Una Perspectiva del Programador", "Randal E. Bryant, David R. O'Hallaron", 2003},
{"Introduccion a la Teoria de Automatas, Lenguajes y Computacion", "John E. Hopcroft, Rajeev Motwani, Jeffrey D. Ullman", 1979},
{"TCP/IP Ilustrado", "Richard Stevens", 1994},
};

#endif 
