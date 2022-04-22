#include <stdio.h>

int main() {
    int house_to_school, school_to_pc, pc_to_academy, academy_to_house = 0;

    scanf("%d", &house_to_school);
    scanf("%d", &school_to_pc);
    scanf("%d", &pc_to_academy);
    scanf("%d", &academy_to_house);

    int total_time = house_to_school + school_to_pc + pc_to_academy + academy_to_house;

    printf("%d\n%d", total_time / 60, total_time % 60);

    return 0;
}