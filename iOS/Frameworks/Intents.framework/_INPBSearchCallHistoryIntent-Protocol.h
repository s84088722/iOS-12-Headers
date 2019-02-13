//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContact, _INPBDateTimeRange, _INPBIntentMetadata;

@protocol _INPBSearchCallHistoryIntent <NSObject>
@property(nonatomic) _Bool hasUnseen;
@property(nonatomic) _Bool unseen;
@property(readonly, nonatomic) _Bool hasTargetContact;
@property(retain, nonatomic) _INPBContact *targetContact;
@property(readonly, nonatomic) _Bool hasRecipient;
@property(retain, nonatomic) _INPBContact *recipient;
@property(nonatomic) _Bool hasPreferredCallProvider;
@property(nonatomic) int preferredCallProvider;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property(readonly, nonatomic) unsigned long long capabilitiesCount;
@property(readonly, nonatomic) int *capabilities;
@property(readonly, nonatomic) unsigned long long callTypesCount;
@property(readonly, nonatomic) int *callTypes;
@property(nonatomic) _Bool hasCallType;
@property(nonatomic) int callType;
@property(readonly, nonatomic) unsigned long long callCapabilitiesCount;
@property(readonly, nonatomic) int *callCapabilities;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (int)StringAsCapabilities:(NSString *)arg1;
- (NSString *)capabilitiesAsString:(int)arg1;
- (void)setCapabilities:(int *)arg1 count:(unsigned long long)arg2;
- (int)capabilitiesAtIndex:(unsigned long long)arg1;
- (void)addCapabilities:(int)arg1;
- (void)clearCapabilities;
- (int)StringAsCallTypes:(NSString *)arg1;
- (NSString *)callTypesAsString:(int)arg1;
- (void)setCallTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (void)addCallTypes:(int)arg1;
- (void)clearCallTypes;
- (int)StringAsCallType:(NSString *)arg1;
- (NSString *)callTypeAsString:(int)arg1;
- (int)StringAsCallCapabilities:(NSString *)arg1;
- (NSString *)callCapabilitiesAsString:(int)arg1;
- (void)setCallCapabilities:(int *)arg1 count:(unsigned long long)arg2;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
- (void)addCallCapabilities:(int)arg1;
- (void)clearCallCapabilities;
@end

