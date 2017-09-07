#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>
#include <QVector>

using namespace std;

typedef QVector<QString> FileList;

class FileSearchManager : public QObject
{
    Q_OBJECT

public:
    FileSearchManager();
    virtual ~FileSearchManager();

public:
    bool init();
    FileList getHeaderFileList(QString dirPath);

private:
    QVector<QString> m_headerFileList;
};

#endif // FILEMANAGER_H
