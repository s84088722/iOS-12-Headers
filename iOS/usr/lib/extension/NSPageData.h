//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSDate, NSString;

@interface NSPageData : NSData
{
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (long long)_umask;
+ (void)initialize;
- (id)data;
- (id)initWithDataNoCopy:(id)arg1;
- (id)deserializer;
- (id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;
- (void)dealloc;
- (id)_mappedFile;
- (id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (void)_setOriginalFileInfoFromFileAttributes:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (const void *)bytes;
- (unsigned long long)length;
- (unsigned long long)writeFile:(id)arg1;
- (unsigned long long)writeFd:(long long)arg1;

@end

