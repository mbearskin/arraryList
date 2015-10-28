//Programmer: Martha Winger-Bearskin
//Section: CS 153 A
//Date: 9/18/2013


//Implementation of functions in the templated class arraylist.

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

using namespace std;

//The Destructor
template <typename T>
ArrayList<T>::~ArrayList()
{
    delete [] m_data;
}

//Overloaded Operator=
template <typename T>
ArrayList<T>& ArrayList<T>::operator=(const ArrayList<T>& rhs)
{
    if(this != &rhs)
    {
        delete [] m_data;
        m_size = rhs.m_size;
        m_max = rhs.m_max;
        m_data = new T[m_max];
        for(int k=0; k < m_size; k++)
            m_data[k]= rhs.m_data[k];
    }
    return *this;
}

//Overloaded Copy Constructor
template <typename T>
ArrayList<T>::ArrayList(const ArrayList<T>& cpy)
{
    m_data = new T[NULL];
    *this = cpy;
}

//Size Fuction
template <typename T>
int ArrayList<T>:: size() const
{
    return m_size;
    
}

//First Function
template <typename T>
const T& ArrayList<T>::first() const
{
    return m_data[0];
}

//Operator []
template <typename T>
T& ArrayList<T>::operator[](int i)
{
    return m_data[i];
}

template <typename T>
const T& ArrayList<T>::operator[](int i) const
{
    return m_data[i];
}

//Find Function
template <typename T>
int ArrayList<T>::find(const T& x)
{
    int index;
    bool found = false;
    int notFound = -1;
    for(int i = 0; i < m_size; i++)
    {
        if (m_data[i] == x)
        {
            found = true;
            index = i;
        }
        
    }
    if(found)
        return index;
    else
        return notFound;
    
}

//Clear Function
template <typename T>
void ArrayList<T>::clear()
{
    m_size = 0;
    m_max = 0;
    if (m_data != NULL){
        delete [] m_data;
    }
    m_data = NULL;
}

//Insert-Back Function
template <typename T>
void ArrayList<T>::insert_back(const T& x)
{
    if(m_size == m_max)
    {
        T* tmp;
        tmp = new T[m_max * 2];
        for(int i= 0; i < m_size; i++)
            tmp[i] = m_data[i];
        delete [] m_data;
        m_data = tmp;
        m_max = m_max * 2;
    }
    m_data[m_size] = x;
    m_size++;
    
}

//Insert Function
template <typename T>
void ArrayList<T>::insert(const T& x, int i)
{
    if(m_size < i)
    {
        cout << "The index is not vaild" << endl;
        return;
    }
    if(m_size == m_max)
    {
        T* tmp;
        tmp = new T[m_max * 2];
        for(int j= 0; j < m_size; j++)
            tmp[j] = m_data[j];
        delete [] m_data;
        m_data = tmp;
        m_max = m_max * 2;
    }
    for(int k= m_size; k < i; k--)
        m_data[k]=m_data[k-1];
    m_data[i]= x;
    m_size++;
    
}

// Remove Function
template <typename T>
void ArrayList<T>::remove(int i)
{
    if(i < (m_size-1) && i >= 0)    //"removes" value at index i
    {
        for(int k= i; k < (m_size); k++)
            m_data[k]= m_data[k+1];
        m_size--;
    }
    
    if(m_size < (m_max/4)) // resizes array when size is 1/4max
    {
        T* tmp;
        tmp = new T[m_max/2];
        for(int j= 0; j < m_size; j++)
            tmp[j] = m_data[j];
        delete [] m_data;
        m_data = tmp;
        m_max = m_max/2;
    }

}

// Swap Function
template <typename T>
void ArrayList<T>::swap(int i, int k)
{
    if(i < (m_size-1) && k < (m_size-1))
    {
        T tmp;
        tmp = m_data[i];
        m_data[i]=m_data[k];
        m_data[k] = tmp;
    }
}

//Append Function
template <typename T>
void ArrayList<T>::append(const ArrayList<T>& alist)
{
    for(int k= 0; k < (alist.m_size)-1; k++)
        insert_back(alist.m_data[k]);
    
}

//Purge Function
template <typename T>
void ArrayList<T>::purge()
{
    for (int i = 0; i < m_size-1; i++)
    {
        int dup = find(m_data[i]);//value to hold index of potential duplicate
        while(dup != i) 
        {
            remove(m_data[dup]); //removes the first duplicate 
            dup=find(m_data[i]);
        }
    }
}



#endif





