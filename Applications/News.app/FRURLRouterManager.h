//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRURLRouterManagerType-Protocol.h"

@class NSMutableArray, NSString;

@interface FRURLRouterManager : NSObject <FRURLRouterManagerType>
{
    NSMutableArray *_routers;
}

@property(readonly, nonatomic) NSMutableArray *routers; // @synthesize routers=_routers;
- (void).cxx_destruct;
- (void)addRoutable:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)canHandleURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

