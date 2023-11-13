//
// Created by jyim3 on 2022-10-19.
//

#pragma once

#include "bidder.hpp"
#include <vector>

/*
Simulates an auction. Is responsible for driving the auctioneer and
        the bidders.
*/
class Auction {
public:

    /*
    Initialize an auction. Requires a list of bidders that are
    attending the auction and can bid.
    :param bidders: vector of Bidder pointers
    */
    Auction(vector <Bidder *> bidders);

    /*
    Starts the auction for the given item at the given starting
    price. Drives the auction till completion and prints the results.
    :param item: string, name of item.
    :param start_price: float
     */
    void simulate_auction(string item, double start_price);

    void print_results();

    ~Auction(); // Destructor to clean up bidders




};
