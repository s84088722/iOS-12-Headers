//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSmartScaleView.h>

@class UIImageView;
@protocol PXPerson;

@interface PXPeopleScalableAvatarView : PXSmartScaleView
{
    UIImageView *_imageView;
    id <PXPerson> _person;
}

@property(retain, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_updateImageAndWait:(_Bool)arg1;
- (void)updateImage;
- (void)viewScaleDidChange;
- (void)setPersonAndWaitForImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

