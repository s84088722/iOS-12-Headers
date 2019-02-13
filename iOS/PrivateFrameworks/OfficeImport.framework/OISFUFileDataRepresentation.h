//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSString, OISFUCryptoKey;
@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUFileDataRepresentation : OISFUDataRepresentation
{
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    _Bool mHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    id <SFUInputStream> mInputStream;
    _Bool mDeleteFileWhenDone;
}

- (void)deleteFileWhenDone;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (_Bool)isCryptoKeyIdenticalToKey:(id)arg1;
- (_Bool)isEncrypted;
- (long long)encodedLength;
- (long long)dataLength;
- (_Bool)isReadable;
- (void)setFileType:(unsigned int)arg1;
- (unsigned int)fileType;
- (id)path;
- (id)description;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithPath:(id)arg1;
- (void)readFileAttributes;

@end

