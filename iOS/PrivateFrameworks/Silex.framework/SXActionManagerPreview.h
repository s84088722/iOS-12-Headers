//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXAction, UIViewController;
@protocol SXActionPreviewActivity;

@interface SXActionManagerPreview : NSObject
{
    SXAction *_action;
    id <SXActionPreviewActivity> _previewActivity;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) id <SXActionPreviewActivity> previewActivity; // @synthesize previewActivity=_previewActivity;
@property(readonly, nonatomic) SXAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 viewController:(id)arg2 previewActivity:(id)arg3;

@end

