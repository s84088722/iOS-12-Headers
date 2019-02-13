//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBUserActivityData-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding>
{
    NSString *_activityType;
    NSArray *_userInfos;
}

@property(copy, nonatomic) NSArray *userInfos; // @synthesize userInfos=_userInfos;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfoCount;
- (void)addUserInfo:(id)arg1;
- (void)clearUserInfo;
- (void)setUserInfo:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

