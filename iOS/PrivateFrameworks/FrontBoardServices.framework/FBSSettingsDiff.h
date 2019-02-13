//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class BSSettings, BSSettingsDiff, NSString;

@interface FBSSettingsDiff : NSObject <BSXPCCoding, BSSettingDescriptionProvider>
{
    BSSettings *_changes;
    BSSettingsDiff *_otherSettingsDiff;
    Class _settingsClass;
}

- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectOtherChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)inspectChangesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)evaluateWithInspector:(id)arg1 context:(void *)arg2;
- (void)dealloc;
- (id)init;
- (id)_initWithChanges:(id)arg1 otherSettingsDiff:(id)arg2 settingsClass:(Class)arg3;
- (id)initWithChanges:(id)arg1 fromSettings:(id)arg2 toSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

