//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCPrivateChannelMembershipController, NSSet;

@protocol FCPrivateChannelMembershipObserving <NSObject>

@optional
- (void)privateChannelMembershipController:(FCPrivateChannelMembershipController *)arg1 didAddMemberships:(NSSet *)arg2 changedMemberships:(NSSet *)arg3 removedMemberships:(NSSet *)arg4;
@end

