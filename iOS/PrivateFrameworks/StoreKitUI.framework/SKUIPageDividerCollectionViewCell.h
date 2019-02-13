//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, UIColor, UIView;

@interface SKUIPageDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView>
{
    struct UIEdgeInsets _contentInset;
    UIView *_topDividerLine;
    UIView *_bottomDividerLine;
    double _dividerHeight;
    long long _dividerType;
    UIView *_insetView;
    UIColor *_insetColor;
    double _leftEdgeInset;
    double _rightEdgeInset;
    long long _verticalAlignment;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;
@property(nonatomic) double leftEdgeInset; // @synthesize leftEdgeInset=_leftEdgeInset;
@property(nonatomic) long long dividerType; // @synthesize dividerType=_dividerType;
@property(nonatomic) double dividerHeight; // @synthesize dividerHeight=_dividerHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setInsetColor:(id)arg1;
- (void)setColoringWithStyle:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

