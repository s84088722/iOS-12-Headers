//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class NSManagedObjectID, RMFetchResultsRequest, RMGroupFetchedResultsController;

@protocol RMGroupFetchedResultsControllerDelegate <NSObject>

@optional
- (void)groupResultsControllerDidChangeContents:(RMGroupFetchedResultsController *)arg1;
- (void)groupResultsController:(RMGroupFetchedResultsController *)arg1 didChangeResultsForRequest:(RMFetchResultsRequest *)arg2 objectID:(NSManagedObjectID *)arg3 changeType:(unsigned long long)arg4;
@end

