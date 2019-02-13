//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFFlight-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFFlight : NSObject <SFFlight, NSSecureCoding, NSCopying>
{
    NSString *_flightID;
    NSString *_carrierCode;
    NSString *_carrierName;
    NSString *_flightNumber;
    NSArray *_legs;
    NSString *_operatorCarrierCode;
    NSString *_operatorFlightNumber;
    NSString *_carrierPhoneNumber;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *carrierPhoneNumber; // @synthesize carrierPhoneNumber=_carrierPhoneNumber;
@property(copy, nonatomic) NSString *operatorFlightNumber; // @synthesize operatorFlightNumber=_operatorFlightNumber;
@property(copy, nonatomic) NSString *operatorCarrierCode; // @synthesize operatorCarrierCode=_operatorCarrierCode;
@property(copy, nonatomic) NSArray *legs; // @synthesize legs=_legs;
@property(copy, nonatomic) NSString *flightNumber; // @synthesize flightNumber=_flightNumber;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(copy, nonatomic) NSString *carrierCode; // @synthesize carrierCode=_carrierCode;
@property(copy, nonatomic) NSString *flightID; // @synthesize flightID=_flightID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

