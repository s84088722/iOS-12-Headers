//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber;

@protocol PKPaymentSetupPurchaseAmountViewDelegate <NSObject>
- (void)transferBalanceFromExistingCard;
- (void)didUpdateAmount:(NSDecimalNumber *)arg1 isValid:(_Bool)arg2;
- (void)shakeCard;
@end

