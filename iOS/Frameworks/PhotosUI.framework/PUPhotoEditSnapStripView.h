//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PUStripViewInternal;

@interface PUPhotoEditSnapStripView : UIView
{
    PUStripViewInternal *_stripView;
    NSArray *_indicatorInfos;
}

@property(copy, nonatomic) NSArray *indicatorInfos; // @synthesize indicatorInfos=_indicatorInfos;
- (void).cxx_destruct;
- (void)_updateStripView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

