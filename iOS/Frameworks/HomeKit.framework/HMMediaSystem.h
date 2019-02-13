//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMAccessorySettingsContainer-Protocol.h>
#import <HomeKit/HMApplicationData-Protocol.h>
#import <HomeKit/HMControllable-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMediaObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMAccessorySettings, HMApplicationData, HMFUnfairLock, HMHome, HMMediaSession, HMMutableArray, HMSymptomsHandler, NSArray, NSString, NSUUID, _HMContext;
@protocol HMMediaSystemDelegate, OS_dispatch_queue;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMControllable, HMMediaObject, HMApplicationData, HMAccessorySettingsContainer>
{
    HMFUnfairLock *_lock;
    _Bool _compatible;
    NSString *_name;
    NSString *_configuredName;
    NSUUID *_uniqueIdentifier;
    HMAccessorySettings *_settings;
    id <HMMediaSystemDelegate> _delegate;
    HMApplicationData *_applicationData;
    HMHome *_home;
    HMSymptomsHandler *_symptomsHandler;
    _HMContext *_context;
    NSUUID *_uuid;
    HMMutableArray *_componentsArray;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2;
@property(retain, nonatomic) HMMutableArray *componentsArray; // @synthesize componentsArray=_componentsArray;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)notifyDelegateOfUpdatedMediaSession:(id)arg1;
- (void)notifyDelegateOfUpdatedSettings:(id)arg1;
- (void)notifyDelegateOfUpdatedApplicationData:(id)arg1;
- (void)notifyDelegateOfUpdatedComponents:(id)arg1;
- (void)notifyDelegateOfUpdatedConfiguredName:(id)arg1;
- (void)notifyDelegateOfUpdatedName:(id)arg1;
- (void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2 includeSettingsAndAppData:(_Bool)arg3;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, getter=isControllable) _Bool controllable;
@property(readonly) __weak HMHome *containerHome;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleSystemUpdatedNotification:(id)arg1;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)_updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
- (void)setSettings:(id)arg1;
@property(readonly) HMAccessorySettings *settings; // @synthesize settings=_settings;
@property(readonly, copy) HMMediaSession *mediaSession;
@property(readonly, nonatomic) HMAccessoryCategory *category;
@property(readonly, nonatomic) NSArray *components;
@property(readonly, nonatomic, getter=isCompatible) _Bool compatible; // @synthesize compatible=_compatible;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)setConfiguredName:(id)arg1;
@property(readonly, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
- (void)setName:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property __weak id <HMMediaSystemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAccessoryReference;
- (void)_invalidate;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(_Bool)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

