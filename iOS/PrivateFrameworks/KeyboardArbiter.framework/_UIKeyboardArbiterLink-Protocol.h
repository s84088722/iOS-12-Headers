//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <KeyboardArbiter/NSObject-Protocol.h>

@class FBSSceneLayer, NSObject, NSString, _UIKeyboardArbiter;
@protocol OS_dispatch_queue;

@protocol _UIKeyboardArbiterLink <NSObject>
@property(readonly, nonatomic) _Bool isAvailable;
@property(nonatomic) __weak _UIKeyboardArbiter *owner;
@property(readonly, nonatomic) NSString *serviceName;
- (void)detach:(FBSSceneLayer *)arg1;
- (void)attach:(FBSSceneLayer *)arg1;
- (void)updateSceneSettings;
- (void)createSceneWithCompletion:(void (^)(_Bool))arg1;
- (void)connectWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
@end

