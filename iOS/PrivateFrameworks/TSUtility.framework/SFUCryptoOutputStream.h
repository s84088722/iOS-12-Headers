//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUOutputStream-Protocol.h>

@class NSString, SFUCryptor;
@protocol SFUOutputStream;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mBaseStream;
    SFUCryptor *mCryptor;
    _Bool mIsClosed;
    _Bool mComputeCrc32;
    unsigned int mCrc32;
}

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;
- (id)closeLocalStream;
- (void)close;
- (unsigned int)crc32;
- (id)inputStream;
- (_Bool)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)dealloc;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(_Bool)arg3;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

