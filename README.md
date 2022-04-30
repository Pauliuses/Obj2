# Pirma užduotis v1.1 Objektinis programavimas

## Užduoties tikslas

### Buvusią _stuct_ pakeisti į _class_ ir palyginti abiejų strategijų spartą
### Atlikti eksperimentinę analizę priklausomai nuo kompiliatoriaus optimizavimo lygio, nurodomo per _flag'us:_ O1, O2, O3

# _Struct_ ir _class_ spartos analizė:

## Failo nuskaitymas
| **Duomenų kiekis**  | **Failo nuskaitymas (struct)** | **Failo nuskaitymas (class)** |
| ------------------- | ------------------------------- | ------------------------------ |
| 100000 | 0.481322 | 0.488202 |
| 1000000 | 4.68074 | 4.87705 |
| 10000000 | 48.5751 | 49.1811 |

## Studentu suskirstymas į vektorius
| **Duomenų kiekis**  | **Suskirstumas (struct)** | **Suskirstymas (class)** |
| ------------------- | ------------------------------- | ------------------------------ |
| 100000 | 0.213428 | 0.222404 |
| 1000000 | 2.88085 | 2.84994 |
| 10000000 | 33.7774 | 34.716 |

## Šaunuoliu surašymas į failą
| **Duomenų kiekis**  | **Surašymas (struct)** | **Surašymas (class)** |
| ------------------- | ----------------------- | ---------------------- |
| 100000 | 0.407788 | 0.274265 |
| 1000000 | 2.80728 | 2.78332 |
| 10000000 | 26.732 | 27.6548 |

## Vargšų surašymas į failą
| **Duomenų kiekis**  | **Surašymas (struct)** | **Surašymas (class)** |
| ------------------- | ----------------------- | ---------------------- |
| 100000 | 0.371513 | 0.349569 |
| 1000000 | 2.70555 | 2.69782 |
| 10000000 | 26.5577 | 27.5652 |
