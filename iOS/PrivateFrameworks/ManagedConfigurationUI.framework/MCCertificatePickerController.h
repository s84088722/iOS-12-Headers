//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListItemsController.h>

__attribute__((visibility("hidden")))
@interface MCCertificatePickerController : PSListItemsController
{
}

- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setRowToSelect;
- (id)specifiers;
- (void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(struct __SecCertificate *)arg2;
- (id)navigationTitle;

@end

