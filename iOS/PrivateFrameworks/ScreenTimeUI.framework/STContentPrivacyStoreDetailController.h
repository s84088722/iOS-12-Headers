//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;

@interface STContentPrivacyStoreDetailController : PSListController
{
    id <STContentPrivacyViewModelCoordinator> _coordinator;
}

@property(retain, nonatomic) id <STContentPrivacyViewModelCoordinator> coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)init;

@end

