//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBPaymentMethodValue, _INPBRideOption, _INPBTimestamp;

@protocol _INPBListRideOptionsIntentResponse <NSObject>
+ (Class)rideOptionsType;
+ (Class)paymentMethodsType;
@property(nonatomic) _Bool hasSupportsApplePayForPayment;
@property(nonatomic) _Bool supportsApplePayForPayment;
@property(readonly, nonatomic) unsigned long long rideOptionsCount;
@property(copy, nonatomic) NSArray *rideOptions;
@property(readonly, nonatomic) unsigned long long paymentMethodsCount;
@property(copy, nonatomic) NSArray *paymentMethods;
@property(readonly, nonatomic) _Bool hasExpirationDate;
@property(retain, nonatomic) _INPBTimestamp *expirationDate;
- (_INPBRideOption *)rideOptionsAtIndex:(unsigned long long)arg1;
- (void)addRideOptions:(_INPBRideOption *)arg1;
- (void)clearRideOptions;
- (_INPBPaymentMethodValue *)paymentMethodsAtIndex:(unsigned long long)arg1;
- (void)addPaymentMethods:(_INPBPaymentMethodValue *)arg1;
- (void)clearPaymentMethods;
@end

