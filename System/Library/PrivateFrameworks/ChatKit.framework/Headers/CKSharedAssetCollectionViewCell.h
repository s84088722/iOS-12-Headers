//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface CKSharedAssetCollectionViewCell : UICollectionViewCell
{
    UIView *_previewView;
    UILabel *_previewTitleLabel;
    NSString *_name;
    NSString *_url;
    UIView *_previewTitleContainerView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *previewTitleContainerView; // @synthesize previewTitleContainerView=_previewTitleContainerView;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UILabel *previewTitleLabel; // @synthesize previewTitleLabel=_previewTitleLabel;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)formattedTitleFromPreviewTitle:(id)arg1;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

