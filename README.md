# quiz
Under Development
# Wildlife Program

This educational program introduces children to the fascinating world of wildlife. It allows users to learn about different animals and take a quiz to test their knowledge. The program provides information about animals such as lions, tigers, elephants, foxes, and red pandas.

## Table of Contents
- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Program Overview](#program-overview)
- [Usage](#usage)
- [Questions and Answers](#questions-and-answers)
- [Contributing](#contributing)
- [License](#license)

## Introduction
This program is designed as an educational tool to engage children in learning about various animals in the wild. It provides information about the appearance, behaviors, habitats, and other interesting facts about the selected animal. Additionally, the program offers a quiz mode to test the user's knowledge based on a set of questions related to the animals.

## Getting Started
To use this program, you need a C++ compiler (e.g., g++) and a code editor (e.g., Visual Studio Code) installed on your system. Clone this repository to your local machine:

```bash
git clone https://github.com/mishchaygithub/quiz
```

## Program Overview
The main program is implemented in the `main` function, which provides a user-friendly interface to choose between learning about an animal or entering the quiz mode. It uses the `clearScreen` function to clear the console and `displayAnimalData` function to show the information about the selected animal.

## Usage
1. Compile the program using a C++ compiler:
   ```bash
   g++ main.cpp -o wildlife_program
   ```
2. Run the program:
   ```bash
   ./wildlife_program
   ```
3. The program will display a welcome message and prompt you to choose an option:
   - To learn about an animal, enter the corresponding number (e.g., 1 for Lion) and press Enter.
   - To enter the quiz mode, enter 2 and press Enter.

## Questions and Answers
The quiz mode includes a set of predefined questions and multiple-choice answers. Each question has a single correct answer. You can customize or add more questions by modifying the `questions.txt` file.

### Format for Questions and Answers
Each question is defined in the following format:
```
Question: <question_text>
a) <option_a_text>
b) <option_b_text>
c) <option_c_text>
d) <option_d_text>
Answer: <correct_option>
```

For example:
```
Question: Tigers have distinctive orange and black stripes. Which of the following is the largest cat species?
a) Lion
b) Cheetah
c) Tiger
d) Leopard
Answer: c
```

To add more questions, simply follow the same format, and each question should be separated by a newline in the `questions.txt` file.

## Changing File Paths
If you want to change the file paths for animal information, you can modify the `displayAnimalData` function in the `main.cpp` file. Replace the current file paths with the desired paths to your data files.

## Contributing
If you want to contribute to this project, feel free to fork the repository and submit a pull request with your improvements. Your contributions are greatly appreciated!

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
