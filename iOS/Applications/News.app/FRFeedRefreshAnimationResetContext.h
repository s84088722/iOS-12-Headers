//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFStateMachineContextType-Protocol.h"

@class NSString;

@interface FRFeedRefreshAnimationResetContext : NSObject <NFStateMachineContextType>
{
    _Bool _animated;
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, copy) NSString *description;
- (id)initWithAnimation:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

