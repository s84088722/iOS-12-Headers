//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGSeekable-Protocol.h>

@class NSData, NSString;

@interface SGSeekableData : NSObject <SGSeekable>
{
    NSData *_data;
    const void *_bytes;
    unsigned long long _length;
    unsigned long long _offsetInFile;
}

@property(readonly) unsigned long long offsetInFile; // @synthesize offsetInFile=_offsetInFile;
- (void).cxx_destruct;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (const void *)dataOfLength:(unsigned long long)arg1;
- (id)initWithMemoryMappedPath:(id)arg1 error:(id *)arg2;
- (id)initWithMemoryMappedPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

