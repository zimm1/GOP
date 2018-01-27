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

Avviato l'eseguibile il gioco chiederà di inserire il numero di giocatori (1-4 giocatori), successivamente bisognerà
specificare il nome per ognuno di essi. <br>
I giocatori avranno un proprio colore, diverso dagli altri.<br>
Il nome del giocatore verrà visualizzato con il relativo colore.<br>
Ad ogni turno verrà stampato il tabellone con la posizione dei giocatori (asterischi con il colore del relativo giocatore).<br>
Per tirare i dati basterà premere la barra spaziatrice, in seguito il gioco mostrerà il punteggio ottenuto con i dadi e 
la casella sulla quale il giocatore si sarà fermato.<br>
Nel caso in cui il giocatore si fermi su una delle caselle azione ([Vedi elenco caselle](#lists)), verrà visualizzato il messaggio
con lo spiegamento dell'effetto.

## Membri del team

* <b>Simone Cavazzoni</b> - [Website](https://simonecavazzoni.com) 
* <b>Stefano Notari</b>
* <b>Alessandro Tedeschi</b>