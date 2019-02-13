//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying>
{
    unsigned int _badgeCount;
    _Bool _forDevice;
    struct {
        unsigned int badgeCount:1;
        unsigned int forDevice:1;
    } _has;
}

+ (id)options;
@property(nonatomic) _Bool forDevice; // @synthesize forDevice=_forDevice;
@property(nonatomic) unsigned int badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasForDevice;
@property(nonatomic) _Bool hasBadgeCount;

@end

