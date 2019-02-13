//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface PXCMMPeopleSuggestionCell : UICollectionViewCell
{
    UIImageView *_faceView;
    UILabel *_titleLabel;
    UIView *_faceOverlay;
    UIImageView *_selectedImageView;
    _Bool _checked;
    int _currentRequestID;
    NSString *_displayName;
    UIImage *_faceImage;
}

@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) int currentRequestID; // @synthesize currentRequestID=_currentRequestID;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
