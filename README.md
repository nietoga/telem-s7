## Código de Honor

En este trabajo resolvemos integrales haciendo uso del [método numérico del trapecio](https://www.geogebra.org/m/qfsWGKKp) y declaramos que la solución propuesta se basa en los conocimientos adquiridos durante el curso [Fundamentals of Parallelism on Intel Architecture](https://www.coursera.org/learn/parallelism-ia/), en código fuente presentado allí para la solución de otros problemas y el método del trapecio desarrollado está basado en el curso que una vez vimos de análisis numérico en la universidad, más concretamente en el libro [Métodos Numéricos](http://www.eafit.edu.co/cultura-eafit/fondo-editorial/colecciones/Paginas/metodos-numericos.aspx) del docente Francisco José Correa Zabala.

Yo, Agustín Nieto García, mejoré el desempeño de la aplicación garantizando el máximo aprovechamiento de la vectorización en la máquina, con SIMD en OpenMP, lo cual también mejoró los tiempos de cómputo en MPI.

Yo, Kevin Arley Parra Henao, aporté al proyecto así y asá.

Yo, Santiago Castrillón Galvis, aporté al proyecto analizando los programas de OpenMP y MPI de manera que fueran eficientes y acordes al desempeño esperado en computación de alto rendimiento, realizando mediciones, SpeedUp y Eficiencia en cada una de las etapas hasta conseguir resultados adecuados.

## Cómo ejecutar

Se requiere estar dentro del cluster de colfax o un cluster equivalente, con máquinas con procesadores Xeon Phi.

En la carpeta de cualquiera de los métodos, ejecutar:

    $ make       # para compilar el programa y generar el reporte de compilador
    $ make queue # para correr el programa en el cluster

## Análisis de Resultados

Primeramente se tomaron los tiempos de procesamiento en el algoritmo serial, el resultado fue Time(sec): 115.530155, así que ya tenemos el tiempo de computo serial: TcomputoSerial = 115.530155s.
