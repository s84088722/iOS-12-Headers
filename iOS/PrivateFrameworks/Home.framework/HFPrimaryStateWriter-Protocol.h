//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFTogglableControlItem-Protocol.h>
#import <Home/NSObject-Protocol.h>

@class NAFuture;

@protocol HFPrimaryStateWriter <NSObject, HFTogglableControlItem>
- (NAFuture *)togglePrimaryState;
- (NAFuture *)writePrimaryState:(long long)arg1;
@end

