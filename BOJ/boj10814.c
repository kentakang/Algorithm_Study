#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    int age;
    int order;
    char name[101];
}person;

int compare(const void *a, const void *b) {
    person *prev_person = (person *)a;
    person *next_person = (person *)b;

    if (prev_person->age == next_person->age) {
        return prev_person->order - next_person->order;
    }

    return prev_person->age - next_person->age;
}

int main() {
    int n = 0;
    char name[101];

    scanf("%d", &n);

    person *persons = malloc(sizeof(person) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &persons[i].age, name);
        strcpy(persons[i].name, name);
        persons[i].order = i;
    }

    qsort(persons, n, sizeof(persons[0]), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", persons[i].age, persons[i].name);
    }

    return 0;
}