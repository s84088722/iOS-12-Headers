//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXUIService-Protocol.h"

@class AXElementInteractionViewController, NSString;

@interface AXElementInteractionUIServer : NSObject <AXUIService>
{
    AXElementInteractionViewController *_viewController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleDisplayFrame:(struct CGRect)arg1 path:(struct CGPath *)arg2;
- (void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

