//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCMMSuggestion-Protocol.h>

@class NSString, PXAssetCollectionActionManager;
@protocol PXDisplayAsset, PXPeopleFetchResult, PXUIImageProvider;

@interface _PXCMMSizingSuggestion : NSObject <PXCMMSuggestion>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    long long _count;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    id <PXPeopleFetchResult> _peopleFetchResult;
    PXAssetCollectionActionManager *_assetCollectionActionManager;
}

@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // @synthesize assetCollectionActionManager=_assetCollectionActionManager;
@property(readonly, nonatomic) id <PXPeopleFetchResult> peopleFetchResult; // @synthesize peopleFetchResult=_peopleFetchResult;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long aggregateMediaType;
- (double)scoreForSuggestionMatchingType:(long long)arg1;
- (void)registerMatchingType:(long long)arg1;
- (void)markAsActiveIfNeeded;
- (id)diagnosticsItem;
- (void)decline;
@property(readonly, nonatomic) _Bool containsUnverifiedPersons;
- (id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

