//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_io, OS_dispatch_queue;

@interface SGDHarvestQueueFileWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_io;
    int _offset;
    int _fileId;
}

@property(readonly, nonatomic) int fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long bytesWritten;
- (void)write:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1 fileId:(int)arg2;

@end

