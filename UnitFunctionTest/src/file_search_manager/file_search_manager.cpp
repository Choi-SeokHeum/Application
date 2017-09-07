#include "file_search_manager.hpp"

#include <QDir>
#include <QDebug>

FileSearchManager::FileSearchManager()
{
    qDebug() << "Succeed to creat FileManager Instance";
}

FileSearchManager::~FileSearchManager()
{
    qDebug() << "Delete creat FileManager Instance";
}

bool FileSearchManager::init()
{
    m_headerFileList.clear();

    return true;
}

FileList FileSearchManager::getHeaderFileList(QString dirPath)
{
    QDir dir;
    FileList headerFileList;

    dir.setPath(dirPath);
    dir.setFilter(QDir::Files | QDir::NoDotAndDotDot | QDir::NoSymLinks);

    QStringList fileNameList = dir.entryList();

    for( int index = 0; index < fileNameList.count(); index++ )
    {
        QString fileName = fileNameList.at(index);
        if( fileName.contains(".h") || fileName.contains(".hpp") )
        {
            headerFileList.push_back(fileName);
        }
    }

    return headerFileList;
}
