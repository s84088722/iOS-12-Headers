//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBCurrencyAmountValue;

@protocol _INPBPaymentAmountValue <NSObject>
@property(readonly, nonatomic) _Bool hasValue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *value;
@property(nonatomic) _Bool hasAmountType;
@property(nonatomic) int amountType;
- (int)StringAsAmountType:(NSString *)arg1;
- (NSString *)amountTypeAsString:(int)arg1;
@end
