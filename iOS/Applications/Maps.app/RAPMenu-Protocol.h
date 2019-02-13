//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPInstrumentableTarget-Protocol.h"

@class NSArray, NSIndexPath, NSString, RAPQuestion;
@protocol RAPMenuItem;

@protocol RAPMenu <RAPInstrumentableTarget>
+ (NSString *)localizedHeaderText;
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *selectedMenuItem;
@property(readonly, nonatomic) _Bool shouldShowIcons;
@property(readonly, nonatomic) _Bool shouldShowSubtitles;
- (NSArray *)allMenuItems;
- (RAPQuestion<RAPMenuItem> *)menuItemForIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfMenuItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
@end

