//
// Created by jyim3 on 2022-10-19.
//

#pragma once

#include <iostream>
using namespace std;
class Auctioneer; //forward declaration

class Bidder {
    string name;
    double budget;
    double bid_probability;
    double bid_increase_perc;
    double highest_bid;

public:
    Bidder(string name, double budget=100, double bid_probability=0.35, double bid_increase_perc=1.1) :
    name(name), budget(budget), bid_probability(bid_probability), bid_increase_perc(bid_increase_perc), highest_bid(0) {}

    /*
     * update is called by the auctioneer when they need to notify
     * the bidder of something important
     */
    void update(Auctioneer *auctioneer);

    friend ostream& operator<<(ostream &os, const Bidder& bidder) {
//        os << bidder.name;
        os << "Bidder: " << bidder.name << ", Highest bid: " << bidder.highest_bid;
        return os;
    }

    string getName() const {
        return name;
    }

    double getHighestBid() const { return highest_bid; }

};

