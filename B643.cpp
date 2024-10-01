class Library {
private:
    std::vector<std::unique_ptr<Borrowable>> items;

public:
    void addItem(std::unique_ptr<Borrowable> item) {
        items.push_back(std::move(item));
    }
    void borrowItem(const std::string& title) {
        auto it = std::find_if(item.begin(), items.end(), [&title](const auto& item){
            if (auto book = dyamic_cast<Book*>(item.get())){
                return book->getTitle() == title;

            }
            if (auto dvd = dyamic_cast<DVD*>(item.get())){
                return dvd->getTitle() == title;
            }
            return false;
        });
        if (it != items.end()) {
            (*it)->borrow();
        } else {
            std::cout << "Khong tim thay muc ' " << title << " ' trong thu vien. " << std::endl;
        }
    }
};