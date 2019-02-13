//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage
{
    unsigned long long _offset;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    NSString *_peerResponseIdentifier;
}

@property(readonly, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

