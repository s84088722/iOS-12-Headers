//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : UICollectionReusableView
{
    GKLabel *_label;
}

+ (double)defaultHeight;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

