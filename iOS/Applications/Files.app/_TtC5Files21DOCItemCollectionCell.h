//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewTableCell.h>

@class UILabel, _TtC5Files25DOCBadgedFittingImageView, _TtC5Files28DOCItemCollectionCellContent;

@interface _TtC5Files21DOCItemCollectionCell : UICollectionViewTableCell
{
    // Error parsing type: , name: thumbnailView
    // Error parsing type: , name: renameGestureRecognizer.storage
    // Error parsing type: , name: cellManager
    // Error parsing type: , name: UIDocumentBrowserActionSelectorPrefix
    // Error parsing type: , name: actions
}

- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) _TtC5Files25DOCBadgedFittingImageView *accessibilityThumbnailView;
@property(nonatomic, readonly) _TtC5Files28DOCItemCollectionCellContent *accessibilityCellManager;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)renameGesture:(id)arg1;
- (void)dragStateDidChange:(long long)arg1;
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;
- (id)initWithCoder:(id)arg1;
- (void)_commonSetupTableCell;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

