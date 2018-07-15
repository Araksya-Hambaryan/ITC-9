import java.util.Arrays;

public class MyArrayList<T extends Number> {
    private Object[] m_arrayOfElements;
    private int m_size = 0;
    private static final int m_capacity = 12;
    private static final float m_loadFactor = 0.75f;
    public MyArrayList() {
        m_arrayOfElements = new Object[m_capacity];
    }
    public int getSize() {
        return m_size;
    }
    public T getElement(final int i) {
        if (i >= m_size || i < 0) {
            throw new IndexOutOfBoundsException("Index: " + i + ", Size " + i );
        }
        return (T) m_arrayOfElements[i];
    }
    public void add(final T element) {
        if (m_loadFactor * m_size == m_arrayOfElements.length) {
            ensureCapacity();
        }
        if (m_size == 0) {
            m_arrayOfElements[0] = element;
            ++m_size;
            return;
        }
        m_arrayOfElements[m_size] = element;
        ++m_size;
    }

    public void insert(final int index, final T element) {
        if (index >= m_size || index < 0) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size " + m_size );
        }
        if (m_loadFactor * m_size == m_arrayOfElements.length) {
            ensureCapacity();
        }
        ++m_size;
        Object[] tmpArray = Arrays.copyOf(m_arrayOfElements, m_arrayOfElements.length);
        for( int i = 0; i < index; ++i) {
            m_arrayOfElements[i] = tmpArray[i];
        }
        m_arrayOfElements[index] = element;
        for( int i = index + 1; i < m_size; ++i) {
            m_arrayOfElements[i] = tmpArray[i - 1];
        }
    }
    public void popBack() {
         m_arrayOfElements[m_size - 1]  = 0;
         --m_size;
    }
    public void remove(final int index) {
        if (index >= m_size || index < 0) {
            throw new IndexOutOfBoundsException("Index: " + index + ", Size " + m_size );
        }
        Object[] tmpArray = Arrays.copyOf(m_arrayOfElements, m_arrayOfElements.length);
        --m_size;
        for (int i = 0; i < m_size; ++i) {
            if (i < index) {
                m_arrayOfElements[i] = tmpArray[i];
            } else {
                m_arrayOfElements[i] = tmpArray[i + 1];
            }
        }
    } 
    private void ensureCapacity() {
        int newSize = m_capacity * 2;
        m_arrayOfElements = Arrays.copyOf(m_arrayOfElements, newSize);
    }
    public void printArrayList() {
        System.out.print("\nList is: ");
        for( int i = 0; i < m_size; ++i) {
            System.out.print(m_arrayOfElements[i]+" ");
        }
        System.out.println("\n");
    }
}
