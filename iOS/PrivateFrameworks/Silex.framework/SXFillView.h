//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SXFill;
@protocol SXDraggable;

@interface SXFillView : UIView
{
    SXFill *_fill;
    id <SXDraggable> _dragable;
    struct CGRect _originalFrame;
}

@property(readonly, nonatomic) id <SXDraggable> dragable; // @synthesize dragable=_dragable;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(readonly, nonatomic) SXFill *fill; // @synthesize fill=_fill;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentFrame;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithFill:(id)arg1;

@end

