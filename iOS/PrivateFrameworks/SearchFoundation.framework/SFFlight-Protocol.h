//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFFlight <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *carrierPhoneNumber;
@property(copy, nonatomic) NSString *operatorFlightNumber;
@property(copy, nonatomic) NSString *operatorCarrierCode;
@property(copy, nonatomic) NSArray *legs;
@property(copy, nonatomic) NSString *flightNumber;
@property(copy, nonatomic) NSString *carrierName;
@property(copy, nonatomic) NSString *carrierCode;
@property(copy, nonatomic) NSString *flightID;
@end

