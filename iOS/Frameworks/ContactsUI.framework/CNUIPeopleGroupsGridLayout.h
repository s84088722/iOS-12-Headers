//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroupsGridLayout : UICollectionViewFlowLayout
{
    struct CGSize _intrinsicContentSize;
}

+ (id)layoutForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 numberOfGroups:(unsigned long long)arg3;
+ (double)verticalMargin;
+ (struct CGSize)itemSizeForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2;
+ (unsigned long long)maximumNumberOfGroupsForTraitCollection:(id)arg1;
+ (unsigned long long)maximumNumberOfRowsForTraitCollection:(id)arg1;
+ (unsigned long long)groupCountPerRowForTraitCollection:(id)arg1;
@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;

@end

