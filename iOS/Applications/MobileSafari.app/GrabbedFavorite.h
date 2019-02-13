//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BookmarkFavoriteView, NSIndexPath, NSMutableArray;

@interface GrabbedFavorite : NSObject
{
    _Bool _returningGrabbedFavoriteView;
    _Bool _cancellingFavoriteReordering;
    BookmarkFavoriteView *_favoriteView;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_currentIndexPath;
    NSMutableArray *_cancelReorderingCompletionBlocksWaitingToBeCalled;
    long long _numberOfItemsPerRowDuringReordering;
    struct CGPoint _grabbedFavoriteOffset;
}

@property(nonatomic) long long numberOfItemsPerRowDuringReordering; // @synthesize numberOfItemsPerRowDuringReordering=_numberOfItemsPerRowDuringReordering;
@property(readonly, nonatomic) NSMutableArray *cancelReorderingCompletionBlocksWaitingToBeCalled; // @synthesize cancelReorderingCompletionBlocksWaitingToBeCalled=_cancelReorderingCompletionBlocksWaitingToBeCalled;
@property(nonatomic, getter=isCancellingFavoriteReordering) _Bool cancellingFavoriteReordering; // @synthesize cancellingFavoriteReordering=_cancellingFavoriteReordering;
@property(nonatomic, getter=isReturningGrabbedFavoriteView) _Bool returningGrabbedFavoriteView; // @synthesize returningGrabbedFavoriteView=_returningGrabbedFavoriteView;
@property(nonatomic) struct CGPoint grabbedFavoriteOffset; // @synthesize grabbedFavoriteOffset=_grabbedFavoriteOffset;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) NSIndexPath *startIndexPath; // @synthesize startIndexPath=_startIndexPath;
@property(retain, nonatomic) BookmarkFavoriteView *favoriteView; // @synthesize favoriteView=_favoriteView;
- (void).cxx_destruct;
- (id)init;

@end

