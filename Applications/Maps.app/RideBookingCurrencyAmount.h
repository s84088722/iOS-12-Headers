//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

__attribute__((visibility("hidden")))
@interface RideBookingCurrencyAmount : NSObject
{
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
}

+ (id)_currencySymbolForCode:(id)arg1;
+ (id)_localeForCode:(id)arg1;
@property(readonly, copy) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, copy) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)currencySymbol;
- (id)formattedStringIncludeSymbol:(_Bool)arg1;
- (id)formattedString;

@end
