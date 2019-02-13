//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, RPDevice, RPSession;
@protocol OS_dispatch_queue;

@interface RPFileTransferSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    RPDevice *_peerDevice;
    CDUnknownBlockType _progressHandler;
    RPSession *_session;
    NSUUID *_transferIdentifier;
    NSArray *_urls;
}

@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSUUID *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(retain, nonatomic) RPSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) RPDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)addFileURL:(id)arg1;
- (void)_cleanup;
- (id)init;

@end

