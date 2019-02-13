//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@interface ICMusicSubscriptionStatus : NSObject <NSCopying>
{
    _Bool _minorAccountHolder;
    _Bool _hasFamily;
    _Bool _hasFamilyGreaterThanOneMember;
    _Bool _headOfHousehold;
    _Bool _matchEnabled;
    _Bool _hasOfflineSlots;
    _Bool _inFreeTrial;
    _Bool _eligibleForFreeTrial;
    _Bool _purchaser;
    _Bool _administrator;
    NSDictionary *_dictionaryRepresentation;
    NSDate *_expirationDate;
    long long _carrierBundlingStatusType;
    long long _reasonType;
    long long _statusType;
    long long _statusCode;
    NSArray *_termsStatusList;
}

@property(readonly, copy, nonatomic) NSArray *termsStatusList; // @synthesize termsStatusList=_termsStatusList;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic, getter=isAdministrator) _Bool administrator; // @synthesize administrator=_administrator;
@property(readonly, nonatomic) long long statusType; // @synthesize statusType=_statusType;
@property(readonly, nonatomic) long long reasonType; // @synthesize reasonType=_reasonType;
@property(readonly, nonatomic) long long carrierBundlingStatusType; // @synthesize carrierBundlingStatusType=_carrierBundlingStatusType;
@property(readonly, nonatomic, getter=isPurchaser) _Bool purchaser; // @synthesize purchaser=_purchaser;
@property(readonly, nonatomic, getter=isEligibleForFreeTrial) _Bool eligibleForFreeTrial; // @synthesize eligibleForFreeTrial=_eligibleForFreeTrial;
@property(readonly, nonatomic, getter=isInFreeTrial) _Bool inFreeTrial; // @synthesize inFreeTrial=_inFreeTrial;
@property(readonly, nonatomic) _Bool hasOfflineSlots; // @synthesize hasOfflineSlots=_hasOfflineSlots;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic, getter=isMatchEnabled) _Bool matchEnabled; // @synthesize matchEnabled=_matchEnabled;
@property(readonly, nonatomic, getter=isHeadOfHousehold) _Bool headOfHousehold; // @synthesize headOfHousehold=_headOfHousehold;
@property(readonly, nonatomic) _Bool hasFamilyGreaterThanOneMember; // @synthesize hasFamilyGreaterThanOneMember=_hasFamilyGreaterThanOneMember;
@property(readonly, nonatomic) _Bool hasFamily; // @synthesize hasFamily=_hasFamily;
@property(readonly, nonatomic, getter=isMinorAccountHolder) _Bool minorAccountHolder; // @synthesize minorAccountHolder=_minorAccountHolder;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToStatus:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end

