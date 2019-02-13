//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneLayer, FBSSceneSpecification, FBSSceneTransitionContext, NSSet, NSString;
@protocol FBSceneClient;

@protocol FBSceneHost <NSObject>
@property(readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)clientWillInvalidate:(id <FBSceneClient>)arg1;
- (void)client:(id <FBSceneClient>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)client:(id <FBSceneClient>)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)client:(id <FBSceneClient>)arg1 detachLayer:(FBSSceneLayer *)arg2;
- (void)client:(id <FBSceneClient>)arg1 updateLayer:(FBSSceneLayer *)arg2;
- (void)client:(id <FBSceneClient>)arg1 attachLayer:(FBSSceneLayer *)arg2;
@end

