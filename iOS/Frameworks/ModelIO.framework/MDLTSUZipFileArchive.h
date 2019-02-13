//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLTSUZipArchive.h>

@class MDLTSUZipFileDescriptorWrapper, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface MDLTSUZipFileArchive : MDLTSUZipArchive
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    MDLTSUZipFileDescriptorWrapper *_fdWrapper;
    NSURL *_temporaryDirectoryURL;
    NSURL *_URL;
}

+ (id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)isZipArchiveAtFD:(int)arg1;
+ (_Bool)isZipArchiveAtURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)newArchiveReadChannel;
- (unsigned long long)archiveLength;
- (_Bool)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)reopenWithTemporaryURL:(id)arg1 error:(id *)arg2;
- (void)removeTemporaryDirectory;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (_Bool)openWithURL:(id)arg1 error:(id *)arg2;
- (id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)URL;

@end

