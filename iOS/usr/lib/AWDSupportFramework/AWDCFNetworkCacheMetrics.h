//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCFNetworkCacheMetrics : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned long long _totalBytesWritten;
    NSString *_bundleID;
    struct {
        unsigned int timestamp:1;
        unsigned int totalBytesWritten:1;
    } _has;
}

@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(nonatomic) _Bool hasTotalBytesWritten;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

