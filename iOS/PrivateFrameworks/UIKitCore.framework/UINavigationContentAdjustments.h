//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UINavigationContentAdjustments : NSObject
{
    UIScrollView *_adjustedScrollView;
    struct UIEdgeInsets _insetAdjustment;
}

@property(nonatomic) struct UIEdgeInsets insetAdjustment; // @synthesize insetAdjustment=_insetAdjustment;
@property(nonatomic) __weak UIScrollView *adjustedScrollView; // @synthesize adjustedScrollView=_adjustedScrollView;
- (void).cxx_destruct;

@end

