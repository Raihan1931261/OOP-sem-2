#include "RecordManager.h"

int RecordManager::nextStudentID = 100001;
int RecordManager::totalRecordsCreated = 0;

RecordManager::RecordManager() {}

int RecordManager::generateNextID() {
    totalRecordsCreated++;
    return nextStudentID++;
}

int RecordManager::addRecord(int grade) {
    int id = generateNextID();
    records.push_back({id, grade});
    return id;
}

void RecordManager::removeRecord(int studentID) {
    for (auto it = records.begin(); it != records.end(); ++it) {
        if (it->first == studentID) {
            records.erase(it);
            return;
        }
    }
}

bool RecordManager::updateGrade(int studentID, int newGrade) {
    for (auto& rec : records) {
        if (rec.first == studentID) {
            rec.second = newGrade;
            return true;
        }
    }
    return false;
}

int RecordManager::getGrade(int studentID) const {
    for (auto& rec : records)
        if (rec.first == studentID)
            return rec.second;
    return -1;
}

std::vector<int> RecordManager::findRecordsByGrade(int grade) const {
    std::vector<int> ids;
    for (auto& rec : records)
        if (rec.second == grade)
            ids.push_back(rec.first);
    return ids;
}

int RecordManager::countBelow(int threshold) const {
    int count = 0;
    for (auto& rec : records)
        if (rec.second < threshold)
            count++;
    return count;
}

std::pair<int, int> RecordManager::getRecord(int studentID) const {
    for (auto& rec : records)
        if (rec.first == studentID)
            return rec;
    return {-1, -1};
}

std::vector<std::pair<int, int>> RecordManager::getRecordsAbove(int threshold) const {
    std::vector<std::pair<int, int>> result;
    for (auto& rec : records)
        if (rec.second > threshold)
            result.push_back(rec);
    return result;
}

int RecordManager::getSize() const {
    return static_cast<int>(records.size());
}

double RecordManager::getAverage() const {
    if (records.empty()) return 0.0;
    double sum = 0;
    for (auto& rec : records)
        sum += rec.second;
    return sum / records.size();
}

void RecordManager::clearAllRecords() {
    records.clear();
}

int RecordManager::getTotalRecordsCreated() {
    return totalRecordsCreated;
}

int RecordManager::getNextStudentID() {
    return nextStudentID;
}
