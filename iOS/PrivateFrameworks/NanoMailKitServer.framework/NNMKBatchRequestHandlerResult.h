//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NNMKBatchRequestHandlerResult : NSObject
{
    NSArray *_fetchResults;
    NSArray *_mailboxesToTriggerFullSync;
    NSArray *_missingMessageHeaderIds;
    NSArray *_messageIdsForRequestingContentDownload;
}

@property(retain, nonatomic) NSArray *messageIdsForRequestingContentDownload; // @synthesize messageIdsForRequestingContentDownload=_messageIdsForRequestingContentDownload;
@property(retain, nonatomic) NSArray *missingMessageHeaderIds; // @synthesize missingMessageHeaderIds=_missingMessageHeaderIds;
@property(retain, nonatomic) NSArray *mailboxesToTriggerFullSync; // @synthesize mailboxesToTriggerFullSync=_mailboxesToTriggerFullSync;
@property(retain, nonatomic) NSArray *fetchResults; // @synthesize fetchResults=_fetchResults;
- (void).cxx_destruct;

@end

