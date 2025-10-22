#include "GradeManager.h"

GradeManager::GradeManager() {}

void GradeManager::addGrade(int grade) {
    grades.push_back(grade);
}

void GradeManager::removeAt(int index) {
    if (index >= 0 && index < (int)grades.size())
        grades.erase(grades.begin() + index);
}

void GradeManager::updateGrade(int index, int newGrade) {
    if (index >= 0 && index < (int)grades.size())
        grades[index] = newGrade;
}

int GradeManager::countOccurrences(int grade) const {
    int count = 0;
    for (int g : grades)
        if (g == grade)
            count++;
    return count;
}

std::vector<int> GradeManager::findIndices(int grade) const {
    std::vector<int> indices;
    for (int i = 0; i < (int)grades.size(); i++)
        if (grades[i] == grade)
            indices.push_back(i);
    return indices;
}

int GradeManager::countBelow(int threshold) const {
    int count = 0;
    for (int g : grades)
        if (g < threshold)
            count++;
    return count;
}

int GradeManager::getSize() const {
    return static_cast<int>(grades.size());
}

double GradeManager::getAverage() const {
    if (grades.empty()) return 0.0;
    double sum = 0;
    for (int g : grades)
        sum += g;
    return sum / grades.size();
}

void GradeManager::clearGrades() {
    grades.clear();
}
