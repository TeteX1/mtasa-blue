/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/xml/CXML.h
 *  PURPOSE:     XML handler interface
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/
#pragma once

class CXMLNode;
class CXMLFile;
class CXMLAttribute;

class CXML
{
public:
    virtual CXMLFile* CreateXML(const std::string& strFilename, bool bUseIDs = false, bool bReadOnly = false) = 0;
    virtual void      DeleteXML(CXMLFile* pFile) = 0;
    virtual CXMLFile* CopyXML(const std::string& strFilename, CXMLNode* pNode, bool bReadOnly = false) = 0;

    virtual CXMLNode* CreateDummyNode() = 0;

    virtual CXMLAttribute* GetAttrFromID(unsigned long ulID) = 0;
    virtual CXMLFile*      GetFileFromID(unsigned long ulID) = 0;
    virtual CXMLNode*      GetNodeFromID(unsigned long ulID) = 0;

    virtual CXMLNode* ParseString(const char* strXmlContent) = 0;
};
