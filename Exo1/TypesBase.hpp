#ifndef TYPESBASE_H
#define TYPESBASE_H
namespace std {
    template <class T>
    class TypesBase
    {
        T MyVal;

    public:
        explicit TypesBase(T Val) {
            MyVal = Val;
        }
        operator T & () noexcept {
            return MyVal;
        }
    };

    typedef TypesBase <int16_t> Short;
    typedef TypesBase <int32_t> Integer;
    typedef TypesBase <uint8_t> Character;


}
#endif // TYPESBASE_H
