#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>

class FileSearchManager : public QObject
{
    Q_OBJECT

public:
    FileSearchManager();
    virtual ~FileSearchManager();
};

#endif // FILEMANAGER_H
