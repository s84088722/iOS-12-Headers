//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXActionMenuController, PXActionPerformer, UIViewController;

@protocol PXActionMenuDelegate <NSObject>
- (_Bool)actionMenu:(PXActionMenuController *)arg1 dismissViewController:(UIViewController *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)actionMenu:(PXActionMenuController *)arg1 presentViewController:(UIViewController *)arg2;

@optional
- (void)actionMenu:(PXActionMenuController *)arg1 actionPerformer:(PXActionPerformer *)arg2 didChangeState:(unsigned long long)arg3;
@end
