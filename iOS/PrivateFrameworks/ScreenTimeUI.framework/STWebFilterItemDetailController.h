//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSString, STRestrictionItem, STWebFilterDetailController;
@protocol STContentPrivacyViewModelCoordinator;

@interface STWebFilterItemDetailController : PSListController
{
    _Bool _isNamedSite;
    STRestrictionItem *_restriction;
    NSString *_pageURL;
    NSString *_pageTitle;
    id <STContentPrivacyViewModelCoordinator> _coordinator;
    STWebFilterDetailController *_parentWebFilterController;
}

@property __weak STWebFilterDetailController *parentWebFilterController; // @synthesize parentWebFilterController=_parentWebFilterController;
@property(retain, nonatomic) id <STContentPrivacyViewModelCoordinator> coordinator; // @synthesize coordinator=_coordinator;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(nonatomic) _Bool isNamedSite; // @synthesize isNamedSite=_isNamedSite;
@property(retain, nonatomic) STRestrictionItem *restriction; // @synthesize restriction=_restriction;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)shouldSelectResponderOnAppearance;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willResignActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)saveFilterItem;
- (id)specifiers;
- (id)init;

@end

