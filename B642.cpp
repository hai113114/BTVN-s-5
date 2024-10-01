class DVD :  public Borrowable {
private:
    std::string title;
    std::string director;
    int duration;
    bool availble;
public:
    DVD(std::string t, std::string d, int dur) : title(std::move(t)), director(std::move(d)), duration(dur), availble(true) {}
}