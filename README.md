# Ángel Francisco García Guzmán - A01704203

# GueZas-Los-Zetas
Programa en C++ para el control y logística de una Hamburguesería


# Contexto
¿A quién no le gusta una buena hamburguesa?

Este programa tiene como objetivo el facilitar la toma de órden en el restaurante “Los Zetas” para así lograr resaltar ante la competencia.

Este programa toma los 3 objetos del restaurante (Hamburguesa, malteada y papas) y los junta en una orden para así poder aplicar una promoción y mostrar el precio final de la órden. 

# Consideraciones

-El programa solo crea la órden de 4 productos, es decir, la órden solo consta de 4 hamburguesas, 4 malteadas y 4 papas.

-Si lo que ingresa el usuario es incorrecto, el resultado será incongruente y el código falla.

-Si el registro del usuario en el precio es otra cosa que no sea un número, el código falla. 

# Cosas a revisar

-El UML ahora tiene una version actualizada

-El codigo ahora tiene sobreescritura de metodos en las clases hijas marcadas con un "override"

-El uso de polimorfismo esta en el main()

-La clase Articulo ya quedo registrada como abstracta con un metodo registrado como "virtual = 0"