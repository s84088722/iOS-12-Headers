//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLLibraryManager, CPLPlatformObject, NSProgress, NSString;

@interface CPLChangeSession : NSObject <CPLAbstractObject>
{
    CPLPlatformObject *_platformObject;
    NSProgress *_sessionProgress;
    NSString *_sessionIdentifier;
    CPLLibraryManager *_libraryManager;
    unsigned long long _state;
}

+ (id)shortDescription;
+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CPLLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSProgress *sessionProgress; // @synthesize sessionProgress=_sessionProgress;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createSessionContext;
- (void)dealloc;
- (id)initWithLibraryManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

