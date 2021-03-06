/**
 * A class for simulating an integer memory cell.
 */

class IntCell
{
public:
    explicit IntCell( int initialValue = 0 ) : storedValue{ initialValue }
    {
        // Intentionally empty; initialization handled in initialization list
    }

    int read() const
    {
        return storedValue;
    }

    void write( int x )
    {
        storedValue = x;
    }

private:
    int storedValue;
};