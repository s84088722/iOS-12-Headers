//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol BPSBuddyController;

@protocol BPSBuddyControllerDelegate <NSObject>
- (void)buddyControllerReleaseHoldAndSkip:(id <BPSBuddyController>)arg1;
- (void)buddyControllerReleaseHold:(id <BPSBuddyController>)arg1;
- (void)buddyControllerDone:(id <BPSBuddyController>)arg1;
@end

