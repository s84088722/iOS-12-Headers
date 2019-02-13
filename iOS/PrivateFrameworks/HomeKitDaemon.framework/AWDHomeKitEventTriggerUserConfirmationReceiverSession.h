//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitEventTriggerUserConfirmationReceiverSession : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned long long _userResponseDelay;
    int _resultErrorCode;
    NSString *_sessionID;
    struct {
        unsigned int timestamp:1;
        unsigned int userResponseDelay:1;
        unsigned int resultErrorCode:1;
    } _has;
}

@property(nonatomic) unsigned long long userResponseDelay; // @synthesize userResponseDelay=_userResponseDelay;
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUserResponseDelay;
@property(nonatomic) _Bool hasResultErrorCode;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end
