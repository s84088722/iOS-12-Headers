//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject
{
    ISUDownload *_download;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)phaseStringForDownload:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) float progress;
@property(readonly) NSString *phase;
- (id)_className;
@property(readonly) NSNumber *adamID;
- (void)dealloc;
- (id)initWithSSDownload:(id)arg1;
- (id)initWithISUDownload:(id)arg1;

@end

