//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentInteraction, UIViewController;

@interface SXComponentInteractionPreview : NSObject
{
    SXComponentInteraction *_interaction;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) SXComponentInteraction *interaction; // @synthesize interaction=_interaction;
- (void).cxx_destruct;
- (id)initWithInteraction:(id)arg1 viewController:(id)arg2;

@end

