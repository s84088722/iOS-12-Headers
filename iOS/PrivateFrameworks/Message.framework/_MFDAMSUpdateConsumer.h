//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/_MFDAMSBasicConsumer.h>

#import <Message/MFDASyncActionsConsumer-Protocol.h>

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
{
}

- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)commitSyncActions;
- (void)receiveSyncActions:(id)arg1;
- (_Bool)handleItems:(id)arg1;
- (void)drainMailbox;

@end

