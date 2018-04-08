ENTITY :
    Abstract class yang merupakan parent dari setiap class entitas lainnya.
    Atribut :
        Jenis Entitas
        Koordinat X
        Koordinat Y
    Method :
        Getter Atribut
        Setter Atribut

GUPPY :
    Guppy adalah sebuah entitas di akuarium. Guppy merupakan derived class dari abstract class Entity. Guppy memiliki tiga tahap pertumbuhan.
    Guppy memakan makanan. Menghasilkan koin.
    Atribut :
        Level
        Kekenyangan
    Method :
        Getter Atribut
        Setter Atribut
        Find Food
        Move
        Drop Coin

PIRANHA :
    Piranha adalah sebuah entitas di akuarium. Piranha merupakan derived class dari abstract class Entity.
    Piranha memakan Guppy. Menghasilkan koin.
    Method :
        Find Food
        Drop Coin

SIPUT :
    Siput adalah sebuah entitas di akuarium. Siput merupakan derived class dari abstract class Entity.
    Siput berperan sebagai pengambil koin yang ada di dasar akuarium.
    Method :
        Find Coin
        Move

MAKANAN :
    Makanan adalah sebuah entitas di akuarium. Makanan merupakan derived class dari abstract class Entity.
    Makanan dimakan oleh Guppy
    Method :
        Drop

KOIN :
    Koin adalah sebuah entitas di akarium. Koin merupakan derived class dari abstract class Entity.
    Koin digunakan sebagia mata uang dalam game.
    Method :
        Drop

AKUARIUM :
    Akuarium merupakan sebuah class yang berisi matriks dari Entity. Setiap titik pada Akuarium dapat menampung satu Entity.
    Atribut :
        Matrix of Entity
    Method :
        Get Entity
        Set Entity

LINKEDLIST :
    Linked List adalah sebuah template class yang berisi List of Entity yang terhubung. Setiap Entitas memiliki masing-masing LinkedList.
    Atribut :
        Array of Entity
    Method :
        Find
        Is Empty
        Add
        Remove
        Get Index
    

