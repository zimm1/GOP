# GOP (Gioco dell'Oca Pazza)

---

## Introduzione

In questo progetto abbiamo sviluppato la versione digitale del gioco dell'oca, con alcune rivisitazioni. <br>
Il tema della nostra versione del gioco dell'oca è ispirato al mondo della musica (Metal,Rock,Punk-Rock ect...), con domande e messaggi inerenti ad esso. <br>
Le principali caratteristiche del nostro gioco sono:

* 1-4 giocatori
* Carte 
    * Rispondere a una domanda.
    * Vai avanti di n caselle.
    * Torna indietro di n caselle.
    * Scambia posizione con giocatore successivo.
* Caselle azione
    * Pesca una carta.
    * Vai avanti di n caselle.
    * Torna indietro di n caselle.
    * Salta 1 turno.
    * Torna all'inizio.

---

## Librerie 

Per la realizzazione di questo gioco non sono state utilizzate librerie grafiche. <br>
I colori sono stati implementati tramite la codifica [ANSI](https://en.wikipedia.org/wiki/ANSI_escape_code), presente nella maggior parte 
dei terminali Windows e Unix.

---

## Esecuzione

Per eseguire il programma bisogna inanzitutto creare il *makefile*, per farlo bisogna eseguire da terminale il comando *"cmake ."*, nella directory principale. <br>
Una volta creato il *makefile* si potrà creare l'eseguibile, eseguendo da terminale il comando *"make"*, nella directory corrente. <br>
Infine il gioco potrà essere eseguito con il comando *"GOP"* su windows, in ambiente Unix si dovrà usare il comando
*"./GOP""*.

---

## Sviluppatori

    Cavazzoni Simone
    Notari Stefano
    Tedeschi Alessandro   