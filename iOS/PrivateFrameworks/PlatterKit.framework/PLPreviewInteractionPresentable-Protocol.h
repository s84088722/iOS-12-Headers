//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PlatterKit/NSObject-Protocol.h>

@class UIView;
@protocol PLPreviewInteractionPresenting;

@protocol PLPreviewInteractionPresentable <NSObject>
@property(nonatomic) __weak id <PLPreviewInteractionPresenting> presenter;

@optional
@property(readonly, nonatomic) UIView *viewForTouchContinuation;
@property(readonly, nonatomic) UIView *viewWithContent;
@end

