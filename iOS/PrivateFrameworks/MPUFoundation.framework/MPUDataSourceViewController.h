//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MPUFoundation/UIStateRestoring-Protocol.h>
#import <MPUFoundation/UIViewControllerRestoration-Protocol.h>

@class MPUDataSource, MPUQueryDataSource, NSString;
@protocol UIStateRestoring;

@interface MPUDataSourceViewController : UIViewController <UIStateRestoring, UIViewControllerRestoration>
{
    _Bool _hasEverReloadedData;
    _Bool _visible;
    _Bool _shouldReloadWhenVisible;
    MPUDataSource *_dataSource;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) MPUDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool shouldReloadWhenVisible; // @synthesize shouldReloadWhenVisible=_shouldReloadWhenVisible;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (void)_setDataSource:(id)arg1 shouldReloadData:(_Bool)arg2;
- (void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)arg1;
- (void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)arg1;
- (void)reloadData;
- (void)dataSourceDidInvalidate;
- (void)dataSourceWillInvalidate;
@property(readonly, nonatomic) MPUQueryDataSource *queryDataSource;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;
@property(readonly) Class superclass;

@end

