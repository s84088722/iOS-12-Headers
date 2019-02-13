//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/MarkupViewControllerDelegate-Protocol.h>

@class MarkupViewController, NSString, NSURL, PUMediaProvider, PUObserverRegistry, PUReviewAsset;

__attribute__((visibility("hidden")))
@interface PUPhotoMarkupViewController : UIViewController <MarkupViewControllerDelegate>
{
    PUReviewAsset *_reviewAsset;
    PUMediaProvider *_mediaProvider;
    MarkupViewController *__markupViewController;
    PUObserverRegistry *__observerRegistry;
    long long __sourceImageVersion;
    NSURL *__workaroundInputWriteURL;
}

@property(copy, nonatomic, setter=_setWorkaroundInputWriteURL:) NSURL *_workaroundInputWriteURL; // @synthesize _workaroundInputWriteURL=__workaroundInputWriteURL;
@property(nonatomic, setter=_setSourceImageVersion:) long long _sourceImageVersion; // @synthesize _sourceImageVersion=__sourceImageVersion;
@property(readonly, nonatomic) PUObserverRegistry *_observerRegistry; // @synthesize _observerRegistry=__observerRegistry;
@property(readonly, nonatomic) MarkupViewController *_markupViewController; // @synthesize _markupViewController=__markupViewController;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PUReviewAsset *reviewAsset; // @synthesize reviewAsset=_reviewAsset;
- (void).cxx_destruct;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)_notifyObserversDidFinishWithSavedAsset:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)viewDidLoad;
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

