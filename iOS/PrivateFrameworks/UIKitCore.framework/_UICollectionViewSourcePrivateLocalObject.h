//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSourcePrivateLocalObject : NSObject
{
    NSIndexPath *_indexPath;
    UICollectionView *_collectionView;
}

@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)initWithIndexPath:(id)arg1 collectionView:(id)arg2;

@end

