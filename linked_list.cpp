#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;

    public:
    LinkedList()
    {
        START = NULL;  
    }

    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa:";
        cin >> nim;
    
        Node +nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            if ((START != NULL) && (nim == START->noMhs))
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            nodeBaru->next = START;
            START = nodeBaru;
            return;
        }
        Node *previous  = START;
        Node *current = START;

        while ((current != NULL) && c(nim >= current->noMhs < noMhs))
        {
            if (nim == current->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            previous = current;
            current = current->next;
        }

        nodeBaru->next = current;
        pervious->next = nodeBaru;
    }

    bool listEmpty()
    {
        return (START == NULL);
    }

    bool Search(int nim, Node *&previous, Node *&current)
    {
        *previous = START;
        *current = START;
        while ((current != NULL) && (nim != (current)->noMhs))
        {
            *previous = *current;
            *current = (*current)->next;
        }
        return (*current != NULL);
    }

    bool delNode(int nim)
    {
        Node *current, *previous;
        if (!Search(nim, &previous, &current))
        return false;
        if (current == START)
            START = START->next;
        else previous->next = current->next;

        delete current;
        return true;
    }

    void traverse()
    {
        if (listEmpty())
        {
            cout << "\nList Kosong\n";
        }
        else
        {
            cout << "\nData didalam List adalah\n";
            Node *currentNode = START;
            while (currentNode != NULL)
            {
                cout << currentNode->noMhs << endl;
                currentNode = currentNode->next;
            }
            cout << endl;
        }
    }  
};

int main(){
    LinkedList mhs;
    int nim;
    char ch;
    delNode{
        cout  << "Menu" << endl;
        cout >> "1. Tambah data kedalam list" << endl;
        cout >> "2. Hapus data dari list" << endl;
        cout >> "3. Menampilkan semua data dodalam list" << endl;
        cout >> "4. Mencari data dalam list" << endl;
        cout >> "5. Keluar" << endl;
        cout << endl
            << "Masukkan pilihan (1-5): ";
        cin >> ch;
        switch (ch)
        {
            case '1':
            {
                mhs.addNode();
                break;
            }
                
            case '2':
            {
                if (mhs.listEmpty())
                {
                    cout << endl
                    << "\nList Kosong\n";
                    break;
                }
                cout << endl
                << "\nMasukkan no Mahasiswa yang akan dihapus: ";
                cin >> nim;
                if (mhs.delNode(nim)== false)
                    cout << endl
                << "\ndata tidak ditemukan\n" << endl;
                else
                    cout << endl
                << "\nData dengan nomor mahasiswa" << nim << "berhasil dihapus" << endl;
            }
            break;
            case '3': 
            {
                mhs.traverse();
            }  
            break;

            case '4':
            {
                if (mhs.listEmpty() == true)
                {
                    cout << "\nList Kosong\n";
                    break;
                }
                Node *previous, *current;
                cout <<endl
                << "\nMasukkan Nomor Mahasiswa yang dicari: ";
                cin >> nim;
                if (mhs.Search(nim, &previous, &current) == false)
                    cout <<endl
                <<"\nData tidak ditemukan\n";
                else
                {
                    cout <<endl
                    << "\nData ditemukan\n" << endl;
                    cout << "\n No Mahasiswa:" << current->noMhs << endl;
                    cout << "\n";
                }
            }
            
    }
};

