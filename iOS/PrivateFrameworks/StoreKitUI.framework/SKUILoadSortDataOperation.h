//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SKUISortDataRequest, SSVLoadURLOperation;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation
{
    SSVLoadURLOperation *_underlyingOperation;
}

@property __weak SSVLoadURLOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) SKUISortDataRequest *resourceRequest; // @dynamic resourceRequest;

@end

