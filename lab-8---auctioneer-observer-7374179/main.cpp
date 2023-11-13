//Student Name: Taehyuk Chung
//Student Number: A01084553

#include <iostream>

#include "bidder.hpp"
#include "auction.hpp"
#include <vector>

double generateRandom(double min, double max)
{
    double f = (double)rand() / RAND_MAX;
    return min + f * (max - min);
}

int main() {
    vector<Bidder *> bidders;
    const double MIN_BID = 0;
    const double MAX_BID = 100;
    srand(time(0));

    //Hardcoding the bidders.
    bidders.push_back(new Bidder("Jojo", 3000, generateRandom(MIN_BID, MAX_BID), 1.2));
    bidders.push_back(new Bidder("Melissa", 7000, generateRandom(MIN_BID, MAX_BID), 1.5));
    bidders.push_back(new Bidder("Priya", 15000, generateRandom(MIN_BID, MAX_BID), 1.1));
    bidders.push_back(new Bidder("Kewei", 800, generateRandom(MIN_BID, MAX_BID), 1.9));
    bidders.push_back(new Bidder("Scott", 4000, generateRandom(MIN_BID, MAX_BID), 2));

    cout << "Starting Auction!!" << endl;
    cout << "------------------" << endl;
    Auction my_auction(bidders);
    my_auction.simulate_auction("Antique Vase", 100);

    my_auction.print_results();

    for (Bidder* bidder : bidders) {
        delete bidder;
    }

        return 0;
}
