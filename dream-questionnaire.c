#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main();

char g_playerName[64];

int game() {
    char dreamMinecraftName[64];
    char dreamRealName[64];
    char dreamBirthDate[16];
    char dreamHeight[16];
    char dreamCountry[64];
    char dreamState[64];
    char dreamCity[64];
    char dreamCat[64];

    char dreamFirstFriendMinecraftName[64];
    char dreamFirstFriendRealName[64];
    char dreamFirstFriendBirthDate[16];
    char dreamFirstFriendHeight[16];
    char dreamFirstFriendCountry[64];
    char dreamFirstFriendState[64];
    char dreamFirstFriendCity[64];

    char dreamSecondFriendMinecraftName[64];
    char dreamSecondFriendRealName[64];
    char dreamSecondFriendBirthDate[16];
    char dreamSecondFriendHeight[16];
    char dreamSecondFriendCountry[64];
    char dreamSecondFriendState[64];
    char dreamSecondFriendCity[64];

    char dreamFirstYoutubeChannelName[64];
    char dreamSecondYoutubeChannelName[64];
    char dreamThirdYoutubeChannelName[64];
    char dreamFourthYoutubeChannelName[64];
    char dreamFifthYoutubeChannelName[64];
    char dreamFirstCollabYoutubeChannelName[64];
    char dreamSecondCollabYoutubeChannelName[64];

    char dreamFirstYoutubeChannelCreationDate[16];
    char dreamSecondYoutubeChannelCreationDate[16];
    char dreamThirdYoutubeChannelCreationDate[16];
    char dreamFourthYoutubeChannelCreationDate[16];
    char dreamFifthYoutubeChannelCreationDate[16];
    char dreamFirstCollabYoutubeChannelCreationDate[16];
    char dreamSecondCollabYoutubeChannelCreationDate[16];

    int correctAnswers = 0;
    int incorrectAnswers = 0;

    while(!(correctAnswers >= 30)) {
        printf("What is Dream's Minecraft profile name?\nEnter your answer (e.g. KungFuBryan): ");
        fgets(dreamMinecraftName, 64, stdin);
        dreamMinecraftName[strcspn(dreamMinecraftName, "\n")] = 0;
        if(strcmp(dreamMinecraftName, "Dream") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's real name?\nEnter your answer (e.g. Prayitno Sugianto): ");
        fgets(dreamRealName, 64, stdin);
        dreamRealName[strcspn(dreamRealName, "\n")] = 0;
        if(strcmp(dreamRealName, "Clay") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's birth date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamBirthDate, 16, stdin);
        dreamBirthDate[strcspn(dreamBirthDate, "\n")] = 0;
        if(strcmp(dreamBirthDate, "1999-08-12") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's height in centimeters?\nEnter your answer (e.g. 160): ");
        fgets(dreamHeight, 16, stdin);
        dreamHeight[strcspn(dreamHeight, "\n")] = 0;
        if(strcmp(dreamHeight, "191") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What country does Dream live in?\nEnter your answer (e.g. abbreviations such as ID, UK, RU, MY, AU): ");
        fgets(dreamCountry, 64, stdin);
        dreamCountry[strcspn(dreamCountry, "\n")] = 0;
        if(strcmp(dreamCountry, "US") == 0 || strcmp(dreamCountry, "USA") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What state does Dream live in?\nEnter your answer (e.g. Jawa Timur): ");
        fgets(dreamState, 64, stdin);
        dreamState[strcspn(dreamState, "\n")] = 0;
        if(strcmp(dreamState, "Florida") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What city does Dream live in?\nEnter your answer (e.g. Surabaya, Gresik): ");
        fgets(dreamCity, 64, stdin);
        dreamCity[strcspn(dreamCity, "\n")] = 0;
        if(strcmp(dreamCity, "Orlando") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's cat's name?\nEnter your answer (e.g. Kocheng Oren): ");
        fgets(dreamCat, 64, stdin);
        dreamCat[strcspn(dreamCat, "\n")] = 0;
        if(strcmp(dreamCat, "Patches") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first friend's Minecraft profile name?\nEnter your answer (e.g. incorev34): ");
        fgets(dreamFirstFriendMinecraftName, 64, stdin);
        dreamFirstFriendMinecraftName[strcspn(dreamFirstFriendMinecraftName, "\n")] = 0;
        if(strcmp(dreamFirstFriendMinecraftName, "Sapnap") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first friend's real name?\nEnter your answer (e.g. Joko Suwito): ");
        fgets(dreamFirstFriendRealName, 64, stdin);
        dreamFirstFriendRealName[strcspn(dreamFirstFriendRealName, "\n")] = 0;
        if(strcmp(dreamFirstFriendRealName, "Nicholas") == 0 || strcmp(dreamFirstFriendRealName, "Nick") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first friend's birth date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamFirstFriendBirthDate, 16, stdin);
        dreamFirstFriendBirthDate[strcspn(dreamFirstFriendBirthDate, "\n")] = 0;
        if(strcmp(dreamFirstFriendBirthDate, "2001-03-01") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first friend's height in centimeters?\nEnter your answer (e.g. 149): ");
        fgets(dreamFirstFriendHeight, 16, stdin);
        dreamFirstFriendHeight[strcspn(dreamFirstFriendHeight, "\n")] = 0;
        if(strcmp(dreamFirstFriendHeight, "178") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What country does Dream's first friend live in?\nEnter your answer (e.g. abbreviations such as UK, ID, FR, PT): ");
        fgets(dreamFirstFriendCountry, 64, stdin);
        dreamFirstFriendCountry[strcspn(dreamFirstFriendCountry, "\n")] = 0;
        if(strcmp(dreamFirstFriendCountry, "US") == 0 || strcmp(dreamFirstFriendCountry, "USA") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What state does Dream's first friend live in?\nEnter your answer (e.g. Banten): ");
        fgets(dreamFirstFriendState, 64, stdin);
        dreamFirstFriendState[strcspn(dreamFirstFriendState, "\n")] = 0;
        if(strcmp(dreamFirstFriendState, "Florida") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What city does Dream's first friend live in?\nEnter your answer (e.g. Jakarta): ");
        fgets(dreamFirstFriendCity, 64, stdin);
        dreamFirstFriendCity[strcspn(dreamFirstFriendCity, "\n")] = 0;
        if(strcmp(dreamFirstFriendCity, "Orlando") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second friend's Minecrft profile name?\nEnter your answer (e.g. ChrisJ): ");
        fgets(dreamSecondFriendMinecraftName, 64, stdin);
        dreamSecondFriendMinecraftName[strcspn(dreamSecondFriendMinecraftName, "\n")] = 0;
        if(strcmp(dreamSecondFriendMinecraftName, "GeorgeNotFound") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second friend's real name?\nEnter your answer (e.g. Sumihar): ");
        fgets(dreamSecondFriendRealName, 64, stdin);
        dreamSecondFriendRealName[strcspn(dreamSecondFriendRealName, "\n")] = 0;
        if(strcmp(dreamSecondFriendRealName, "George Henry Davidson") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second friend's birth date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamSecondFriendBirthDate, 16, stdin);
        dreamSecondFriendBirthDate[strcspn(dreamSecondFriendBirthDate, "\n")] = 0;
        if(strcmp(dreamSecondFriendBirthDate, "1996-11-01") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second friend's height in centimeters?\nEnter your answer (e.g. 188): ");
        fgets(dreamSecondFriendHeight, 16, stdin);
        dreamSecondFriendHeight[strcspn(dreamSecondFriendHeight, "\n")] = 0;
        if(strcmp(dreamSecondFriendHeight, "173") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What country does Dream's second friend live in?\nEnter your answer (e.g. abbreviations such as JP, IN, CN, NZ): ");
        fgets(dreamSecondFriendCountry, 64, stdin);
        dreamSecondFriendCountry[strcspn(dreamSecondFriendCountry, "\n")] = 0;
        if(strcmp(dreamSecondFriendCountry, "UK") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What state does Dream's second friend live in?\nEnter your answer (e.g. Maluku): ");
        fgets(dreamSecondFriendState, 64, stdin);
        dreamSecondFriendState[strcspn(dreamSecondFriendState, "\n")] = 0;
        if(strcmp(dreamSecondFriendState, "England") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What city does Dream's second friend live in?\nEnter your answer (e.g. Surabaya): ");
        fgets(dreamSecondFriendCity, 64, stdin);
        dreamSecondFriendCity[strcspn(dreamSecondFriendCity, "\n")] = 0;
        if(strcmp(dreamSecondFriendCity, "London") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first YouTube channel's name?\nEnter your answer (e.g. 5-Minute Crafts): ");
        fgets(dreamFirstYoutubeChannelName, 64, stdin);
        dreamFirstYoutubeChannelName[strcspn(dreamFirstYoutubeChannelName, "\n")] = 0;
        if(strcmp(dreamFirstYoutubeChannelName, "Dream") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second YouTube channel's name?\nEnter your answer (e.g. HowToBasic): ");
        fgets(dreamSecondYoutubeChannelName, 64, stdin);
        dreamSecondYoutubeChannelName[strcspn(dreamSecondYoutubeChannelName, "\n")] = 0;
        if(strcmp(dreamSecondYoutubeChannelName, "DreamXD") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's third YouTube channel's name?\nEnter your answer (e.g. AnimeClips): ");
        fgets(dreamThirdYoutubeChannelName, 64, stdin);
        dreamThirdYoutubeChannelName[strcspn(dreamThirdYoutubeChannelName, "\n")] = 0;
        if(strcmp(dreamThirdYoutubeChannelName, "Dream Tech") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's fourth YouTube channel's name?\nEnter your answer (e.g. GameReviews): ");
        fgets(dreamFourthYoutubeChannelName, 64, stdin);
        dreamFourthYoutubeChannelName[strcspn(dreamFourthYoutubeChannelName, "\n")] = 0;
        if(strcmp(dreamFourthYoutubeChannelName, "Dream Shorts") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's fifth YouTube channel's name?\nEnter your answer (e.g. code-guru): ");
        fgets(dreamFifthYoutubeChannelName, 64, stdin);
        dreamFifthYoutubeChannelName[strcspn(dreamFifthYoutubeChannelName, "\n")] = 0;
        if(strcmp(dreamFifthYoutubeChannelName, "Dream Music") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first collab YouTube channel's name?\nEnter your answer (e.g. Vsauce): ");
        fgets(dreamFirstCollabYoutubeChannelName, 64, stdin);
        dreamFirstCollabYoutubeChannelName[strcspn(dreamFirstCollabYoutubeChannelName, "\n")] = 0;
        if(strcmp(dreamFirstCollabYoutubeChannelName, "Dream Team") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second collab YouTube channel's name?\nEnter your answer (e.g. Chrisubs Hololive Clips): ");
        fgets(dreamSecondCollabYoutubeChannelName, 64, stdin);
        dreamSecondCollabYoutubeChannelName[strcspn(dreamSecondCollabYoutubeChannelName, "\n")] = 0;
        if(strcmp(dreamSecondCollabYoutubeChannelName, "Minecraft Manhunt") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first YouTube channel's creation date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamFirstYoutubeChannelCreationDate, 16, stdin);
        dreamFirstYoutubeChannelCreationDate[strcspn(dreamFirstYoutubeChannelCreationDate, "\n")] = 0;
        if(strcmp(dreamFirstYoutubeChannelCreationDate, "2014-02-08") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second YouTube channel's creation date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamSecondYoutubeChannelCreationDate, 16, stdin);
        dreamSecondYoutubeChannelCreationDate[strcspn(dreamSecondYoutubeChannelCreationDate, "\n")] = 0;
        if(strcmp(dreamSecondYoutubeChannelCreationDate, "2019-08-22") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's third YouTube channel's creation date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamThirdYoutubeChannelCreationDate, 16, stdin);
        dreamThirdYoutubeChannelCreationDate[strcspn(dreamThirdYoutubeChannelCreationDate, "\n")] = 0;
        if(strcmp(dreamThirdYoutubeChannelCreationDate, "2020-01-01") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's fourth YouTube channel's creation date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamFourthYoutubeChannelCreationDate, 16, stdin);
        dreamFourthYoutubeChannelCreationDate[strcspn(dreamFourthYoutubeChannelCreationDate, "\n")] = 0;
        if(strcmp(dreamFourthYoutubeChannelCreationDate, "2020-12-10") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's fifth YouTube channel's creation date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamFifthYoutubeChannelCreationDate, 16, stdin);
        dreamFifthYoutubeChannelCreationDate[strcspn(dreamFifthYoutubeChannelCreationDate, "\n")] = 0;
        if(strcmp(dreamFifthYoutubeChannelCreationDate, "2021-01-31") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's first collab YouTube channel's creation date?\nEnter your answer (e.g. yyyy-mm-dd): ");
        fgets(dreamFirstCollabYoutubeChannelCreationDate, 16, stdin);
        dreamFirstCollabYoutubeChannelCreationDate[strcspn(dreamFirstCollabYoutubeChannelCreationDate, "\n")] = 0;
        if(strcmp(dreamFirstCollabYoutubeChannelCreationDate, "2019-11-14") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("What is Dream's second collab YouTube channel creation date?\nEnter your answer (for the last time ever, e.g. yyyy-mm-dd): ");
        fgets(dreamSecondCollabYoutubeChannelCreationDate, 16, stdin);
        dreamSecondCollabYoutubeChannelCreationDate[strcspn(dreamSecondCollabYoutubeChannelCreationDate, "\n")] = 0;
        if(strcmp(dreamSecondCollabYoutubeChannelCreationDate, "2020-12-29") == 0) {
            correctAnswers++;
        } else {
            incorrectAnswers++;
        }

        printf("%s, you got:\n- %d correct answer(s)\n- %d incorrect answer(s)\n", g_playerName, correctAnswers, incorrectAnswers);
        if(correctAnswers >= 30) {
            printf("You proved yourself that you are a TRUE Dream fan! Welcome to Dreamhood, my friend.");
            main();
        } else {
            printf("Bruh, you're not a Dream fan it seems like.\nShoo, a non-Dream fan like you are the worst!\n");
        }
    }
}

int main(void) {
    char choice[8];
    printf("Hello there! Are you a Dream fan? If so, why not take this questionnaire to test how deep your knowledge of Dream is.\n");
    printf("There are 36 questions in this questionnaire, of which you need to answer at least 30 of them correctly.\nFailure will result in a restart.\n");
    printf("Options: a = Start the questionnaire | z = Quit the questionnaire\nEnter your choice: ");
    fgets(choice, 8, stdin);
    choice[strcspn(choice, "\n")] = 0;

    if(strcmp(choice, "a") == 0) {
        printf("Please enter your name: \n");
        fgets(g_playerName, 64, stdin);
        g_playerName[strcspn(g_playerName, "\n")] = 0;
        printf("OK, %s, let's get started!\n", g_playerName);
        game();
    } else if(strcmp(choice, "z") == 0) {
        printf("Thank you for your time!\n");
        printf("This weird program is made by Richie S.");
        return 0;
    } else {
        printf("Hey, you inputted something invalid.\n");
        main();
    }
}
