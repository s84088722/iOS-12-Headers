//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UICollectionViewLayoutAttributes, UISelectionFeedbackGenerator;
@protocol AVTUILogger, UICollectionViewDelegate;

@interface AVTCenteringCollectionViewDelegate : NSObject <UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    id <UICollectionViewDelegate> _delegate;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSIndexPath *_lastHapticOnScrollIndexPath;
    id <AVTUILogger> _logger;
    struct CGPoint _previousOffset;
}

@property(retain, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSIndexPath *lastHapticOnScrollIndexPath; // @synthesize lastHapticOnScrollIndexPath=_lastHapticOnScrollIndexPath;
@property(nonatomic) struct CGPoint previousOffset; // @synthesize previousOffset=_previousOffset;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(readonly, nonatomic) __weak id <UICollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, nonatomic) UICollectionViewLayoutAttributes *centerItemAttributes;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2 environment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

