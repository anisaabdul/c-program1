#include<stdio.h>
uion CricketTeam{
char playerName[50];
int jerseyNumber;
float battingAvg;
};
int main(){
union CricketTeam team;
printf("enter player name:");
scanf("%[^\n]",team.plsyerName);

