//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaLibrary, NSError, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation
{
    _Bool _success;
    CDUnknownBlockType _progressBlock;
    NSError *_error;
    MPMediaLibrary *_mediaLibrary;
    NSObject<OS_dispatch_source> *_progressTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)_notifyClientOfProgress:(float)arg1;
- (void)_stopProgressTimer;
- (void)_startProgressTimer;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

@end

