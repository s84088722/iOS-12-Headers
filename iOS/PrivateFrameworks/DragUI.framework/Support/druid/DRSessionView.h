//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DRFlockContainer;
@protocol DRSessionViewDelegate;

@interface DRSessionView : UIView
{
    DRFlockContainer *_flockContainer;
    id <DRSessionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <DRSessionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) DRFlockContainer *flockContainer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

