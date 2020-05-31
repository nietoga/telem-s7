## Código de Honor

En este trabajo resolvemos el problema [Counting DNA Nucleotides](http://rosalind.info/problems/dna/) y declaramos que la solución propuesta es totalmente original, aunque se basa en los conocimientos adquiridos durante el curso [Fundamentals of Parallelism on Intel Architecture](https://www.coursera.org/learn/parallelism-ia/) y en código fuente presentado allí para la solución de otros problemas.

Yo, Agustín Nieto García, mejoré el desempeño de la aplicación garantizando el máximo aprovechamiento de la vectorización en la máquina, con SIMD en OpenMP, lo cual también mejoró los tiempos de cómputo en MPI.

Yo, Kevin Arley Parra Henao, aporté al proyecto implementando un método para la generación aleatoria de nucleobases para los nucleótidos, esto en la fase de prueba. El método genera aleatoriamente (en realidad, pseudo aleatoriamente) una de las siguientes moléculas: adenina (A), citosina (C), guanina (G) y timina (T). Estas se van uniendo a un polímero de DNA (Ácido desoxirribonucleico), el cual se usa como método input para testear los diferentes algoritmos que se tienen. Es importante recalcar que este método es pseudoaleatorio, genera una secuencia no uniformemente distribuida y tampoco constituye una hebra de DNA precisamente, se usa sólo para fines de pruebas y académicos.

Yo, Santiago Castrillón Galvis, aporté al proyecto de esta y aquella manera.

## Cómo ejecutar

Se requiere estar dentro del cluster de colfax o un cluster equivalente, con máquinas con procesadores Xeon Phi.

En la carpeta de cualquiera de los métodos, ejecutar:

    $ make       # para compilar el programa y generar el reporte de compilador
    $ make queue # para correr el programa en el cluster

## Análisis de Resultados

Por ahora no tenemos análisis de resultados.
