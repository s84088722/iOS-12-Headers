//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSDate, NSString;

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource
{
    short _cloudLocalState;
    short _prefetchCount;
    NSDate *_dateCreated;
    NSString *_itemIdentifier;
    NSDate *_lastOnDemandDownloadDate;
    NSDate *_lastPrefetchDate;
    NSDate *_prunedAt;
}

@property(retain, nonatomic) NSDate *prunedAt; // @synthesize prunedAt=_prunedAt;
@property(nonatomic) short prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(retain, nonatomic) NSDate *lastPrefetchDate; // @synthesize lastPrefetchDate=_lastPrefetchDate;
@property(retain, nonatomic) NSDate *lastOnDemandDownloadDate; // @synthesize lastOnDemandDownloadDate=_lastOnDemandDownloadDate;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) short cloudLocalState; // @synthesize cloudLocalState=_cloudLocalState;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void).cxx_destruct;
- (id)initWithCloudAttributes:(id)arg1;
- (id)initWithCloudResource:(id)arg1;

@end

