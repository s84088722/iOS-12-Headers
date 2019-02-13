//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, SFUCryptoKey, SFUDataRepresentation;
@protocol SFUZipArchiveDataRepresentation, SFUZipArchiveDelegate;

@interface SFUZipArchive : NSObject
{
    NSMutableDictionary *mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    SFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
    id <SFUZipArchiveDelegate> _delegate;
}

+ (_Bool)isZipArchiveAtPath:(id)arg1;
@property(nonatomic) id <SFUZipArchiveDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)decompressAtPath:(id)arg1;
- (void)setCryptoKey:(id)arg1;
- (id)encryptedDocumentUuid;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (_Bool)isEncrypted;
- (id)allEntryNames;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)entryWithName:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(_Bool)arg2;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long *)arg2;
- (struct SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (void)collapseCommonRootDirectory;
- (void)readEntries;

@end

