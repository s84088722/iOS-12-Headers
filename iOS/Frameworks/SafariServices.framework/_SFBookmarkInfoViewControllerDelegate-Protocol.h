//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFBookmarkInfoViewController;

@protocol _SFBookmarkInfoViewControllerDelegate <NSObject>

@optional
- (_Bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(_SFBookmarkInfoViewController *)arg1;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(_SFBookmarkInfoViewController *)arg1;
- (void)bookmarkInfoViewController:(_SFBookmarkInfoViewController *)arg1 didFinishWithResult:(_Bool)arg2;
@end

