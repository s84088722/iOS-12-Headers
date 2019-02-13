//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INRestaurant, NSDate, NSDateComponents, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingsIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSDate *latestBookingDateForResults;
@property(copy, nonatomic) NSDate *earliestBookingDateForResults;
@property(copy, nonatomic) NSNumber *maximumNumberOfResults;
@property(copy, nonatomic) NSDateComponents *preferredBookingDateComponents;
@property(nonatomic) unsigned long long partySize;
@property(copy, nonatomic) INRestaurant *restaurant;
- (id)init;
@end

