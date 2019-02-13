//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDDEDExtensionCompleted : PBCodable <NSCopying>
{
    unsigned long long _duration;
    unsigned long long _numbytes;
    unsigned long long _numfiles;
    unsigned long long _timestamp;
    int _error;
    NSString *_extension;
    struct {
        unsigned int duration:1;
        unsigned int numbytes:1;
        unsigned int numfiles:1;
        unsigned int timestamp:1;
        unsigned int error:1;
    } _has;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long numbytes; // @synthesize numbytes=_numbytes;
@property(nonatomic) unsigned long long numfiles; // @synthesize numfiles=_numfiles;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
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
@property(nonatomic) _Bool hasDuration;
- (int)StringAsError:(id)arg1;
- (id)errorAsString:(int)arg1;
@property(nonatomic) _Bool hasError;
@property(nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) _Bool hasNumbytes;
@property(nonatomic) _Bool hasNumfiles;
@property(readonly, nonatomic) _Bool hasExtension;
@property(nonatomic) _Bool hasTimestamp;

@end

