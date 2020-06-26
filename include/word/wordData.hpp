#ifndef EXPECT_WORDDATA_H
#define EXPECT_WORDDATA_H

class WordData {
    private:
        int id, freq;
    public:
        WordData();
        WordData(int _id, int _freq);

        int getId();
        int getFreq();
};


#endif