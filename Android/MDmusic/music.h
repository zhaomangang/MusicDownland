#ifndef MUSIC_H
#define MUSIC_H
typedef struct MUsic{
    QString name;
    QString songer;
    QString id;
    QString url_2000;
    QString url_320;
    QString url_128;
    bool operator==(MUsic rhs) const {
            return (id == rhs.id);
        }

}MUsic;
#endif // MUSIC_H
