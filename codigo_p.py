import time

import random

# Tamaños de las listas

datos = [1000, 5000, 10000, 20000, 50000, 100000, 200000]

tiempos = []

for n in datos:

    # Generar una lista aleatoria

    lista = random.sample(range(1, n * 10), n)

    # Seleccionar el último elemento

    elemento = lista[-1]

    # Iniciar el cronómetro

    inicio = time.time()

    # Búsqueda lineal

    posicion = -1

    for i in range(len(lista)):

        if lista[i] == elemento:

            posicion = i

            break

    # Detener el cronómetro

    fin = time.time()

# Calcular tiempo

    tiempo = fin - inicio

    tiempos.append(tiempo)

  # Mostrar resultados

    print("Número de datos:", n)

    print("Elemento buscado:", elemento)

    print("Posición encontrada:", posicion)

    print("Tiempo de ejecución:", tiempo, "segundos")

    print("----------------------------------------")