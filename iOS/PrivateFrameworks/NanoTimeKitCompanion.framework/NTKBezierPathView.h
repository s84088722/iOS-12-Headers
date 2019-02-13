//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CAAnimationDelegate-Protocol.h>

@class NSString, NTKBezierPathPointModel, UIBezierPath, UIColor;

@interface NTKBezierPathView : UIView <CAAnimationDelegate>
{
    UIBezierPath *_path;
    UIBezierPath *_animateToPath;
    NTKBezierPathPointModel *_pointModel;
    UIColor *_pathColor;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIColor *pathColor; // @synthesize pathColor=_pathColor;
@property(readonly, nonatomic) NTKBezierPathPointModel *pointModel; // @synthesize pointModel=_pointModel;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)_shapeLayer;
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateToPath:(id)arg1 duration:(double)arg2 curve:(long long)arg3;
@property(retain, nonatomic) NSString *lineCap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

