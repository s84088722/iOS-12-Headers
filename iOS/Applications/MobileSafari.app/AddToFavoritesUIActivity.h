//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Activity.h"

#import "_SFSingleBookmarkNavigationControllerDelegate-Protocol.h"

@class SingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddToFavoritesUIActivity : Activity <_SFSingleBookmarkNavigationControllerDelegate>
{
    SingleBookmarkNavigationController *_bookmarkNavController;
}

- (void).cxx_destruct;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (void)activityDidFinish:(_Bool)arg1;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)_activityBundleImageConfiguration;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(nonatomic) __weak id <AddBookmarkActivityDelegate> delegate; // @dynamic delegate;

@end

