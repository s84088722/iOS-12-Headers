//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TIInputMode, TILanguageModelAdaptationContext;
@protocol _ICContactFetchingDelegate;

@interface TILanguageModelLoader : NSObject
{
    NSArray *_staticResourcePaths;
    _Bool _usesLinguisticContext;
    id <_ICContactFetchingDelegate> _contactFetchingDelegate;
    TIInputMode *_inputMode;
    NSString *_dynamicResourcePath;
    NSArray *_mobileAssets;
    NSString *_clientIdentifier;
    NSString *_recipientIdentifier;
    TILanguageModelAdaptationContext *_adaptationContext;
    shared_ptr_e9f752ce _model;
}

+ (void)contactStoreDidChange:(id)arg1;
+ (void)startObservingContactStore;
+ (void)performMaintenance;
+ (void)dropResourcesExcludingInputModes:(id)arg1 flushCache:(_Bool)arg2;
+ (void)flushDynamicLearningCaches;
+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)arg1;
+ (id)sharedLanguageModelLoaderForInputMode:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(_Bool)arg4;
+ (id)recipientRecords;
+ (id)knownClients;
+ (shared_ptr_e9f752ce)stubForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;
+ (shared_ptr_e9f752ce)modelForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;
+ (void)resetClientAndRecipientCache;
+ (void)setOfflineTrainingEnabled:(_Bool)arg1;
+ (void)setAsynchronousLoad:(_Bool)arg1;
@property(retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property(retain, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) _Bool usesLinguisticContext; // @synthesize usesLinguisticContext=_usesLinguisticContext;
@property(readonly, nonatomic) NSArray *mobileAssets; // @synthesize mobileAssets=_mobileAssets;
@property(readonly, nonatomic) NSString *dynamicResourcePath; // @synthesize dynamicResourcePath=_dynamicResourcePath;
@property(readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic) shared_ptr_e9f752ce model; // @synthesize model=_model;
@property(nonatomic) id <_ICContactFetchingDelegate> contactFetchingDelegate; // @synthesize contactFetchingDelegate=_contactFetchingDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_e9f752ce)languageModelForAdaptationContext:(id)arg1;
- (shared_ptr_e9f752ce)lightweightLanguageModel;
- (shared_ptr_e9f752ce)sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (shared_ptr_e9f752ce)sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2;
- (void)setLanguageModelRecipientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lookupRecordForRecipientIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)findRecordsMatchingRecipient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLanguageModelClientIdentifier:(id)arg1;
- (shared_ptr_e9f752ce)newLanguageModel;
- (void)performLearningIfNecessaryForClient:(id)arg1 withModel:(shared_ptr_e9f752ce)arg2;
- (void)flushDynamicLearningCaches;
- (void)clearDynamicLearningCaches;
@property(readonly, nonatomic) NSArray *staticResourcePaths;
- (id)initWithInputMode:(id)arg1 dynamicResourcePath:(id)arg2 mobileAssets:(id)arg3 usesLinguisticContext:(_Bool)arg4;

@end

