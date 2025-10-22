#include <iostream>
#include "GradeManager.h"

int main() {
    GradeManager gm;
    gm.addGrade(85);
    gm.addGrade(72);
    gm.addGrade(90);
    gm.addGrade(65);

    std::cout << "Average: " << gm.getAverage() << "\n";
    std::cout << "Count below 80: " << gm.countBelow(80) << "\n";

    gm.updateGrade(1, 78);
    std::cout << "Updated Average: " << gm.getAverage() << "\n";

    gm.removeAt(2);
    std::cout << "Size after removal: " << gm.getSize() << "\n";
}
