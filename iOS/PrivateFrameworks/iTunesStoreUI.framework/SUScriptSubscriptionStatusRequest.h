//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptSubscriptionStatusRequest : SUScriptObject
{
    long long _carrierBundleProvisioningStyle;
    _Bool _ignoreCache;
    long long _reason;
    long long _service;
    _Bool _wantsPartialResults;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void)_handleRequestCompletionWithSubscriptionStatus:(id)arg1 isFinal:(_Bool)arg2 scriptCallbackFunction:(id)arg3;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)performRequestWithCallbackFunction:(id)arg1;
@property(readonly) NSString *serviceNameAppleMusic;
@property(readonly) NSString *reasonNameDeepLink;
@property id wantsPartialResults;
@property(copy) NSString *serviceName;
@property(copy) NSString *reasonName;
@property id ignoreCache;
@property(copy) NSString *carrierBundleProvisioningStyleName;
- (id)_className;
- (id)init;

@end

