//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRReusableCellVisibilityMonitor.h"

#import "UITableViewDelegate-Protocol.h"

@class NSString;
@protocol UITableViewDelegate;

@interface FRTableViewCellVisibilityMonitor : FRReusableCellVisibilityMonitor <UITableViewDelegate>
{
}

- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cellAtIndexPath:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)visibleCells;
- (id)initWithTableView:(id)arg1 delegateProtocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <UITableViewDelegate> scrollViewProxyDelegate; // @dynamic scrollViewProxyDelegate;
@property(readonly) Class superclass;

@end

