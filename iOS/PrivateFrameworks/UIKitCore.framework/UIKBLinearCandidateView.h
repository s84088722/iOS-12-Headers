//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBHandwritingCandidateView.h>

@class UIKBCandidateCollectionView;

__attribute__((visibility("hidden")))
@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView
{
}

+ (Class)cellClass;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (unsigned long long)focusableVariantCount;
- (void)reloadDataByAppendingAtEnd:(_Bool)arg1;
- (void)refreshSelectedCandidate;

// Remaining properties
@property(readonly, nonatomic) UIKBCandidateCollectionView *candidatesCollectionView; // @dynamic candidatesCollectionView;

@end

