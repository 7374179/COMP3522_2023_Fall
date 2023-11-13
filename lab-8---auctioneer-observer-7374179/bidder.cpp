//
// Created by jyim3 on 2022-10-19.
//

#include "bidder.hpp"
#include "Auctioneer.hpp"
#include <random>


void Bidder::update(Auctioneer *auctioneer) {
    if (auctioneer->get_highest_bidder() != this) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> dis(0.0, 100.0);

        double chance = dis(gen);
        if (chance < this->bid_probability) {
            double newBid = auctioneer->get_highest_bid() * this->bid_increase_perc;

            if (newBid <= this->budget) {
                auctioneer->accept_bid(newBid, this);
                this->highest_bid = newBid;
            }
        }
    }
}
