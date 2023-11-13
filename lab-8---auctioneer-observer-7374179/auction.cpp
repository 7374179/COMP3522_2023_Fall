//
// Created by jyim3 on 2022-10-19.
//

#include "auction.hpp"
#include "auctioneer.hpp"

Auctioneer* auctioneer;



Auction::Auction(vector <Bidder *> bidders) {
    for (auto bidder : bidders) {
        auctioneer->register_bidder(bidder);
    }

}


void Auction::simulate_auction(string item, double start_price) {
    std::cout  << "Auctioning " << item << " at starting price $" << start_price << std::endl;
    auctioneer->accept_bid(start_price, nullptr);
}

void Auction::print_results() {
    if (!auctioneer) {
        std::cerr << "Auctioneer is not initialized." << std::endl;
        return;
    }

    Bidder* winning_bidder = auctioneer->get_highest_bidder();
    double final_bid = auctioneer->get_highest_bid();

    // Check if a winning bidder exists
    if (winning_bidder) {
        std::cout << "The Antique Vase goes to " << winning_bidder->getName()
                  << " for $" << final_bid << "\n\n";
    } else {
        std::cout << "No winning bidder." << std::endl;
    }

    // Iterate over the list of bidders to print their highest bids
    for (const auto& bidder : auctioneer->getBidders()) {
        if (bidder) { // Check if bidder pointer is not null
            std::cout << "Bidder: " << bidder->getName() << ", Highest bid: $"
                      << bidder->getHighestBid() << std::endl;
        }
    }
}

Auction::~Auction() {

}

