# wordle_solver_Anissah_Bhunjun

#INSTALLATION
cd wordle_tp
git clone https://github.com/Anissah11/wordle_solver_Anissah_Bhunjun.git

#COMPILATION
cd wordle_tp/wordle_solver_Anissah_Bhunjun
gcc -o bin/main -I inlcude/ src/words_filt.c src/main.c

#UTILISATION 
cd wordle_tp/wordle_solver_Anissah_Bhunjun
bin/main

#Here is the filters
                printf("\nchoose a filter option please:\n");
                printf("1: word starts with letter\n");
                printf("2: word contains letter\n");
                printf("3: word does not contain the letter\n");
                printf("press 0 to exit\n");
                printf("please enter preffered choice\n");
