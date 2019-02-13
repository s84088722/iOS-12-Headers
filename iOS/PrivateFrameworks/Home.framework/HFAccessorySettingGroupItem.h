//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFAccessorySettingItemProtocol-Protocol.h>

@class HFAccessorySettingsEntity, HMAccessorySelectionSetting, HMAccessorySettingGroup, NSString;
@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFAccessorySettingGroupItem : HFItem <HFAccessorySettingItemProtocol>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    HFAccessorySettingsEntity *_entity;
    HMAccessorySettingGroup *_settingGroup;
    HMAccessorySelectionSetting *_selectionSetting;
}

@property(readonly, nonatomic) HMAccessorySelectionSetting *selectionSetting; // @synthesize selectionSetting=_selectionSetting;
@property(readonly, nonatomic) HMAccessorySettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
@property(readonly, nonatomic) HFAccessorySettingsEntity *entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (_Bool)_validateKeyPathDependencies;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) NSString *settingKeyPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 selectionSetting:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 group:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 entity:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

