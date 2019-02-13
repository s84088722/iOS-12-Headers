//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface _PXSettingsIndexEntry : NSObject
{
    _PXSettingsIndexEntry *_parentEntry;
    NSIndexPath *_indexPath;
    NSString *_sectionTitle;
    NSString *_rowTitle;
}

+ (id)_titleForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
+ (id)_cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
@property(readonly, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property(readonly, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak _PXSettingsIndexEntry *parentEntry; // @synthesize parentEntry=_parentEntry;
- (void).cxx_destruct;
- (void)_revealInTopOfSettingsController:(id)arg1 drillIn:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_revealInSettingsController:(id)arg1 drillIn:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)matchesSearchString:(id)arg1;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithRowAtIndexPath:(id)arg1 inTableView:(id)arg2;

@end

