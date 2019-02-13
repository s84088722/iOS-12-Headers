//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSWPTextStylePreset;

__attribute__((visibility("hidden")))
@interface TSWPTextPresetDisplayItem : NSObject
{
    TSWPTextStylePreset *_preset;
    NSString *_displayName;
}

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) TSWPTextStylePreset *preset; // @synthesize preset=_preset;
- (void).cxx_destruct;
- (id)description;
- (void)saveToArchive:(struct TextPresetDisplayItemArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TextPresetDisplayItemArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithPreset:(id)arg1 displayName:(id)arg2;

@end

