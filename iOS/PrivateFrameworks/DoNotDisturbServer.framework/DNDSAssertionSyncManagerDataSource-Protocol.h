//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol DNDSAssertionSyncManager;

@protocol DNDSAssertionSyncManagerDataSource <NSObject>
- (NSDate *)lastModeAssertionsUpdateDateForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
- (NSDate *)lastModeAssertionsCompleteInvalidationDateForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
- (NSArray *)activeLocalModeAssertionsForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
@end

