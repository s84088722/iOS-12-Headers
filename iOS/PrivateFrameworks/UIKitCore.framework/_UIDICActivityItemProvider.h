//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDICActivityItemProvider : UIActivityItemProvider
{
    UIDocumentInteractionController *_documentInteractionController;
}

@property(readonly, nonatomic) __weak UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
- (void).cxx_destruct;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (void)main;
- (id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)item;
- (id)loadedURL;
- (id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2;

@end

