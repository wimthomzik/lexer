# Lexer

This is a basic implementation of a Lexer. It will read through
an input source code.
The target language is C++.

## Installation

## Usage

## Roadmap

1. Basic c++ program that reads through a input.
2. In addition this program should identify specific words.
3. Finally the programm is identifiying all kinds of tokens and counts them.

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## What is a finite automata (or finite state machines)?

They are abstract programming flow charts.

### Mathamatical Model of a finite automata
M = (Q, \Sigma ,\delta,q_{0},F)
where Q is a set of states,
\Sigma is the alphabet (finite not empty set of symbols),
\delta is a function that takes Q x \Sigma -> and takes it to another state,
q_{0} is the starting state,
F is a subset of Q and is the final state.




<img width="630" alt="Screenshot 2023-06-08 at 12 44 24 PM" src="https://github.com/wimthomzik/finiteAutomata/assets/82528324/03c34679-dc5c-4e7b-a0f2-988adb8042b3">

