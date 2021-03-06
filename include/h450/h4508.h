//
// h4508.h
//
// Code automatically generated by asnparse.
//

#if ! H323_DISABLE_H4508

#ifndef __H4508_H
#define __H4508_H

#ifdef P_USE_PRAGMA
#pragma interface
#endif

#include <ptclib/asner.h>

#include "h4501.h"
#include "h4505.h"


//
// NameOperations
//

class H4508_NameOperations : public PASN_Enumeration
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4508_NameOperations, PASN_Enumeration);
#endif
  public:
    H4508_NameOperations(unsigned tag = UniversalEnumeration, TagClass tagClass = UniversalTagClass);

    enum Enumerations {
      e_callingName,
      e_alertingName,
      e_connectedName,
      e_busyName
    };

    H4508_NameOperations & operator=(unsigned v);
    PObject * Clone() const;
};


//
// Name
//

class H4508_NamePresentationAllowed;
class H4508_NamePresentationRestricted;

class H4508_Name : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4508_Name, PASN_Choice);
#endif
  public:
    H4508_Name(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_namePresentationAllowed,
      e_namePresentationRestricted,
      e_nameNotAvailable
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4508_NamePresentationAllowed &() const;
#else
    operator H4508_NamePresentationAllowed &();
    operator const H4508_NamePresentationAllowed &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4508_NamePresentationRestricted &() const;
#else
    operator H4508_NamePresentationRestricted &();
    operator const H4508_NamePresentationRestricted &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// NamePresentationAllowed
//

class H4508_SimpleName;
class H4508_ExtendedName;

class H4508_NamePresentationAllowed : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4508_NamePresentationAllowed, PASN_Choice);
#endif
  public:
    H4508_NamePresentationAllowed(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_simpleName,
      e_extendedName
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4508_SimpleName &() const;
#else
    operator H4508_SimpleName &();
    operator const H4508_SimpleName &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4508_ExtendedName &() const;
#else
    operator H4508_ExtendedName &();
    operator const H4508_ExtendedName &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// NamePresentationRestricted
//

class H4508_SimpleName;
class H4508_ExtendedName;

class H4508_NamePresentationRestricted : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4508_NamePresentationRestricted, PASN_Choice);
#endif
  public:
    H4508_NamePresentationRestricted(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_simpleName,
      e_extendedName,
      e_restrictedNull
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4508_SimpleName &() const;
#else
    operator H4508_SimpleName &();
    operator const H4508_SimpleName &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4508_ExtendedName &() const;
#else
    operator H4508_ExtendedName &();
    operator const H4508_ExtendedName &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// SimpleName
//

class H4508_SimpleName : public PASN_OctetString
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4508_SimpleName, PASN_OctetString);
#endif
  public:
    H4508_SimpleName(unsigned tag = UniversalOctetString, TagClass tagClass = UniversalTagClass);

    H4508_SimpleName(const char * v);
    H4508_SimpleName(const PString & v);
    H4508_SimpleName(const PBYTEArray & v);

    H4508_SimpleName & operator=(const char * v);
    H4508_SimpleName & operator=(const PString & v);
    H4508_SimpleName & operator=(const PBYTEArray & v);
    PObject * Clone() const;
};


//
// ExtendedName
//

class H4508_ExtendedName : public PASN_BMPString
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4508_ExtendedName, PASN_BMPString);
#endif
  public:
    H4508_ExtendedName(unsigned tag = UniversalBMPString, TagClass tagClass = UniversalTagClass);

    H4508_ExtendedName & operator=(const char * v);
    H4508_ExtendedName & operator=(const PString & v);
    H4508_ExtendedName & operator=(const PWCharArray & v);
    H4508_ExtendedName & operator=(const PASN_BMPString & v);
    PObject * Clone() const;
};


#endif // __H4508_H

#endif // if ! H323_DISABLE_H4508


// End of h4508.h
