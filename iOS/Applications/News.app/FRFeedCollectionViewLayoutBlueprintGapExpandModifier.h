//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class FCFeedDescriptor, FRFeedCollectionViewLayoutBlueprintVisibilityDetector, FRFeedCollectionViewLayoutIntegratorAutoexpansionOperation, FRFeedDataStorage, NFLFeedSettings, NSString;
@protocol FRFeldsparContext;

@interface FRFeedCollectionViewLayoutBlueprintGapExpandModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    _Bool _waitable;
    FCFeedDescriptor *_feed;
    NFLFeedSettings *_feedSettings;
    FRFeedDataStorage *_feedDataStorage;
    id <FRFeldsparContext> _feldsparContext;
    double _gapDistanceCheckRange;
    FRFeedCollectionViewLayoutIntegratorAutoexpansionOperation *_operation;
    FRFeedCollectionViewLayoutBlueprintVisibilityDetector *_visibilityDetector;
    unsigned long long _modification;
    NSString *_identifier;
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) _Bool waitable; // @synthesize waitable=_waitable;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintVisibilityDetector *visibilityDetector; // @synthesize visibilityDetector=_visibilityDetector;
@property(nonatomic) __weak FRFeedCollectionViewLayoutIntegratorAutoexpansionOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) double gapDistanceCheckRange; // @synthesize gapDistanceCheckRange=_gapDistanceCheckRange;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) FRFeedDataStorage *feedDataStorage; // @synthesize feedDataStorage=_feedDataStorage;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(copy, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
- (void).cxx_destruct;
- (id)removeAdSlotBetweenTopVideosAndMoreVideosGroup:(id)arg1;
- (id)findGapTileInfoWithinDistance:(double)arg1 fromTargetOffset:(struct CGPoint)arg2 inBlueprint:(id)arg3 tileInfoFrame:(out struct CGRect *)arg4;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)collectionViewBoundsDidChange:(struct CGRect)arg1;
- (void)cancel;
@property(readonly, copy) NSString *description;
- (id)initWithFeldsparContext:(id)arg1 feed:(id)arg2 feedSettings:(id)arg3 feedDataStorage:(id)arg4 visibleBounds:(struct CGRect)arg5 visibilityDetector:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

