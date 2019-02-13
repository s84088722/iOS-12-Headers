//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PKPeerPaymentContactResolver, UIFont;

@interface PKPaymentTransactionCellController : NSObject
{
    UIFont *_transactionCellPrimaryLabelFont;
    UIFont *_transactionCellPrimaryLabelPeerPaymentFont;
    UIFont *_transactionCellValueLabelFont;
    UIFont *_transactionCellValueLabelPeerPaymentFont;
    UIFont *_transactionCellSecondaryLabelFont;
    UIFont *_transactionCellSecondaryLabelPeerPaymentFont;
    NSData *_businessAvatarImageData;
    NSData *_topUpAvatarImageData;
    PKPeerPaymentContactResolver *_contactResolver;
}

+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 includeBankAccountSuffix:(_Bool)arg2 useGenericNameIfNoDescriptionAvailable:(_Bool)arg3;
@property(readonly, nonatomic) PKPeerPaymentContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
- (void).cxx_destruct;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (id)_businessAvatarImageData;
- (id)_topUpAvatarImageData;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (id)_transactionCellSecondaryLabelFontForPass:(id)arg1;
- (id)_transactionCellPrimaryLabelFontForPass:(id)arg1;
- (id)_transactionCellValueLabelFontForPass:(id)arg1;
- (double)paymentTransactionCellHeightForPass:(id)arg1;
- (id)_relativeDateAndStatusForTransaction:(id)arg1;
- (void)configureCell:(id)arg1 forTransaction:(id)arg2 paymentPass:(id)arg3 detailStyle:(long long)arg4 deviceName:(id)arg5 avatarViewDelegate:(id)arg6;
- (id)initWithContactResolver:(id)arg1;

@end

