//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString;

@interface UNMutableNotificationCategory : UNNotificationCategory
{
}

@property(nonatomic) unsigned long long listPriority; // @dynamic listPriority;
@property(nonatomic) unsigned long long backgroundStyle; // @dynamic backgroundStyle;
@property(nonatomic) unsigned long long options; // @dynamic options;
@property(copy, nonatomic) NSString *categorySummaryFormat; // @dynamic categorySummaryFormat;
@property(copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @dynamic hiddenPreviewsBodyPlaceholder;
@property(copy, nonatomic) NSArray *intentIdentifiers; // @dynamic intentIdentifiers;
@property(copy, nonatomic) NSArray *minimalActions; // @dynamic minimalActions;
@property(copy, nonatomic) NSArray *actions; // @dynamic actions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

