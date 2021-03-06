//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeView.h"

@class ModalCardHeaderView, UIActivityIndicatorView, UITableView;

__attribute__((visibility("hidden")))
@interface GuidanceSearchResultsView : MapsThemeView
{
    _Bool _loading;
    ModalCardHeaderView *_headerView;
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) ModalCardHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (double)heightForLayout:(unsigned long long)arg1;
- (void)updateTheme;
- (id)initWithFrame:(struct CGRect)arg1;

@end

