//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SYDMessage;

@protocol SYDServerMessages
- (void)setDefaultsConfigWithMessage:(SYDMessage *)arg1;
- (void)printDebugDescriptionWithMessage:(SYDMessage *)arg1;
- (void)passwordChangeWithMessage:(SYDMessage *)arg1;
- (void)accountChangeWithMessage:(SYDMessage *)arg1;
- (void)pingWithMessage:(SYDMessage *)arg1;
- (void)getConfigurationWithMessage:(SYDMessage *)arg1;
- (void)discardJournalEntriesWithMessage:(SYDMessage *)arg1;
- (void)trackSynchronizeRemoteWithMessage:(SYDMessage *)arg1;
- (void)synchronizeRemoteWithMessage:(SYDMessage *)arg1;
- (void)unregisterWithMessage:(SYDMessage *)arg1;
- (void)registerWithMessage:(SYDMessage *)arg1;
- (void)synchronizeWithMessage:(SYDMessage *)arg1;
@end

