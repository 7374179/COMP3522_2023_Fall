//
// Created by jyim3 on 2022-10-19.
//

#include "auctioneer.hpp"

void Auctioneer::register_bidder(Bidder * bidder) {
    bidders.push_back(bidder);
}

void Auctioneer::reset_auctioneer() {
    bidders.clear();
    highest_bid = 0;
    highest_bidder = nullptr;
}

void Auctioneer::notify_bidders() {
    for (Bidder* bidder : bidders) {
        if (bidder != highest_bidder) { // Don't notify the highest bidder
            bidder->update(this);
        }
    }
}

void Auctioneer::accept_bid(double bid, Bidder *bidder) {
    if (bidder != nullptr && bid > highest_bid) {
        highest_bid = bid;
        highest_bidder = bidder;
        notify_bidders();
    }
}
