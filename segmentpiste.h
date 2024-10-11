#ifndef SEGMENTPISTE_H
#define SEGMENTPISTE_H

enum sgtType {droit,virageP90,virageM90};

class SegmentPiste
{
public:
    SegmentPiste(sgtType _type,int _longueur);

    sgtType type;
    int longueur;
};

#endif // SEGMENTPISTE_H
