//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPRequestResponseController, NSError;

@protocol MPRequestResponseControllerDelegate <NSObject>

@optional
- (void)didFinishLoadingRequestForController:(MPRequestResponseController *)arg1;
- (void)willBeginLoadingRequestForController:(MPRequestResponseController *)arg1;
- (_Bool)controller:(MPRequestResponseController *)arg1 shouldRetryFailedRequestWithError:(NSError *)arg2;
- (void)controller:(MPRequestResponseController *)arg1 defersResponseReplacement:(void (^)(void))arg2;
@end

