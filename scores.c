#include <cs50.h>
#include <stdio.h>

int main(void)
// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Avarage: %f\n", (score1 + score2 + score3) / 3.0);
// }
// {
//     int scores[3];

//     scores[0] = 72;
//     scores[1] = 73;
//     scores[2] = 33;

//     printf("Avarage: %f\n", (scores[0] + scores[1] + scores[2] + scores[3] / 3.0);
// }

{
    int scores[3];

    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    printf("Avarage: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

}