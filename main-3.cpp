#include <iostream>
#include "RecordManager.h"

int main() {
    RecordManager rm;

    int id1 = rm.addRecord(85);
    int id2 = rm.addRecord(72);
    int id3 = rm.addRecord(90);

    std::cout << "Average: " << rm.getAverage() << "\n";
    std::cout << "Grade of " << id2 << ": " << rm.getGrade(id2) << "\n";

    rm.updateGrade(id2, 80);
    std::cout << "Updated grade of " << id2 << ": " << rm.getGrade(id2) << "\n";

    std::cout << "Records above 75:\n";
    for (auto& rec : rm.getRecordsAbove(75))
        std::cout << rec.first << " -> " << rec.second << "\n";

    std::cout << "Total records ever created: " << RecordManager::getTotalRecordsCreated() << "\n";
}
