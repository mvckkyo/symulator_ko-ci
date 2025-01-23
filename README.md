# moja_aplikacja_MF
# Symulator Rzutów Kośćmi RPG
 
### Autor
----------------------------------------  
**Maciej Franiewski**  
Nr albumu: 178380  
**Email:** wwx28837@student.warszawa.merito.pl  
----------------------------------------
 
## Opis projektu
Ten projekt to prosty symulator rzutów kośćmi RPG, napisany w języku C++. Program umożliwia wykonywanie rzutów kośćmi o liczbie ścianek w przedziale od 3 do 100 (np. k6, k20, k100). Wyniki rzutów są generowane losowo, a użytkownik ma pełną kontrolę nad liczbą rzutów oraz rodzajem kości.
 
### Jak działa program?
1. Użytkownik podaje liczbę ścianek na kości (np. 6 dla k6, 20 dla k20).
2. Następnie wprowadza liczbę rzutów.
3. Program generuje losowe wyniki dla każdego rzutu i wyświetla je w konsoli.
4. Użytkownik może zakończyć działanie programu, wpisując `0` w polu liczby ścianek.
 
## Funkcje
- Obsługa kości o liczbie ścianek od 3 do 100.
- Możliwość wykonywania dowolnej liczby rzutów.
- Walidacja danych wejściowych (np. liczba ścianek i rzutów musi być w odpowiednich granicach).
- Czytelny interfejs konsolowy.
 
## Przykładowe użycie
Przykładowy scenariusz działania programu:
1. Podaj liczbę ścianek na kości: `20`
2. Podaj liczbę rzutów: `5`
3. Wyniki:
   - Rzut 1: 12
   - Rzut 2: 7
   - Rzut 3: 19
   - Rzut 4: 3
   - Rzut 5: 15
 
### Wyjście:
```
**********************************
* Symulator rzutow koscmi RPG    *
* Dostepne kosci: d3 do d100     *
**********************************
Podaj liczbe scianek na kosci (3 - 100, 0 aby wyjsc): 20
Podaj liczbe rzutow: 5
 
Rzucasz k20 5 razy:
----------------------------------
Rzut 1: 12
Rzut 2: 7
Rzut 3: 19
Rzut 4: 3
Rzut 5: 15
----------------------------------
```
 
## Wymagania systemowe
- Kompilator C++ (np. GCC, Clang, MSVC).
- System operacyjny obsługujący programy konsolowe (Windows, Linux, MacOS).
 
## Jak skompilować i uruchomić program?
1. Skompiluj kod za pomocą dowolnego kompilatora C++:
   ```bash
   g++ -o dice_simulator dice_simulator.cpp
   ```
2. Uruchom skompilowany plik:
   ```bash
   ./dice_simulator
   ```
 
## Dalszy rozwój
Możliwe rozszerzenia funkcjonalności:
- Dodanie opcji zapisywania wyników do pliku.
- Obsługa kilku kości naraz (np. 2x k6, 3x k10).
- Lepsza obsługa błędów wejściowych.
 
## Licencja
Projekt jest dostępny na licencji MIT.
