//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout
{
    struct CGSize _contentSize;
    _Bool _laysOutCandidateSeparator;
    NSMutableArray *_allAttributes;
    NSArray *_edgeDummyCellAttributes;
}

+ (id)candidateSeparatorDecorationViewKind;
+ (id)dummyCellCollectionViewKind;
+ (id)layout;
+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSArray *edgeDummyCellAttributes; // @synthesize edgeDummyCellAttributes=_edgeDummyCellAttributes;
@property(retain, nonatomic) NSMutableArray *allAttributes; // @synthesize allAttributes=_allAttributes;
@property(nonatomic) _Bool laysOutCandidateSeparator; // @synthesize laysOutCandidateSeparator=_laysOutCandidateSeparator;
- (void).cxx_destruct;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

