#include<stdio.h>
int main () {
    int month;
    int day;
    int year;
    printf("Enter the day :");
    scanf("%d",&day);
    printf("Enter the month number :");
    scanf("%d",&month);
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%4 == 0) {
        switch(month) {
            case 1 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 2 :
           if(day <=29){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 3 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 4 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 5 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 6 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 7 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 8 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 9 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 10 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 11 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 12 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
          default :
          printf("Invalid date");
        }
         }
    else {
    switch(month) {
            case 1 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 2 :
           if(day <=28){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 3 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 4 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 5 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 6 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 7 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 8 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 9 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 10 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 11 :
           if(day <=30){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
           case 12 :
           if(day <=31){
            printf("Valid Date");
           }
           else {
            printf("Invalid date");
           }
           break;
          default :
          printf("Invalid date");
        }
         }
    }
    
    
