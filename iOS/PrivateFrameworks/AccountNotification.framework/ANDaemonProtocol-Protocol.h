//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountNotification/NSObject-Protocol.h>

@class ANAccountNotification, ANSectionSubtypeDescriptor, NSString;

@protocol ANDaemonProtocol <NSObject>
- (void)removeNotificationsWithEventID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeNotificationWithID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeSectionSubtypeWithDescriptor:(ANSectionSubtypeDescriptor *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)addSectionSubtypeDescriptor:(ANSectionSubtypeDescriptor *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)addNotification:(ANAccountNotification *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
@end
