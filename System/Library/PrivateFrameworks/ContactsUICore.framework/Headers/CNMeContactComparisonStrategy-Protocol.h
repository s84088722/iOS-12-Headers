//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContact, CNContactStore, NSArray;

@protocol CNMeContactComparisonStrategy <NSObject>
- (_Bool)isMeContact:(CNContact *)arg1;
- (NSArray *)meContactIdentifiers;
- (void)meContactChangedInStore:(CNContactStore *)arg1;
@end
