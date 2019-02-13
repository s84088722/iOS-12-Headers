//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SFFeedbackListener-Protocol.h>

@class NSString, SFCardSectionEngagementFeedback, SFResultEngagementFeedback, UIView, UIViewController;

@protocol SearchUIFeedbackDelegate <SFFeedbackListener>

@optional
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1;
- (void)updateViewControllerTitle:(NSString *)arg1;
- (void)presentViewController:(UIViewController *)arg1;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1 animate:(_Bool)arg2;
- (_Bool)shouldHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
- (void)didEngageActionItem:(SFResultEngagementFeedback *)arg1 actionPerformed:(_Bool)arg2;
@end

