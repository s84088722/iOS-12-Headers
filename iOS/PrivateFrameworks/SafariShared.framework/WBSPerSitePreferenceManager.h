//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSPerSitePreferenceManager-Protocol.h>

@class NSString;
@protocol WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerDelegate, WBSPerSitePreferenceManagerStorageDelegate;

@interface WBSPerSitePreferenceManager : NSObject <WBSPerSitePreferenceManager>
{
    id <WBSPerSitePreferenceManagerDelegate> _delegate;
    id <WBSPerSitePreferenceManagerStorageDelegate> _storageDelegate;
    id <WBSPerSitePreferenceManagerDefaultsDelegate> _defaultsDelegate;
}

@property(nonatomic) __weak id <WBSPerSitePreferenceManagerDefaultsDelegate> defaultsDelegate; // @synthesize defaultsDelegate=_defaultsDelegate;
@property(nonatomic) __weak id <WBSPerSitePreferenceManagerStorageDelegate> storageDelegate; // @synthesize storageDelegate=_storageDelegate;
@property(nonatomic) __weak id <WBSPerSitePreferenceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_validatePreferenceValue:(id)arg1 inPreference:(id)arg2;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

