//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView
{
    _Bool _hidesWhenFullyTransparent;
    MPUBorderConfiguration *_borderConfiguration;
}

+ (double)requiredOutsetForDropShadow;
@property(nonatomic) _Bool hidesWhenFullyTransparent; // @synthesize hidesWhenFullyTransparent=_hidesWhenFullyTransparent;
@property(copy, nonatomic) MPUBorderConfiguration *borderConfiguration; // @synthesize borderConfiguration=_borderConfiguration;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets resizableImageCapInsets;
@property(readonly, nonatomic) double requiredOutsetForDropShadow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

