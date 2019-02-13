//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRPurchaseButtonTextProvider-Protocol.h"

@class FCPurchase, NSString;
@protocol FCTagProviding;

@interface FRPlacardPurchaseButtonTextProvider : NSObject <FRPurchaseButtonTextProvider>
{
    FCPurchase *_purchase;
    id <FCTagProviding> _tag;
}

@property(retain, nonatomic) id <FCTagProviding> tag; // @synthesize tag=_tag;
@property(retain, nonatomic) FCPurchase *purchase; // @synthesize purchase=_purchase;
- (void).cxx_destruct;
- (void)displayTextForMultiOfferWithPurchase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayTextForSingleOfferWithPurchase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)buttonTextWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPurchase:(id)arg1 tag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

