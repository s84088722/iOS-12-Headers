//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsStyleCoordinator, UIView;

@protocol MediaControlsCollectionItemViewController <NSObject>
@property(nonatomic, getter=isSelected) _Bool selected;
@property(readonly, nonatomic) UIView *contentView;
@property(retain, nonatomic) UIView *backgroundView;
- (void)willTransitionToSize:(struct CGSize)arg1 withCoordinator:(MediaControlsStyleCoordinator *)arg2;
@end

