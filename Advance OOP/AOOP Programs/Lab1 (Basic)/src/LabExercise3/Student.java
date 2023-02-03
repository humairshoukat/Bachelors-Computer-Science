/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package LabExercise3;

/**
 *
 * @author user
 */
public class Student {

    String StudentName;
    int StudentRegNo;
    String BatchName;

    String getStudentName() {
        return StudentName;
    }

    void setStudentName(String StudentName) {
        this.StudentName=StudentName;
    }

    int getStudentRegNo() {
        return StudentRegNo;
    }

    void setStudentRegNo(int StudentRegNo) {
        this.StudentRegNo=StudentRegNo;
    }
    
    String getBatchName() {
        return BatchName;
    }

    void setBatchName(String BatchName) {
        this.BatchName=BatchName;
    }
}
