//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RemindersListController;

@protocol RemindersListControllerDelegate <NSObject>

@optional
- (void)listControllerFinishedLoadingData:(RemindersListController *)arg1;
- (_Bool)listControllerIsOnTop:(RemindersListController *)arg1;
- (void)listControllerDeletedList:(RemindersListController *)arg1 atIndex:(long long)arg2;
- (void)listControllerEndedEditing:(RemindersListController *)arg1;
- (void)listControllerBeganEditing:(RemindersListController *)arg1;
@end
