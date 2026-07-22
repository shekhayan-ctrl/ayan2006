// 3. Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), and average song duration in minutes (float). Print all values in a single formatted sentence.

#include<stdio.h>

void main(){
    char playlist[] = "Top hit song";
    int totalsongs = 100;
    float avgduration = 3.8;

    printf("My Favorite Spotify Playlist's Name : %s\n.Total Number Of Songs : %d\n.Average Song Duration In Minutes : %f\n",
           playlist,totalsongs,avgduration);
    

}