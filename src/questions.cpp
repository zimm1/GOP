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
            "Alestorm"}, 3},
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
            "Use Your Illusion I"},3}
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
