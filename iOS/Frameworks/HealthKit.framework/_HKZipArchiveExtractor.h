//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSString;

@interface _HKZipArchiveExtractor : NSObject
{
    NSString *_pathname;
    NSData *_archiveData;
    struct archive *_archive;
    struct archive_entry *_entry;
    _Bool _dataRead;
    NSData *_data;
    NSError *_lastError;
    _Bool _hasCalculatedNumberOfEntries;
    unsigned long long _numberOfEntries;
}

- (void).cxx_destruct;
- (void)_logError:(id)arg1;
- (void)_clearState;
- (id)lastError;
- (unsigned long long)numberOfEntries;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1;
- (id)getDataForCurrentEntry;
- (id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1;
- (id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithPathname:(id)arg1;

@end

