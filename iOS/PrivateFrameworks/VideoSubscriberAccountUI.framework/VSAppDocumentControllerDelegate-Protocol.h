//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSError, VSAppDocumentController, VSViewModel;

@protocol VSAppDocumentControllerDelegate <NSObject>

@optional
- (void)appDocumentController:(VSAppDocumentController *)arg1 didFailToUpdateViewModelWithError:(NSError *)arg2;
- (void)appDocumentController:(VSAppDocumentController *)arg1 didUpdateViewModel:(VSViewModel *)arg2;
@end

