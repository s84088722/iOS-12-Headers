//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MicroPaymentProductSubscriptionPeriod, NSNumber;

@interface MicroPaymentProductDiscount : NSObject
{
    NSNumber *_price;
    MicroPaymentProductSubscriptionPeriod *_subscriptionPeriod;
    unsigned long long _numberOfPeriods;
    unsigned long long _paymentMode;
}

@property(nonatomic) unsigned long long paymentMode; // @synthesize paymentMode=_paymentMode;
@property(nonatomic) unsigned long long numberOfPeriods; // @synthesize numberOfPeriods=_numberOfPeriods;
@property(retain, nonatomic) MicroPaymentProductSubscriptionPeriod *subscriptionPeriod; // @synthesize subscriptionPeriod=_subscriptionPeriod;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (id)copyProductDiscount;
- (id)initWithDictionary:(id)arg1;

@end
