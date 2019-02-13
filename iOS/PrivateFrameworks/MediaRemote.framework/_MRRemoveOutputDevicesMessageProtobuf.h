//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _MRRemoveOutputDevicesMessageProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_outputDeviceUIDs;
}

+ (Class)outputDeviceUIDsType;
@property(retain, nonatomic) NSMutableArray *outputDeviceUIDs; // @synthesize outputDeviceUIDs=_outputDeviceUIDs;
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
- (id)outputDeviceUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDeviceUIDsCount;
- (void)addOutputDeviceUIDs:(id)arg1;
- (void)clearOutputDeviceUIDs;

@end

