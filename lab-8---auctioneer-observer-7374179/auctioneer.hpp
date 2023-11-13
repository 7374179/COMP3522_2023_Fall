//
// Created by jyim3 on 2022-10-19.
//

#pragma once

#include <vector>
#include "bidder.hpp"

using namespace std;

/*
The auctioneer acts as the "subject". This class is responsible for
tracking the highest bid and notifying the bidders if it changes.
*/
class Auctioneer {
    vector <Bidder *> bidders;
    double highest_bid = 0;
    Bidder *highest_bidder = nullptr;

public:
    Auctioneer() = default;

    /*
    Adds a bidder to the list of tracked bidders.
    :param bidder: object with __call__(auctioneer) interface.
     */
    void register_bidder(Bidder * bidder);

    /*
    Resets the auctioneer. Removes all the bidders and resets the
    highest bid to 0.
     */
    void reset_auctioneer();

    /*
    Executes all the bidder callbacks. Should only be called if the
    highest bid has changed.
     */
    void notify_bidders();

    /*
    Accepts a new bid and updates the highest bid. This notifies all
            the bidders via their callbacks.
    :param bid: a double.
    :precondition bid: should be higher than the existing bid.
    :param bidder: The bidder that placed the bid.
    */
    void accept_bid(double bid, Bidder *bidder = nullptr);

    // Public getter for highest_bid
    double get_highest_bid() const {
        return highest_bid;
    }

    // Public getter for highest_bidder
    Bidder* get_highest_bidder() const {
        return highest_bidder;
    }

    const vector<Bidder*>& getBidders() const {
        return bidders;
    }


};



