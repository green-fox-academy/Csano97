#include <iostream>
#include <utility>

class postit
{
public:

    postit(std::string backgroundcolor, std::string text, std::string textcolor)
            : _backgroundcolor(std::move(backgroundcolor)), _text(std::move(text)), _textcolor(std::move(textcolor))
    {}

    const std::string &getBackgroundcolor() const
    {
        return _backgroundcolor;
    }

    const std::string &getText() const
    {
        return _text;
    }

    const std::string &getTextcolor() const
    {
        return _textcolor;
    }

    void setBackgroundcolor(const std::string &backgroundcolor)
    {
        _backgroundcolor = backgroundcolor;
    }

    void setText(const std::string &text)
    {
        _text = text;
    }

    void setTextcolor(const std::string &textcolor)
    {
        _textcolor = textcolor;
    }

private:
    std::string _backgroundcolor;
    std::string _text;
    std::string _textcolor;
};

int main()
{
    postit Post_it("Orange", "Idea 1", "Blue");
    postit Post_it2("Pink", " Awesome!", "Black");
    postit Post_it3("Yellow", "Superb!", "Green");
    std::cout << "Background: " << Post_it.getBackgroundcolor() + "\n" << "Text: " << Post_it.getText() + "\n"
              << "Text color: " << Post_it.getTextcolor() << std::endl;
    std::cout << std::endl;
    std::cout << "Background: " << Post_it2.getBackgroundcolor() + "\n" << "Text: " << Post_it2.getText() + "\n"
              << "Text color: " << Post_it2.getTextcolor() << std::endl;
    std::cout << std::endl;
    std::cout << "Background: " << Post_it3.getBackgroundcolor() + "\n" << "Text: " << Post_it3.getText() + "\n"
              << "Text color: " << Post_it3.getTextcolor() << std::endl;

    return 0;
}