//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSData, NSSet, NSString;

@interface INAppInfo : NSObject <NSSecureCoding>
{
    NSString *_applicationIdentifier;
    NSString *_companionApplicationIdentifier;
    NSSet *_supportedActions;
    NSSet *_supportedActionsByExtensions;
    NSSet *_actionsRestrictedWhileLocked;
    NSSet *_actionsRestrictedWhileProtectedDataUnavailable;
    NSSet *_definedIntents;
}

+ (_Bool)supportsSecureCoding;
+ (id)appInfoWithData:(id)arg1 error:(id *)arg2;
+ (id)appInfoWithAppProxy:(id)arg1;
@property(copy, nonatomic) NSSet *definedIntents; // @synthesize definedIntents=_definedIntents;
@property(copy, nonatomic) NSSet *actionsRestrictedWhileProtectedDataUnavailable; // @synthesize actionsRestrictedWhileProtectedDataUnavailable=_actionsRestrictedWhileProtectedDataUnavailable;
@property(copy, nonatomic) NSSet *actionsRestrictedWhileLocked; // @synthesize actionsRestrictedWhileLocked=_actionsRestrictedWhileLocked;
@property(copy, nonatomic) NSSet *supportedActionsByExtensions; // @synthesize supportedActionsByExtensions=_supportedActionsByExtensions;
@property(copy, nonatomic) NSSet *supportedActions; // @synthesize supportedActions=_supportedActions;
@property(copy, nonatomic) NSString *companionApplicationIdentifier; // @synthesize companionApplicationIdentifier=_companionApplicationIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSData *data;

@end

