//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingSelectionView : UICollectionReusableView
{
    UIImageView *_imageView;
    _Bool _selected;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)_updateSelected;
- (id)initWithFrame:(struct CGRect)arg1;

@end

