#include <iostream>
#include <memory>

struct AllocatedMetrics
{
    uint32_t TotalAllocated = 0;
    uint32_t TotalFreed = 0;

    uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; };
};

static AllocatedMetrics s_AllocationMetrics;

void *
operator new(size_t size)
{
    s_AllocationMetrics.TotalAllocated += size;
    // std::cout << "Allocated Memroy :" << size << std::endl;

    return malloc(size);
}

void printUsage()
{
    std::cout << "Memory Usage " << s_AllocationMetrics.CurrentUsage() << std::endl;
}

void operator delete(void *memory, size_t size)
{
    // std::cout << "Free :" << size << std::endl;
    s_AllocationMetrics.TotalFreed += size;
    free(memory);
}

class User
{

    std::string name;

public:
    User()
    {
    }
    User(std::string name) : name(name)
    {
    }
    friend std::ostream &operator<<(std::ostream &os, const User user)
    {
        return os << "{ name : '" << user.name << "' } ";
    }
    friend std::ostream &operator<<(std::ostream &os, const User *user)
    {
        return os << "{ name : '" << user->name << "' } ";
    }
};

int main()
{

    User *p = new User("kishore");
    printUsage();
    User *x = p;
    printUsage();
    {
        std::unique_ptr<User> user = std::make_unique<User>();
        printUsage();
    }
    printUsage();
    // std::cout << user << std::endl;
    std::cin.get();
}