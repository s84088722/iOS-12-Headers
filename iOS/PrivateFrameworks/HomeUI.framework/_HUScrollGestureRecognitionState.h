//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIGestureRecognizer;
@protocol NACancelable;

@interface _HUScrollGestureRecognitionState : NSObject
{
    UIGestureRecognizer *_gestureRecognizer;
    id <NACancelable> _activationTimer;
}

@property(retain, nonatomic) id <NACancelable> activationTimer; // @synthesize activationTimer=_activationTimer;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (id)initWithGestureRecognizer:(id)arg1;

@end

