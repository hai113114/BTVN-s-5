class Book : public Borrowable {
private:
    std::string title;
    std::string author;
    std::string ISBN;
    bool available;

public:
    Book(std::string t, std::string a, std::string i) : title(std::move(t)), author(std::move(a)), ISBN(std::move(i)), available(true) {}
    
    void borrow() override {
        if (available) {
            available = false;
            std::cout << "Sach ' " << title << " ' da duoc muon. " << std::endl;

        } else {
            std::cout << "Sach ' " << title << " ' khong co san de muon. " << std::endl;

        }
    }

    void returnItem() override {
        available = true;
        std::cout << "Sach ' " << title << " ' da duoc tra lai." << std::endl;
    }

    bool isAvailable() const override {
        return available;
    } 
    std::string getTitle() const { return title;}
    std::string getAuthor() const { return author;}
    std::string getISBN() const { return ISBN;}
};