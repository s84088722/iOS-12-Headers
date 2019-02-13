//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, REIdentifier;
@protocol REDonatedActionIdentifierProviding;

@interface REDonatedAction : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isIntentBacked;
    _Bool _localDonation;
    unsigned long long _type;
    NSDate *_creationDate;
    NSDate *_localSaveDate;
    REIdentifier *_donationIdentifier;
    id <REDonatedActionIdentifierProviding> _actionTypeIdentifier;
    id <REDonatedActionIdentifierProviding> _simplifiedActionTypeIdentifier;
    unsigned long long _relevanceProvidersHash;
    NSArray *_relevanceProviders;
    NSString *_intentTypeName;
    NSString *_activityType;
    NSDictionary *_metrics;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportedActivityType:(id)arg1 forBundleID:(id)arg2;
+ (id)bundleIdForExtensionId:(id)arg1;
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) NSString *intentTypeName; // @synthesize intentTypeName=_intentTypeName;
@property(readonly, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;
@property(readonly, nonatomic) unsigned long long relevanceProvidersHash; // @synthesize relevanceProvidersHash=_relevanceProvidersHash;
@property(readonly, nonatomic, getter=isLocalDonation) _Bool localDonation; // @synthesize localDonation=_localDonation;
@property(readonly, nonatomic) id <REDonatedActionIdentifierProviding> simplifiedActionTypeIdentifier; // @synthesize simplifiedActionTypeIdentifier=_simplifiedActionTypeIdentifier;
@property(readonly, nonatomic) id <REDonatedActionIdentifierProviding> actionTypeIdentifier; // @synthesize actionTypeIdentifier=_actionTypeIdentifier;
@property(readonly, nonatomic) REIdentifier *donationIdentifier; // @synthesize donationIdentifier=_donationIdentifier;
@property(readonly, nonatomic) NSDate *localSaveDate; // @synthesize localSaveDate=_localSaveDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadRelevantShortcut:(CDUnknownBlockType)arg1;
- (void)loadIntent:(CDUnknownBlockType)arg1;
- (void)loadUserActivity:(CDUnknownBlockType)arg1;
- (void)_loadDuetEvent:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long trainingActionIdentifier;
@property(readonly, nonatomic) NSString *localBundleIdentifier;
@property(readonly, nonatomic) NSString *remoteBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithEvent:(id)arg1 filtered:(_Bool)arg2;
- (unsigned long long)_hashRelevanceProviders:(id)arg1;
- (id)description;
- (id)_initRelevantShortcutWithEvent:(id)arg1 filtered:(_Bool)arg2;
- (id)_initUserActivityWithEvent:(id)arg1 filtered:(_Bool)arg2;
- (id)_initInteractionWithEvent:(id)arg1 filtered:(_Bool)arg2;

@end

