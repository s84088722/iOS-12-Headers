//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTLearnedLocationEngine;

@protocol RTLearnedLocationEngineProtocol <NSObject>
- (void)learnedLocationEngineDidUpdate:(RTLearnedLocationEngine *)arg1 intervalSinceLastUpdate:(double)arg2;

@optional
- (void)learnedLocationEngineDidFinishTraining:(RTLearnedLocationEngine *)arg1;
- (void)learnedLocationEngineWillBeginTraining:(RTLearnedLocationEngine *)arg1;
@end

