def tipo_lado(ladoA, ladoB, ladoC):
    a, b, c = str(ladoA), str(ladoB), str(ladoC)
    lista = a + b + c
    ladosIguaisA = lista.count(a)
    ladosIguaisB = lista.count(b)
    ladosIguaisC = lista.count(c)
        
    if ladosIguaisA == 3 and ladosIguaisB == 3 and ladosIguaisC == 3:
        return 'equilátero'

    elif ladosIguaisA == 2 or ladosIguaisB == 2 or ladosIguaisC == 2:
        return 'isósceles'

    else:
        return 'escaleno'