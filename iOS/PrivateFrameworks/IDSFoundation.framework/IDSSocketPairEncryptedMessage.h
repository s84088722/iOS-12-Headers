//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage
{
    NSData *_data;
}

- (void).cxx_destruct;
- (id)_nonHeaderData;
@property(readonly, nonatomic) NSData *data;
- (unsigned char)command;
- (id)initWithData:(id)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

