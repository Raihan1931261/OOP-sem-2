#ifndef RECORDMANAGER_H
#define RECORDMANAGER_H

#include <vector>
#include <utility>

class RecordManager {
private:
    std::vector<std::pair<int, int>> records; // {studentID, grade}
    static int nextStudentID;
    static int totalRecordsCreated;

public:
    RecordManager();

    static int generateNextID();
    int addRecord(int grade);
    void removeRecord(int studentID);
    bool updateGrade(int studentID, int newGrade);
    int getGrade(int studentID) const;
    std::vector<int> findRecordsByGrade(int grade) const;
    int countBelow(int threshold) const;
    std::pair<int, int> getRecord(int studentID) const;
    std::vector<std::pair<int, int>> getRecordsAbove(int threshold) const;
    int getSize() const;
    double getAverage() const;
    void clearAllRecords();

    static int getTotalRecordsCreated();
    static int getNextStudentID();
};

#endif
