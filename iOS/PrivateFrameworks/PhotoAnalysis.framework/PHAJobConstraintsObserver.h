//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAJobConstraints;
@protocol PHAJobConstraintsObserverDelegate;

@interface PHAJobConstraintsObserver : NSObject
{
    _Bool _shutdownRequested;
    _Bool _resetTurbo;
    id <PHAJobConstraintsObserverDelegate> _delegate;
    PHAJobConstraints *_currentConstraints;
}

@property(retain, nonatomic) PHAJobConstraints *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic) __weak id <PHAJobConstraintsObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)acceptConstraints:(id)arg1 mask:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetTurbo;
- (void)dealloc;
- (id)init;
- (id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2;
- (void)setShutdownRequested;

@end
