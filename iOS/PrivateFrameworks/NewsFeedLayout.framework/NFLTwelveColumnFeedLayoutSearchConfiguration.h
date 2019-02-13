//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedLayoutSearchConfiguration-Protocol.h>

@class NSArray, NSString;

@interface NFLTwelveColumnFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>
{
    _Bool _showAccessoryText;
    NSString *_preferredContentSizeCategory;
}

@property(retain, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText; // @synthesize showAccessoryText=_showAccessoryText;
- (void).cxx_destruct;
- (id)preferredOrderingOfTileInfos:(id)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)_tilingOperationClassForRowType:(unsigned long long)arg1;
- (id)_transitionRankByToRowTypeFromRowType:(unsigned long long)arg1;
- (id)_transitions;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (_Bool)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
- (id)descriptionForRowType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *allRowTypes;
@property(readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
- (_Bool)supportsTileInfoType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

