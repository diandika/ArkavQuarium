#ifndef ENTITY_HPP
#define ENTITY_HPP

/** @class Entity
 * kelas Abstrak untuk tiap entitas di akuarium
 * */
class Entity{
  private:
    char entityKind;
  protected:
    int posX;
    int posY;
  public:
  /** @brief Constructor.
      * Melakukan inisialisasi Entitas
      * @param integer, posisi entitas pada X
      * @param integer, posisi entitas pada Y
      * @param char, representasi tipe entitas.
      */
    Entity(int,int,char);//inisiasi lokasi dan jenis kelas
	/** @brief Getter untuk posisi entitas pada X
      * @return Posisi X entitas.
      */
    int getX();
    /** @brief Getter untuk posisi entitas pada Y
      * @return Posisi Y entitas.
      */
    int getY();
    /** @brief Getter untuk tipe entitas
      * @return karakter representasi tipe entitas.
      */
    char getKind();

	/** @brief Setter untuk posisi entitas pada X
     * @param integer, posisi di X.
      */
    void setX(int);
    /** @brief Setter untuk posisi entitas pada Y
     * @param integer, posisi di Y.
      */
    void setY(int);
    /** @brief Setter untuk tipe entitas
     * @param char, representasi tipe entitas.
      */
    void setKind(char);
	/** @brief fungsi abstrak untuk pergerakan entitas
      */
    virtual void move() = 0;
};

#endif
