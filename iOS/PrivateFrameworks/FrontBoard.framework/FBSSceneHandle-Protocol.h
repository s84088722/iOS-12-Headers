//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSProcessExecutionPolicy, FBSSceneActivitySession, FBSSceneParameters, FBSSceneSpecification, FBSSerialQueue, NSString;
@protocol FBSProcess, FBSSceneAgentProxy;

@protocol FBSSceneHandle <NSObject>
- (void)closeSession:(FBSSceneActivitySession *)arg1;
- (FBSSceneActivitySession *)sessionForIdentifier:(NSString *)arg1;
- (FBSSceneActivitySession *)openSessionWithName:(NSString *)arg1 executionPolicy:(FBSProcessExecutionPolicy *)arg2;
- (id <FBSProcess>)clientProcess;
- (id <FBSProcess>)hostProcess;
- (id <FBSSceneAgentProxy>)counterpartAgent;
- (FBSSerialQueue *)callOutQueue;
- (FBSSceneSpecification *)specification;
- (FBSSceneParameters *)parameters;
- (NSString *)identifier;
@end

