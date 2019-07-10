#include "BlogpostClass.h"

#include <utility>
#include <iostream>


BlogpostClass::BlogpostClass(std::string authorName, std::string title, std::string text,
                             std::string publicationDate) : _authorName(std::move(authorName)), _title(std::move(title)), _text(std::move(text)),
                                                                   _publicationDate(std::move(publicationDate))
{}
void BlogpostClass::printBlog(){
    std::cout << _title << " titled by " << _authorName << " posted at " << _publicationDate << std::endl;
    std::cout << _text << std::endl;
    std::cout << std::endl;
}
