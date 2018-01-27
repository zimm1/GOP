# GOP (Gioco dell'Oca Pazza)

Versione digitale del gioco dell'oca, con alcune rivisitazioni.

## Tema

Ispirato al mondo della musica (Metal,Rock,Punk-Rock ect...), con domande inerenti ad esso.
<a name="lists"><a/>
## Features
* <b>1-4 giocatori</b>
* <b>Carte</b> 
    * Rispondere a una domanda
    * Vai avanti di n caselle
    * Torna indietro di n caselle
    * Scambia posizione con giocatore successivo
* <b>Caselle azione</b>
    * Pesca una carta
    * Vai avanti di n caselle
    * Torna indietro di n caselle
    * Salta 1 turno
    * Torna all'inizio

## Librerie 

Per la realizzazione di questo gioco non sono state utilizzate librerie grafiche. <br>
I colori sono stati implementati tramite la codifica <b>[ANSI](https://en.wikipedia.org/wiki/ANSI_escape_code)</b>, presente nella maggior parte 
dei terminali Windows e Unix.

## Esecuzione

* Per eseguire il programma bisogna innanzitutto creare il <b>makefile</b>, eseguendo da terminale il comando `cmake .` nella root del progetto
* Una volta generato il makefile si potrà creare l'<b>eseguibile</b>, eseguendo da terminale il comando `make` nella directory corrente
* Infine il gioco potrà essere <b>eseguito</b> con il comando `GOP` su <b>Windows</b>, mentre in ambiente <b>Unix</b> si dovrà usare il comando `./GOP`

##### Windows
```bash
cmake .
make
GOP
```

##### Unix
```bash
cmake .
make
./GOP
```

## Come Usare Il Programma

Avviato l'eseguibile il gioco chiede di inserire il numero di giocatori (1-4 giocatori), successivamente bisognerà
specificare il nome per ognuno di essi. <br>
I giocatori avranno un proprio colore, diverso dagli altri.<br>
Il nome del giocatore viene visualizzato con il relativo colore.<br>
Ad ogni turno viene stampato il tabellone con la posizione dei giocatori (asterischi con il colore del relativo giocatore).<br>
Per avanzare nel gioco è sufficiente premere invio, ogni volta il gioco stampa a video il punteggio ottenuto con i dadi e il messaggio
della casella su cui il giocatore si è fermato.<br>

## Membri del team

* <b>Simone Cavazzoni</b> - [Website](https://simonecavazzoni.com) 
* <b>Stefano Notari</b>
* <b>Alessandro Tedeschi</b>