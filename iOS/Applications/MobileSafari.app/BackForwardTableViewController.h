//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFPopoverSizingTableViewController.h>

@class NSArray, WKBackForwardListItem;
@protocol BackForwardTableViewControllerDelegate;

@interface BackForwardTableViewController : _SFPopoverSizingTableViewController
{
    _Bool _reversesListOrder;
    id <BackForwardTableViewControllerDelegate> _delegate;
    NSArray *_backForwardList;
    WKBackForwardListItem *_parentItem;
}

@property(nonatomic) _Bool reversesListOrder; // @synthesize reversesListOrder=_reversesListOrder;
@property(retain, nonatomic) WKBackForwardListItem *parentItem; // @synthesize parentItem=_parentItem;
@property(copy, nonatomic) NSArray *backForwardList; // @synthesize backForwardList=_backForwardList;
@property(nonatomic) __weak id <BackForwardTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)done;
- (id)initWithStyle:(long long)arg1;

@end

