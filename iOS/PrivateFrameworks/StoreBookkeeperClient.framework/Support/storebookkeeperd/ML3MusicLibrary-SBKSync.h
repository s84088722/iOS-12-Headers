//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (SBKSync)
- (void)SBKCommitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;
- (void)SBKCancelUniversalPlaybackPositionTransaction:(id)arg1;
- (id)SBKBeginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;
- (id)SBKSQLQueryStringForItemsNeedingPush;
- (id)SBKQueryForTracksNeedingPushWithEntityRevisionAnchor:(unsigned long long)arg1 orderingTerms:(id)arg2;
@end
