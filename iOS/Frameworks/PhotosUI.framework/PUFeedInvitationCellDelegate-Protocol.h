//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFeedCellDelegate-Protocol.h>

@class PUFeedInvitationCell, UIViewController;

@protocol PUFeedInvitationCellDelegate <PUFeedCellDelegate>

@optional
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 presentViewController:(UIViewController *)arg2;
- (void)feedInvitationCellReportAsJunk:(PUFeedInvitationCell *)arg1;
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 didAccept:(_Bool)arg2;
@end

