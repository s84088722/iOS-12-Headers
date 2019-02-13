//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class CLLocation, NSDate, NSNumber, NSString;

@interface RTWalletManagerNotificationPaymentUsed : RTNotification
{
    NSString *_passIdentifier;
    NSString *_transactionIdentifier;
    NSDate *_date;
    CLLocation *_location;
    NSNumber *_muid;
    NSNumber *_provider;
}

@property(readonly, nonatomic) NSNumber *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSNumber *muid; // @synthesize muid=_muid;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, copy, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
- (void).cxx_destruct;

@end

