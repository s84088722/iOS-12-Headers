//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, PLPublishingAgent;

@protocol PLPublishingAgentDelegate
- (void)publishingAgentDidEndPublishing:(PLPublishingAgent *)arg1 error:(NSError *)arg2;
- (void)publishingAgentDidBeginPublishing:(PLPublishingAgent *)arg1;
- (void)publishingAgentCancelButtonClicked:(PLPublishingAgent *)arg1;
- (void)publishingAgentDoneButtonClicked:(PLPublishingAgent *)arg1;
- (void)publishingAgentWillBeDisplayed:(PLPublishingAgent *)arg1;

@optional
- (void)publishingAgentDidEndRemaking:(PLPublishingAgent *)arg1 didSucceed:(_Bool)arg2;
- (void)publishingAgentDidStartRemaking:(PLPublishingAgent *)arg1;
@end

