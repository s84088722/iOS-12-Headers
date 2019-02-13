//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCVoiceShortcutManagerXPCInterface-Protocol.h>

@class NSString, VCAccessSpecifier, VCVoiceShortcutManager;

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <VCVoiceShortcutManagerXPCInterface>
{
    VCAccessSpecifier *_accessSpecifier;
    VCVoiceShortcutManager *_underlyingManager;
}

@property(readonly, nonatomic) VCVoiceShortcutManager *underlyingManager; // @synthesize underlyingManager=_underlyingManager;
@property(readonly, nonatomic) VCAccessSpecifier *accessSpecifier; // @synthesize accessSpecifier=_accessSpecifier;
- (void).cxx_destruct;
- (void)getCloudKitAccountStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestDataMigration:(CDUnknownBlockType)arg1;
- (void)validateVoiceShortcutPhrases:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)describeSyncStateIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
- (void)requestSyncForServiceClassName:(id)arg1 forceReset:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 workflow:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addVoiceShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getVoiceShortcutWithPhrase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getNumberOfVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUnderlyingManager:(id)arg1 accessSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

