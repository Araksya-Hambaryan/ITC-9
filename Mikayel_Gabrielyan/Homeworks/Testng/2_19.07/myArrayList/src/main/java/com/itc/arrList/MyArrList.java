package com.itc.arrList;

import java.util.Arrays;

public class MyArrList {
    private int m_size = 0;
    private int[] m_myArrList;
    private int m_capacity = 16;
    private float m_loadFactor = 0.75f;
    public MyArrList() {
        m_myArrList = new int[m_capacity];
    }
    public MyArrList(int capacity, float loadFactor) {
        this.m_capacity = capacity;
        this.m_loadFactor = loadFactor;
        m_myArrList = new int[m_capacity];
    }
    public int getSize() {
        return m_size;
    }

    public void add(int value) {
        if (m_size == m_capacity * m_loadFactor) {
            resizeMyArrList();
        }
        if (m_size == 0) {
            ++m_size;
            m_myArrList[0] = value;
            return;
        }
        ++m_size;
        m_myArrList[m_size - 1] = value;
    }
    public void pop() {
         --m_size;
         if(m_size < 0){
             System.out.println("Array List already is empaty ");
             m_size = 0;
             return;
         }
         m_myArrList[m_size]  = 0;
    }
    public int getElement(int index) throws IndexOutOfBoundsException {
        if (index < 0 || index >= m_size) {
            throw new IndexOutOfBoundsException("Get exception");
        }
        return m_myArrList[index];
    }
    public void insert(int index, int value) throws IndexOutOfBoundsException {
        if (index <0 || index >= m_size) {
            throw new IndexOutOfBoundsException("Insert exception");
        }
        if (m_size == m_capacity * m_loadFactor) {
            resizeMyArrList();
        }
        ++m_size;
        int[] tmpArr = Arrays.copyOf(m_myArrList, m_capacity);
        for( int i = 0; i < index; ++i) {
            m_myArrList[i] = tmpArr[i];
        }
        m_myArrList[index] = value;
        for( int i = index + 1; i < m_size; ++i) {
            m_myArrList[i] = tmpArr[i - 1];
        }
    }
    public void remove(int index) throws IndexOutOfBoundsException {
        if (index <0 || index >= m_size) {
            throw new IndexOutOfBoundsException("Remove exception");
        }
        int[] tmpArr = Arrays.copyOf(m_myArrList, m_capacity);
        --m_size;
        for (int i = 0; i < m_size; ++i) {
            if (i < index) {
                m_myArrList[i] = tmpArr[i];
            } else {
                m_myArrList[i] = tmpArr[i + 1];
            }
        }
    } 
    private void resizeMyArrList() {
        m_capacity *= 2;
        m_myArrList = Arrays.copyOf(m_myArrList, m_capacity);
    }
    public void printArrList() {
        System.out.print("\nArray List is: ");
        for( int i = 0; i < m_size; ++i) {
            System.out.print(m_myArrList[i] + "  ");
        }
        System.out.println("");
    }
}