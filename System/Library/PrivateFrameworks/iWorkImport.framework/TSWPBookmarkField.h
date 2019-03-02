//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

#import <iWorkImport/TSWPBookmarkEntry-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSWPBookmarkField : TSWPSmartField <TSWPBookmarkEntry>
{
    NSString *_name;
    _Bool _forRange;
    _Bool _hidden;
}

+ (id)uniqueBookmarkNameFromBase:(id)arg1 excludingNames:(id)arg2;
+ (id)normalizedNameForName:(id)arg1;
@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool forRange; // @synthesize forRange=_forRange;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct BookmarkFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct BookmarkFieldArchive *)arg1 archiver:(id)arg2;
- (void)resetTextAttributeUUIDString;
@property(readonly, nonatomic) NSString *key;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) struct _NSRange effectiveRange;
@property(readonly, nonatomic) struct _NSRange range;
- (_Bool)isEquivalentToObject:(id)arg1;
- (_Bool)allowsEditing;
- (int)styleAttributeArrayKind;
- (int)attributeArrayKind;
- (int)smartFieldKind;
- (id)copyWithNewName:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 forRange:(_Bool)arg3 hidden:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
