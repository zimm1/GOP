//
// Created by cavaz on 17/01/2018.
//

#include <cstdlib>
#include <iostream>
#include "questions.h"

#define NUM_ANSWERS 4

using namespace std;

// Domande chiuse con NUM_ANSWERS risposte di cui una esatta
struct Question {
    char text[100];
    char answers[NUM_ANSWERS][50];
    int correct;
};

// Lista di domande
Question questions[] = {
        {"Alissa White-Glux è la cantante di quale dei seguenti gruppi death metal?", {
            "In Flames",
            "Arch Enemy",
            "Dark Tranquillity",
            "Cannibal Corpse"
            }, 1 },
        {"Come si chiama il chitarrista solista degli Slipknot?", {
            "Corey Taylor",
            "Shawn Crahan",
            "Paul Gray",
            "Mick Thomson"
            }, 3},
        {"Come si chiama il principale gruppo Groove Metal Italiano?", {
            "Ghost B.C.",
            "Epica",
            "Lacuna Coil",
            "Within Temptation"
            }, 2},
        {"Come si chiama la pirate metal band fondata a Perth, Scozia?", {
            "Sabaton",
            "Eluveitie",
            "Turisas",
            "Alestorm"
            }, 3},
        {"Quale delle seguenti metal bands ha inciso l'album Rosenrot e Mutter?", {
            "Rammstein",
            "Korn",
            "Megahertz",
            "Equilibrium"}, 0},
        {"Flea è il bassista di quale dei seguenti gruppi rock?", {
            "Fear",
            "Atoms for peace",
            "Red Hot Chili Peppers",
            "Jane's addiction"}, 2},
        {"Quali tra le seguenti canzoni è stata interpretata dai The Cranberries?", {
            "T.N.T.",
            "Zombie",
            "Kashmir",
            "It's so easy"},1},
        {"Immigrant Song è stata interpretata da quali dei seguenti gruppi rock?",{
            "Led Zeppelin",
            "Pink Floyd",
            "Black Sabbath",
            "The Rolling Stones"},0},
        {"Come si chiama il cantante dei The Rolling Stones?",{
            "Roonie Wood",
            "Charlie Watts",
            "Mick Jagger",
            "Keith Richards"},2},
        {"Quali dei seguenti album musicali è stato interpretato dai Guns N'Roses",{
            "Paranoid",
            "Houses of the Holy",
            "Black Ice",
            "Use Your Illusion I"},3},
        {"Quale di queste è una canzone di Vasco Rossi?", {
            "Buoni o cattivi",
            "Bocca di rosa",
            "Alla fiera dell'est",
            "Quel ragazzo della curva sud"
            }, 0},
        {"Quale tra queste canzoni è di Ligabue?", {
            "Il ragazzo della via Gluck",
            "L'ombelico del mondo",
            "Il sale della terra",
            "Mari salvador"
            }, 2},
        {"Quale di queste è una canzone dei Negramaro?", {
            "Eh già",
            "Ti regalerò una rosa",
            "Nuvole e lenzuola",
            "Natale allo zenzero"
            }, 2},
        {"Chi è il musicista italiano più ascoltato?", {
            "Laura Pausini",
            "Nek",
            "Fedez",
            "Morandi"
            }, 0},
        {"Qual'è il vero nome di Arisa?", {
            "Rosalba",
            "Giovanna",
            "Federica",
            "Jessica"
            }, 0},
        {"La band pop punk 'Green Day' è stata fondata sotto un altro nome, qual era?", {
            "Lookout!",
            "Sweet Children",
            "Suburban Jesus",
            "Green Nights"
            }, 1},
        {"Con chi non ha mai collaborato David Guetta?", {
            "Nicki Minaj",
            "Britney Spears",
            "Christina Aguilera",
            "Sia"
            }, 2},
        {"Jovanotti è il nome d'arte di?", {
            "Federico Leonardo Lucia"
            "Rosalino Cellamare",
            "Filippo Neviani",
            "Lorenzo Cherubini"
            }, 3},
        {"'I don't wanna miss a thing' degli Aerosmith è la colonna sonora di quale film?", {
            "Armageddon",
            "Apocalypse Now",
            "Forrest Gump",
            "Io sono leggenda"
            }, 0},
        {"Chi canta 'Skyfall', colonna sonora dell'omonimo film di James Bond?", {
            "Katy Perry",
            "Adele",
            "Lady Gaga",
            "Kylie Minogue"
            }, 1}
};

int numQuestions = sizeof(questions) / sizeof(*questions);

Question pickQuestion() {
    return questions[rand() % numQuestions];
}

// Output domanda, input, controllo e ritorno se la è risposta corretta
bool getQuestionResult() {
    Question question = pickQuestion();

    cout << question.text << endl << endl;
    for (int i = 0; i < NUM_ANSWERS; ++i) {
        cout << ((char)(i + 65)) << ". " << question.answers[i] << endl;
    }

    cout << endl;

    // Input di un carattere (a, b, c, d) minuscolo o maiuscolo
    char answer = ' ';
    while (answer < 65 || answer > 65 + NUM_ANSWERS) {
        cout << "Risposta: ";
        cin >> answer;
        cin.get();

        // Se il carattere è minuscolo -> trasforma in maiuscolo
        if (answer > 96) {
            answer -= 32;
        }
    }

    // Numero risposta = carattere - 65
    bool correct = answer-65 == question.correct;

    cout << "Risposta " << (correct ? "esatta" : "sbagliata") << "!" << endl;

    return correct;
}
