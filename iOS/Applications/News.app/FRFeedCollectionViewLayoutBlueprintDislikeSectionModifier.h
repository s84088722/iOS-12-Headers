//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class NFLFeedSettings, NSString;
@protocol FCFeedViewportRemoveGroupOperationType, FCNewsAppConfigurationManager;

@interface FRFeedCollectionViewLayoutBlueprintDislikeSectionModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    NSString *_sectionID;
    id <FCFeedViewportRemoveGroupOperationType> _operation;
    NFLFeedSettings *_feedSettings;
}

@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain) id <FCFeedViewportRemoveGroupOperationType> operation; // @synthesize operation=_operation;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long modification;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) _Bool waitable;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSectionID:(id)arg1 appConfigurationManager:(id)arg2 viewportRemoveGroupOperation:(id)arg3 feedSettings:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

