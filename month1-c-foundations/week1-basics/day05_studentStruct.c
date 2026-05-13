#include <stdio.h>
struct Student {
    char name[50];
    int rollNo;
    float marks[3];
    float average;
};
void calcAvg(struct Student *s){
float sum = s->marks[0]+s->marks[1]+s->marks[2];
s->average = sum/3;
}
int main() {
struct Student s[3];
int i;
int j;
struct Student temp;
for(i=0;i<3;i++){
printf("Enter name: ");
scanf("%s", s[i].name);    
printf("Enter roll no: ");
scanf("%d", &s[i].rollNo);    
printf("Enter mark 1: ");
scanf("%f", &s[i].marks[0]);   
printf("Enter mark 2: ");
scanf("%f", &s[i].marks[1]);
printf("Enter mark 3: ");
scanf("%f", &s[i].marks[2]);
calcAvg(&s[i]);
}
if(s[0].average > s[1].average) {
    temp = s[0];
    s[0] = s[1];
    s[1] = temp;
}
if(s[1].average > s[2].average) {
    temp = s[1];
    s[1] = s[2];
    s[2] = temp;
}
if(s[0].average > s[1].average) {
    temp = s[0];
    s[0] = s[1];
    s[1] = temp;
}
for(i = 0; i < 3; i++) {
    printf("Name: %s\n", s[i].name);
    printf("Roll No: %d\n", s[i].rollNo);
    printf("Average: %f\n", s[i].average);
    printf("---\n");
}
    return 0;
}