#ifndef PLAYLISTMAP_H
#define PLAYLISTMAP_H

#include <string>
#include "LinkedNode.h"
#include "Map.h"
#include "LibraryMap.h"
#include "List.h"
#include "PlayList.h"
#include "RandomPlayList.h"

template <class T>
class PlayListMap: public Map<T> {
private:
    LinkedNode<T> *head;
    LinkedNode<T>  *end;
    //acess to the library
    LibraryMap<T> *libray;

    int size;


//
public:
    /**
     * Constructor
     */

    PlayListMap(LibraryMap<T> library);

    //Copy Constructor
    PlayListMap(const PlayListMap<T>& PlayListMapToCopy);

    //Assignment Operator
    PlayListMap<T>& operator=(const PlayListMap<T>& PlayListMapToCopy);






    //Destructor
    ~PlayListMap();

    /**
   *Add Play List to map of playlists
   */
    void put(const List<T>& value);

    /**
     * •	add a new random playlist (newrandom)
     */

    void putRand(int duration);

    /**
     *Add the given song to the end of the given playlist
     * Use this.get to find playlist
     * Use library.find to find song from library
     *Use playlist add song to end of playlist
     */

    void add(std::string name, std::string artist, std::string title);

    /**
      *remove the given song from given playlist
     * Use this.get to find playlist
     *
     *Use playlist remove song from given playlist
     */
    void remove(std::string name, std::string artist, std::string title);


    /**
    * @return the value associated with the given name
    * @throws std::invalid_argument if the name is not present
    */
    List<T> get(std::string name);

    /**
     * @return true if the given name is associated with a value in the map, false otherwise
     */
    bool containsKey(std::string name);

    /**
     * Display all the names of the playlist and their durations
     * •	return a string representing all songs in the playlist
     */
    std::string display();

    /**
     * •	display the contents of a particular playlist (playlist)
     */
     std::string displayPlayList();

     /**
      * Remove PlayList When empty (becomes empty from deletion after playnext)
      */



};

#include "PlayListMap.inl"

#endif //LINKEDLISTMAP_H