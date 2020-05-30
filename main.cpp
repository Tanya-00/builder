#include <iostream>
#include <vector>

using namespace std;

enum COLOR {
    BLACK,
    WHITE,
    PINK,
    RED,
    BLUE,
    VINOUS,
    YELLOW,
    ORANGE
};

enum UPPER {
    T_SHORT,
    SHIRT,
    HOODY,
    SWEATSHIRT,
    SWEATER
};

enum BELOW {
    TROUSER,
    JEANS,
    SKIRT,
    SPORTS_TROUSER,
    LEGGINGS
};

enum SHOES {
    BOOTS,
    SNEAKERS,
    BAREFOOT_PERSON,
    SLIPPERS
};

string getColor(COLOR color) {
    switch (color) {
        case COLOR::BLACK:
            return "BLACK";
        case COLOR::WHITE:
            return "WHITE";
        case COLOR::PINK:
            return "PINK";
        case COLOR::RED:
            return "RED";
        case COLOR::BLUE:
            return "BLUE";
        case COLOR::VINOUS:
            return "VINOUS";
        case COLOR::YELLOW:
            return "YELLOW";
        case COLOR::ORANGE:
            return "ORANGE";
    }
}

string getUpper(UPPER upper) {
    switch (upper) {
        case UPPER::T_SHORT:
            return "T_SHORT";
        case UPPER::SHIRT:
            return "SHIRT";
        case UPPER::HOODY:
            return "HOODY";
        case UPPER::SWEATSHIRT:
            return "SWEATSHIRT";
        case UPPER::SWEATER:
            return "SWEATER";
    }
}

string getBelow(BELOW below) {
    switch (below) {
        case BELOW::TROUSER:
            return "TROUSER";
        case BELOW::JEANS:
            return "JEANS";
        case BELOW::SKIRT:
            return "SKIRT";
        case BELOW::SPORTS_TROUSER:
            return "SPORTS-TROUSER";
        case BELOW::LEGGINGS:
            return "LEGGINGS";
    }
}

string getShoes(SHOES shoes) {
    switch (shoes) {
        case SHOES::BOOTS:
            return "BOOTS";
        case SHOES:: SNEAKERS:
            return "SNEAKERS";
        case SHOES::BAREFOOT_PERSON:
            return "BAREFOOT-PERSON";
        case SHOES::SLIPPERS:
            return "SLIPPERS";
    }
}

class Clothes {
    COLOR color;
    UPPER upper;
    unsigned int sizeUpper;
    BELOW below;
    unsigned int sizeBelow;
    SHOES shoes;
    unsigned int sizeShoes;

public:
    Clothes (COLOR color, UPPER upper, unsigned int sizeUpper,
            BELOW below, unsigned int sizeBelow, SHOES shoes, unsigned int sizeShoes) {
        this->color = color;
        this->upper = upper;
        this->sizeUpper = sizeUpper;
        this->below = below;
        this->sizeBelow = sizeBelow;
        this->shoes = shoes;
        this->sizeShoes = sizeShoes;
    }
    void Print() {
        cout << getColor(color) << " ";
        cout << getUpper(upper) << " ";
        cout << sizeUpper << " , ";
        cout << getColor(color) << " ";
        cout << getBelow(below) << " ";
        cout << sizeBelow << " , ";
        cout << getColor(color) << " ";
        cout << getShoes(shoes) << " ";
        cout << sizeShoes << endl;
    }
};



class ClothesBuilder {
    COLOR color;
    UPPER upper;
    unsigned int sizeUpper;
    BELOW below;
    unsigned int sizeBelow;
    SHOES shoes;
    unsigned int sizeShoes;

public:
    void setColor(COLOR color) {
        ClothesBuilder::color = color;
    }

    void setUpper(UPPER upper) {
        ClothesBuilder::upper = upper;
    }

    void setSizeUpper(unsigned int sizeUpper) {
        ClothesBuilder::sizeUpper = sizeUpper;
    }

    void setBelow(BELOW below) {
        ClothesBuilder::below = below;
    }

    void setSizeBelow(unsigned int sizeBelow) {
        ClothesBuilder::sizeBelow = sizeBelow;
    }

    void setShoes(SHOES shoes) {
        ClothesBuilder::shoes = shoes;
    }

    void setSizeShoes(unsigned int sizeShoes) {
        ClothesBuilder::sizeShoes = sizeShoes;
    }

    Clothes *build() {
        return new Clothes(color, upper, sizeUpper, below, sizeBelow, shoes, sizeShoes);
    }
};

int main() {
    ClothesBuilder builder;

    builder.setColor(COLOR::YELLOW);
    builder.setUpper(UPPER::HOODY);
    builder.setSizeUpper(34);
    builder.setBelow(BELOW::JEANS);
    builder.setSizeBelow(34);
    builder.setShoes(SHOES::SNEAKERS);
    builder.setSizeShoes(36);

    Clothes *clothes = builder.build();
    clothes->Print();                       //Congratulations you're Pikachu!
    return 0;
}
