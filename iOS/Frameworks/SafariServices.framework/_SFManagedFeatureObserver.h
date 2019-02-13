//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/MCProfileConnectionObserver-Protocol.h>

@class LAContext, NSString;

@interface _SFManagedFeatureObserver : NSObject <MCProfileConnectionObserver>
{
    _Bool _cachedAuthenticationRequiredToAutoFill;
    LAContext *_context;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) _Bool authenticationRequiredToAutoFill;
- (_Bool)_isUserEnrolledInBiometricAuthentication;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

