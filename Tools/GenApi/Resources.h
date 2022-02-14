#pragma once
#include <string>
#include <cstdint>

namespace MdDox::GenApi::Resources
{
   class Resource
   {
   public:
       static std::string getSource();
       static void getSource(std::string &dest);

       static std::string getBase();
       static void getBase(std::string &dest);

       static std::string getCommon();
       static void getCommon(std::string &dest);

       static std::string getEnumAttributeSource();
       static void getEnumAttributeSource(std::string &dest);

       static std::string getElementTextSource();
       static void getElementTextSource(std::string &dest);

       static std::string getEnumAttributeHeader();
       static void getEnumAttributeHeader(std::string &dest);

       static std::string getElementTextHeader();
       static void getElementTextHeader(std::string &dest);

       static std::string getForeachElementHeader();
       static void getForeachElementHeader(std::string &dest);

       static std::string getForeachElementSource();
       static void getForeachElementSource(std::string &dest);

       static std::string getHeader();
       static void getHeader(std::string &dest);

       static std::string getIntegerAttributeHeader();
       static void getIntegerAttributeHeader(std::string &dest);

       static std::string getIntegerAttributeSource();
       static void getIntegerAttributeSource(std::string &dest);

       static std::string getSingleElementHeader();
       static void getSingleElementHeader(std::string &dest);

       static std::string getSingleElementSource();
       static void getSingleElementSource(std::string &dest);

       static std::string getStringAttributeHeader();
       static void getStringAttributeHeader(std::string &dest);

       static std::string getStringAttributeSource();
       static void getStringAttributeSource(std::string &dest);

       static std::string getVisitElementDecl();
       static void getVisitElementDecl(std::string &dest);

       static std::string getVisitElementSource();
       static void getVisitElementSource(std::string &dest);

       static std::string getVisitHeader();
       static void getVisitHeader(std::string &dest);

       static std::string getVisitTextDecl();
       static void getVisitTextDecl(std::string &dest);
   };
} // namespace MdDox::GenApi::Resources
