//
// Created by cavaz on 17/01/2018.
//

#include <cstdlib>
#include <iostream>
#include "questions.h"

#define NUM_ANSWERS 4

using namespace std;

struct Question {
    char text[50];
    char answers[NUM_ANSWERS][50];
    int correct;
};

Question questions[] = {
        {"Ciao?", {
             "Si",
             "No",
             "Forse",
             "Boh"
        }, 0}
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
