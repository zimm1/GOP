//
// Created by cavaz on 17/01/2018.
//

#include <cstdlib>
#include <iostream>
#include "questions.h"

#define NUM_ANSWERS 4

using namespace std;

struct Question {
    char text[100];
    char answers[NUM_ANSWERS][50];
    int correct;
};

Question questions[] = {
        {
                "Alissa White-Glux è la cantante di quale dei seguenti gruppi death metal?", {
                    "In Flames",
                    "Arch Enemy",
                    "Dark Tranquillity",
                    "Cannibal Corpse"
                                                                                             }, 1
        },
        {
                "Come si chiama il chitarrista solista degli Slipknot?",{
                    "Corey Taylor",
                    "Shawn Crahan",
                    "Paul Gray",
                    "Mick Thomson"
                                                                }, 3
        },
        {
                "Come si chiama il principale gruppo Groove Metal Italiano?",{
                    "Ghost B.C.",
                    "Epica",
                    "Lacuna Coil",
                    "Within Temptation"
                                                                             }, 2
        },
        {
                "Come si chiama la pirate metal band fondata a Perth, Scotland?",{
                    "Sabaton",
                    "Eluveitie",
                    "Turisas",
                    "Alestorm"
                                                                                 }, 3
        },
        {
                "Quale delle seguenti metal bands ha inciso l'album Rosenrot e Mutter?",{
                    "Rammstein",
                    "Korn",
                    "Megahertz",
                    "Equilibrium"
                                                                                                          }, 0
        }
};

int numQuestions = sizeof(questions)/ sizeof(*questions);

Question pickQuestion() {
    return questions[rand() % numQuestions];
}

bool getQuestionResult() {
    Question question = pickQuestion();

    cout << question.text << endl << endl;
    for (int i = 0; i < NUM_ANSWERS; ++i) {
        cout << ((char)(i + 65)) << ". " << question.answers[i] << endl;
    }

    cout << endl;

    char answer = ' ';
    while (answer < 65 || answer > 65 + NUM_ANSWERS) {
        cout << "Risposta: ";
        cin >> answer;
        cin.get();

        if (answer > 96) {
            answer -= 32;
        }
    }

    bool correct = answer-65 == question.correct;

    cout << "Risposta " << (correct ? "esatta" : "sbagliata") << "!" << endl;

    return correct;
}
