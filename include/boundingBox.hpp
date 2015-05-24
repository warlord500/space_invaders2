#ifndef BOUNDINGBOX_H
#define BOUNDINGBOX_H


class boundingBox
{
public:
    /** Default constructor */
    boundingBox();
    /** Default destructor */
    bool interSecting(boundingBox );
    bool containsPoint(int obj);
protected:
private:
    int x, y,width, height;
};

#endif // BOUNDINGBOX_H
