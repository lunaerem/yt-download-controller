#include <errno.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

  // Declaring and initialising commands
  // This will get cleaned up once things are rewritten for custom options
  // For now, this will stay pretty unoptimised and messy until then
  char *list[9] = {"python3",
                   "yt-dlp",
                   "-a",
                   "list.txt",
                   "-x",
                   "--output=%(title)s.%(ext)s",
                   "--audio-format=mp3",
                   "--audio-quality=0",
                   NULL};

  char *list2[8] = {
      "python3",
      "yt-dlp",
      "-a",
      "list.txt",
      "--output=%(title)s.%(ext)s",
      "-f",
      "bestvideo[ext!=webm][height<=1080]+bestaudio[ext!=webm]/best[ext!=webm]",
      NULL};

  char *list3[8] = {"python3",
                    "yt-dlp",
                    "-a",
                    "list.txt",
                    "--output=%(title)s.%(ext)s",
                    "-f",
                    "bestvideo[ext!=webm]+bestaudio[ext!=webm]/best[ext!=webm]",
                    NULL};

  char *list4[4] = {"python3", "yt-dlp", "-U", NULL};

  // Checking if yt-dlp is installed
  if (access("yt-dlp", F_OK) != 0) {
    if (errno != ENOENT) {
      perror("Unknown error");
    } else {
      fprintf(stderr,
              "Failed to find yt-dlp. Please ensure it is installed and "
              "in the current directory.\n");
    }
    return -1;
  }

  // Checking if a list.txt exists and prompting if not
  if (access("list.txt", F_OK) != 0) {
    if (errno != ENOENT) {
      perror("Unknown error");
      return -1;
    }

    fprintf(stderr, "No list.txt found.\n");
    printf("Would you like one to be created? (y/n) ");
    char selection;
    scanf(" %c", &selection);
    if (selection == 'y') {
      FILE *fp = fopen("list.txt", "a");
      if (fp != NULL) {
        printf("list.txt successfully created.\n");
      } else {
        fprintf(stderr,
                "Failed to create list.txt (Check file permissions).\n");
        return -1;
      }
      fclose(fp);
    }
    return 0;
  }

  printf("\e[1;1H\e[2J");

  int option = -1;

  // Prompt the user
  printf("Please select how to download:\n");
  printf("1) MP3\n");
  printf("2) MP4 1080p\n");
  printf("3) MP4 4K\n");
  printf("4) Update yt-dlp\n");
  printf("5) Cancel\n");

  if (scanf(" %d", &option) == EOF) {
    perror("Input error");
  }

  // Check which option the user selected
  switch (option) {
  case 1:
    execvp("python3", list);
    break;
  case 2:
    execvp("python3", list2);
    break;
  case 3:
    execvp("python3", list3);
    break;
  case 4:
    execvp("python3", list4);
    break;
  case 5:
    return 0;
    break;
  default:
    errno = EIO;
    perror("Invalid input provided");
    return errno;
    break;
  }

  perror("Failed to execute python and yt-dlp");

  return errno;
}
