//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICSearchIndexable-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol ICSearchIndexableNote <ICSearchIndexable>
@property(readonly, nonatomic) _Bool isModernNote;
- (NSString *)accountName;
- (NSString *)folderName;
- (_Bool)isSharedViaICloud;
- (NSDate *)dateForCurrentSortType;
- (NSString *)contentInfoText;
- (NSString *)noteAsPlainTextWithoutTitle;
- (NSString *)trimmedTitle;
- (NSString *)title;
- (_Bool)isPasswordProtected;
- (NSArray *)searchableContentKeyPaths;
@end

