//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNVCardImportController, NSArray;

@protocol CNVCardImportControllerDelegate <NSObject>

@optional
- (void)vCardImportControllerDidCompleteQueue:(CNVCardImportController *)arg1;
- (void)vCardImportController:(CNVCardImportController *)arg1 didSaveContacts:(NSArray *)arg2;
@end

