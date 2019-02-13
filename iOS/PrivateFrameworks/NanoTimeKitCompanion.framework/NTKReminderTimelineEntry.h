//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString, UIColor;

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel
{
    _Bool _displayAsConflicting;
    NSDate *_dueDate;
    NSString *_primaryReminderTitle;
    NSString *_primaryReminderId;
    NSString *_secondaryReminderTitle;
    unsigned long long _overlappingReminderCount;
    UIColor *_primaryReminderParentListColor;
}

+ (id)loadingEntryForFamily:(long long)arg1;
+ (id)lockedEntryForFamily:(long long)arg1;
+ (id)_analogReminderImageProvider;
+ (id)_cornerReminderImageProvider;
+ (id)_reminderImageCorner;
+ (id)_reminderImageAnalog;
@property(retain, nonatomic) UIColor *primaryReminderParentListColor; // @synthesize primaryReminderParentListColor=_primaryReminderParentListColor;
@property(nonatomic) unsigned long long overlappingReminderCount; // @synthesize overlappingReminderCount=_overlappingReminderCount;
@property(nonatomic) _Bool displayAsConflicting; // @synthesize displayAsConflicting=_displayAsConflicting;
@property(retain, nonatomic) NSString *secondaryReminderTitle; // @synthesize secondaryReminderTitle=_secondaryReminderTitle;
@property(retain, nonatomic) NSString *primaryReminderId; // @synthesize primaryReminderId=_primaryReminderId;
@property(retain, nonatomic) NSString *primaryReminderTitle; // @synthesize primaryReminderTitle=_primaryReminderTitle;
@property(retain, nonatomic) NSDate *dueDate; // @synthesize dueDate=_dueDate;
- (void).cxx_destruct;
- (id)_createLargeUtilityTemplate;
- (id)_createLargeModularTemplate;
- (id)_createSignatureCornerTemplate;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)description;

@end

