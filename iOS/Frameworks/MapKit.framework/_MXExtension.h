//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSExtension, NSSet, NSString, _MXExtensionProvider;

@interface _MXExtension : NSObject
{
    NSString *_identifier;
    _MXExtensionProvider *_provider;
}

+ (void)setShouldDeserializeCacheItems:(_Bool)arg1;
+ (_Bool)shouldDeserializeCacheItems;
@property(nonatomic) __weak _MXExtensionProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_iconWithFormat:(int)arg1;
- (id)_iconForTableUI;
- (id)_containingAppIdentifer;
- (id)siblingExtensions;
- (_Bool)_isIntentExtension;
- (_Bool)_isMapsExtension;
- (_Bool)_setEnabled:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSExtension *extension;
@property(readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)description;
@property(readonly, copy, nonatomic) NSSet *capabilities;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, copy, nonatomic) NSDictionary *attributes;
@property(readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier;
- (id)initWithExtensionIdentifier:(id)arg1 extensionProvider:(id)arg2;
- (void)startRideSharingSearchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)startExtensionServiceWithInputItems:(id)arg1 begin:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canSupportIntentClass:(Class)arg1;
- (_Bool)canSupportIntent:(id)arg1;
- (void)_loadCacheItems:(id)arg1;
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
