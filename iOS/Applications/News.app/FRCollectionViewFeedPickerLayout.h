//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRCollectionViewFlowLayout.h"

@class NSDictionary, UIFont, UIImage;

@interface FRCollectionViewFeedPickerLayout : FRCollectionViewFlowLayout
{
    UIFont *_placeholderTopicFont;
    UIFont *_placeholderChannelFont;
    NSDictionary *_placeholderTopicAttributes;
    NSDictionary *_placeholderChannelAttributes;
    UIImage *_placeholderTopicImage;
    UIImage *_placeholderChannelImage;
    struct CGSize _transitioningToSize;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) UIImage *placeholderChannelImage; // @synthesize placeholderChannelImage=_placeholderChannelImage;
@property(retain, nonatomic) UIImage *placeholderTopicImage; // @synthesize placeholderTopicImage=_placeholderTopicImage;
@property(retain, nonatomic) NSDictionary *placeholderChannelAttributes; // @synthesize placeholderChannelAttributes=_placeholderChannelAttributes;
@property(retain, nonatomic) NSDictionary *placeholderTopicAttributes; // @synthesize placeholderTopicAttributes=_placeholderTopicAttributes;
@property(retain, nonatomic) UIFont *placeholderChannelFont; // @synthesize placeholderChannelFont=_placeholderChannelFont;
@property(retain, nonatomic) UIFont *placeholderTopicFont; // @synthesize placeholderTopicFont=_placeholderTopicFont;
@property(nonatomic) struct CGSize transitioningToSize; // @synthesize transitioningToSize=_transitioningToSize;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;
- (void)_populateAttributes:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

