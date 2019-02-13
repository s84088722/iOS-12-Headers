//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IXSOwnedDataPromise.h"

#import "NSSecureCoding-Protocol.h"

@class IXPromisedStreamingZipTransferSeed;

@interface IXSPromisedStreamingZipTransfer : IXSOwnedDataPromise <NSSecureCoding>
{
}

- (unsigned long long)bytesConsumedOnDisk;
- (unsigned long long)totalBytesForProgress;
- (void)reset;
- (id)initWithSeed:(id)arg1 error:(id *)arg2;
- (oneway void)_remote_consumeExtractedBytesAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_setArchiveBytesConsumed:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedStreamingZipTransferSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedStreamingZipTransferSeed *seed; // @dynamic seed;

@end

