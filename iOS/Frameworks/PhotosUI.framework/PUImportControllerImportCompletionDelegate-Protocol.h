//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHImportResults, PUImportController, PUImportSessionInfo;

@protocol PUImportControllerImportCompletionDelegate <NSObject>
- (void)importController:(PUImportController *)arg1 didCompleteImportWithImportSession:(PUImportSessionInfo *)arg2 results:(PHImportResults *)arg3 completion:(void (^)(void))arg4;
@end

