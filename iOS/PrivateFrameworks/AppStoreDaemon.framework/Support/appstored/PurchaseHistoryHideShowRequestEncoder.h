//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAAPRequestDataProvider-Protocol.h"

@class NSArray, NSString;

@interface PurchaseHistoryHideShowRequestEncoder : NSObject <DAAPRequestDataProvider>
{
    NSArray *_items;
}

- (void).cxx_destruct;
- (id)dataForRequestWithError:(id *)arg1;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

