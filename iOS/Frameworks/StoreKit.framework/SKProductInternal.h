//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSLocale, NSString, SKProductDiscount, SKProductSubscriptionPeriod;

__attribute__((visibility("hidden")))
@interface SKProductInternal : NSObject
{
    NSString *_contentVersion;
    _Bool _downloadable;
    NSArray *_downloadContentLengths;
    SKProductDiscount *_introductoryPrice;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
    NSString *_subscriptionGroupIdentifier;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
}

- (void).cxx_destruct;

@end

