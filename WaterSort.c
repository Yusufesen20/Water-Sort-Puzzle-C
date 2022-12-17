#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 1
char tube1[ROW][COL] = {{'G'}, {'G'}, {'R'}, {'B'}};
char tube2[ROW][COL] = {{'R'}, {'B'}, {'R'}, {'B'}};
char tube3[ROW][COL] = {{'G'}, {'R'}, {'B'}, {'G'}};
char tube4[ROW][COL] = {{' '}, {' '}, {' '}, {' '}};
char tube5[ROW][COL] = {{' '}, {' '}, {' '}, {' '}};
char header[] = "  1    2    3    4    5  ";
char horbar[] = "|---||---||---||---||---|";

void tubes() {

  printf("%s\n", header);
  printf("%s\n", horbar);

  int i, j;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      printf("| %c |", tube1[i][j]);
      printf("| %c |", tube2[i][j]);
      printf("| %c |", tube3[i][j]);
      printf("| %c |", tube4[i][j]);
      printf("| %c ", tube5[i][j]);
    }
    printf("|\n");
    printf("%s\n", horbar);
  }
}
void move() {
  int f, s,yunus;
  printf("Enter a move:");
  scanf(" %d", &f);
  scanf(" %d", &s);

  if (f == 1) {
    switch (s) {
    case 1:
      printf("Wrong Move!\n");
      break;
    case 2:
      if (tube2[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto br;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube1[ROW - level - 1][0] == ' ') {

        } else {
          if (tube1[ROW - level - 1][0] == tube1[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
                goto br;
              }
            }
          }
          
        }
      }
      goto br;
    case 3:
      if (tube3[0][0] != ' ') {
            printf("Wrong Move\n");
            goto br;
          }
      for (int level = ROW - 1; level >= 0; level--) {

        if (tube1[ROW - level - 1][0] == ' ') {

        } else {
          if (tube1[ROW - level - 1][0] == tube1[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
                goto br;
              }
            }
          }
          
        }
      }
      goto br;
    case 4:
      if (tube4[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto br;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube1[ROW - level - 1][0] == ' ') {

        } else {
          if (tube1[ROW - level - 1][0] == tube1[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
                goto br;
              }
            }
          }
          
        }
      }
      goto br;
    case 5:
      if (tube5[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto br;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube1[ROW - level - 1][0] == ' ') {

        } else {
          if (tube1[ROW - level - 1][0] == tube1[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube1[ROW - level - 1][0];
                tube1[ROW - level - 1][0] = ' ';
                goto br;
              }
            }
          }
          
        }
      }
    br:
      break;
    }
  }
  if (f == 2) {
    switch (s) {
    case 1:
      if (tube1[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bre;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube2[ROW - level - 1][0] == ' ') {

        } else {
          if (tube2[ROW - level - 1][0] == tube2[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
                goto bre;
              }
            }
          }
          
        }
      }
      goto bre;
    case 2:
      printf("Wrong Move!\n");
      break;
    case 3:
      if (tube3[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bre;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube2[ROW - level - 1][0] == ' ') {

        } else {
          if (tube2[ROW - level - 1][0] == tube2[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
                goto bre;
              }
            }
          }
          
        }
      }
      goto bre;
    case 4:
      if (tube4[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bre;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube2[ROW - level - 1][0] == ' ') {

        } else {
          if (tube2[ROW - level - 1][0] == tube2[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
                goto bre;
              }
            }
          }
          
        }
      }
      goto bre;
    case 5:
      if (tube5[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bre;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube2[ROW - level - 1][0] == ' ') {

        } else {
          if (tube2[ROW - level - 1][0] == tube2[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube2[ROW - level - 1][0];
                tube2[ROW - level - 1][0] = ' ';
                goto bre;
              }
            }
          }
          
        }
      }
    bre:
      break;
    }
  }
  if (f == 3) {
    switch (s) {
    case 1:
      if (tube1[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto brea;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube3[ROW - level - 1][0] == ' ') {

        } else {
          if (tube3[ROW - level - 1][0] == tube3[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
                goto brea;
              }
            }
          }
          
        }
      }
      goto brea;
    case 2:
      if (tube2[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto brea;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube3[ROW - level - 1][0] == ' ') {

        } else {
          if (tube3[ROW - level - 1][0] == tube3[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
                goto brea;
              }
            }
          }
          
        }
      }
    goto brea;
    case 3:
      printf("Wrong Move!\n");
      break;
    case 4:
      if (tube4[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto brea;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube3[ROW - level - 1][0] == ' ') {

        } else {
          if (tube3[ROW - level - 1][0] == tube3[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
                goto brea;
              }
            }
          }
          
        }
      }
      goto brea;
    case 5:
      if (tube5[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto brea;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube3[ROW - level - 1][0] == ' ') {

        } else {
          if (tube3[ROW - level - 1][0] == tube3[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube3[ROW - level - 1][0];
                tube3[ROW - level - 1][0] = ' ';
                goto brea;
              }
            }
          }
          
        }
      }
    brea:
      break;
    }
  }
  if (f == 4) {
    switch (s) {
    case 1:
      if (tube1[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bit;
      }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube4[ROW - level - 1][0] == ' ') {

        } 
        else {
          if (tube4[ROW - level - 1][0] == tube4[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
              }
            }
          } 
          else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
                goto bit;
              }
            }
          }
        }
      }
      goto bit;
      
    case 2:
      if (tube2[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bit;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube4[ROW - level - 1][0] == ' ') {

        } else {
          if (tube4[ROW - level - 1][0] == tube4[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
                goto bit;
              }
            }
          }
          
        }
      }
    goto bit;
    case 3:
      if (tube3[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bit;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube4[ROW - level - 1][0] == ' ') {

        } else {
          if (tube4[ROW - level - 1][0] == tube4[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
                goto bit;
              }
            }
          }
          
        }
      }
      goto bit;
    case 4:
      printf("Wrong Move!\n");
      break;
    case 5:
      if (tube5[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bit;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube4[ROW - level - 1][0] == ' ') {

        } else {
          if (tube4[ROW - level - 1][0] == tube4[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube5[layer][0] == ' ') {
                tube5[layer][0] = tube4[ROW - level - 1][0];
                tube4[ROW - level - 1][0] = ' ';
                goto bit;
              }
            }
          }
          
        }
      }
    bit:
      break;
    }
  }
  if (f == 5) {
    switch (s) {
    case 1:
      if (tube1[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bite;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube5[ROW - level - 1][0] == ' ') {

        } else {
          if (tube5[ROW - level - 1][0] == tube5[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube1[layer][0] == ' ') {
                tube1[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
                goto bite;
              }
            }
          }
          
        }
      }
      goto bite;
    case 2:
      if (tube2[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bite;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube5[ROW - level - 1][0] == ' ') {

        } else {
          if (tube5[ROW - level - 1][0] == tube5[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube2[layer][0] == ' ') {
                tube2[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
                goto bite;
              }
            }
          }
          
        }
      }
      goto bite;
    case 3:
      if (tube3[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bite;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube5[ROW - level - 1][0] == ' ') {

        } else {
          if (tube5[ROW - level - 1][0] == tube5[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube3[layer][0] == ' ') {
                tube3[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
                goto bite;
              }
            }
          }
          
        }
      }
      goto bite;
    case 4:
      if (tube4[0][0] != ' ') {
            printf("Wrong Move!\n");
            goto bite;
          }
      for (int level = ROW - 1; level >= 0; level--) {
        if (tube5[ROW - level - 1][0] == ' ') {

        } else {
          if (tube5[ROW - level - 1][0] == tube5[ROW - level][0]) {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
              }
            }
          } else {
            for (int layer = ROW - 1; layer >= 0; layer--) {
              if (tube4[layer][0] == ' ') {
                tube4[layer][0] = tube5[ROW - level - 1][0];
                tube5[ROW - level - 1][0] = ' ';
                goto bite;
              }
            }
          }
          
        }
      }
    goto bite;
    case 5:
      printf("Wrong Move!\n");
      break;
    bite:
      break;
    }
  }
}
int control(char S) {
  int a = 0, b = 0, c = 0, d = 0, e = 0;
  for (int i = 0; i < 4; i++) {

    if (tube1[i][0] == S) {
      a++;
    }
    if (a == 4) {
      return 1;
      break;
    }
  }
  for (int i = 0; i < 4; i++) {

    if (tube2[i][0] == S) {
      b++;
    }
    if (b == 4) {
      return 1;
      break;
    }
  }
  for (int i = 0; i < 4; i++) {

    if (tube3[i][0] == S) {
      c++;
    }
    if (c == 4) {
      return 1;
      break;
    }
  }
  for (int i = 0; i < 4; i++) {

    if (tube4[i][0] == S) {
      d++;
    }
    if (d == 4) {
      return 1;
      break;
    }
  }
  for (int i = 0; i < 4; i++) {

    if (tube5[i][0] == S) {
      e++;
    }
    if (e == 4) {
      return 1;
      break;
    }
  }
  return 0;
}
int main(void) {
  int moves=1;
  tubes();
  while (1) {
    move();
    printf("You played %d move\n",moves);
    if (control('R') && control('G') && control('B')) {
      tubes();
      printf("Win!");
      break;
    }
    moves++;
    tubes();
    printf("\n\n");
  }
  return 0;
}