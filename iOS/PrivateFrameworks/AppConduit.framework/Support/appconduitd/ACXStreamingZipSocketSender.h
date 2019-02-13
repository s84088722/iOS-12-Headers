//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;
@protocol OS_dispatch_queue;

@interface ACXStreamingZipSocketSender : NSObject
{
    _Bool _stopWriting;
    CDUnknownBlockType _progressBlock;
    long long _bytesOutput;
    long long _totalBytes;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSURL *_url;
    NSError *_error;
    CDUnknownBlockType _writerBlock;
    long long _completedBytes;
}

+ (id)senderForURL:(id)arg1 queue:(id)arg2 writingUsingBlock:(CDUnknownBlockType)arg3;
@property long long completedBytes; // @synthesize completedBytes=_completedBytes;
@property(readonly) CDUnknownBlockType writerBlock; // @synthesize writerBlock=_writerBlock;
@property _Bool stopWriting; // @synthesize stopWriting=_stopWriting;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property long long bytesOutput; // @synthesize bytesOutput=_bytesOutput;
@property(copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)cancelSending;
- (void)beginSendingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 queue:(id)arg2 writerBlock:(CDUnknownBlockType)arg3;

@end

