//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSIndexPath, UITableView, UITableViewDropProposal;
@protocol UIDropSession, _UITableViewDropCoordinator;

@protocol UITableViewDragDestinationDelegate <NSObject>

@optional
- (long long)__tableView:(UITableView *)arg1 dataOwnerForDropSession:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)_tableView:(UITableView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)_tableView:(UITableView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UITableViewDropProposal *)_tableView:(UITableView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)_tableView:(UITableView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)_tableView:(UITableView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
- (void)_tableView:(UITableView *)arg1 performDropWithCoordinator:(id <_UITableViewDropCoordinator>)arg2;
@end

