#ifndef DAY_3_BLOGPOSTCLASS_H
#define DAY_3_BLOGPOSTCLASS_H
#include <string>

class BlogpostClass
{
public:

    BlogpostClass(std::string authorName, std::string title, std::string text,
                  std::string publicationDate);
    void printBlog();
private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //DAY_3_BLOGPOSTCLASS_H
