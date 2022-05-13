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

## Programa kompiliuojama naudojant skirtingus _flag'us_ ir 1000000 duomenų
| **Veiksmas** | **-O1** | **-O2** | **-O3** |
| ------------ | ------- | ------- | ------- |
| **Failo nuskaitymas** | 4.51754 | 4.53319 | 4.44723 |
| **Studentų skirstymas į vektorius** | 2.58681 | 2.58596 | 2.54894 |
| **Šaunuolių surašymas į failą** | 2.65565 | 2.67212 | 2.68165 |
| **Vargšų surašymas į failą** | 2.60927 | 2.63973 | 2.69844 |
| **Visas programos veikimo laikas** | 12.36927 | 12.431 | 12.37626 |

# Antra užduotis v1.2 Objektinis programavimas

## Užduoties tikslas

### Realizuota _"Rule of three"_
### Realizuoti reikiami ir tinkami operatoriai turimai klasei

# Trečia užduotis v1.5 Objektinis programavimas

## Užduoties tikslas

### Vietoje turimos klases sukurtos dvi: bazinė, skirtą bendrai aprašyti žmogų ir tada jos išvestinė.
### Žmogui skirta bazinė klasė yra abstrakčioji

# Ketvirta užduotis v2.0 Objektinis programavimas

## Užduoties tikslas

### Sukurta dokumentacija panaudojant _Doxygen_ 1.5 pagrindu
### Realizuoti Unit Testai naudojant _Catch_
### Sukurtas _prog.exe_ įdiegimo failas


## Paleidimo instrukcija:
### Terminale įrašyti _make_
### Norint paleisti programą į terminalą įrašyti _./prog_

