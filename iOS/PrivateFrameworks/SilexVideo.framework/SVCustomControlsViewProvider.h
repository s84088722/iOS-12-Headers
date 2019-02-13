//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVCustomControlsViewProviding-Protocol.h>

@class NSString, UIView;
@protocol SVCustomControlsLayoutGuideProviding, SVVideoViewControllerProviding;

@interface SVCustomControlsViewProvider : NSObject <SVCustomControlsViewProviding>
{
    UIView *_controlsView;
    id <SVCustomControlsLayoutGuideProviding> _layoutGuideProvider;
    id <SVVideoViewControllerProviding> _viewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
@property(readonly, nonatomic) id <SVCustomControlsLayoutGuideProviding> layoutGuideProvider; // @synthesize layoutGuideProvider=_layoutGuideProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *controlsView; // @synthesize controlsView=_controlsView;
- (id)initWithViewControllerProvider:(id)arg1 layoutGuideProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

