//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSSDebugScreenshotMangerView;

@interface SSSDittoRemoteView : UIView
{
    SSSDebugScreenshotMangerView *_debugScreenshotManagerView;
    _Bool _acceptsTouches;
}

@property(nonatomic) _Bool acceptsTouches; // @synthesize acceptsTouches=_acceptsTouches;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
