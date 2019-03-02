//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject
{
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
    CDUnknownBlockType _languageUpdated;
}

@property(copy, nonatomic) CDUnknownBlockType languageUpdated; // @synthesize languageUpdated=_languageUpdated;
- (void).cxx_destruct;
- (_Bool)shouldCacheObject:(id)arg1;
- (void)noteObject:(id)arg1 forLanguage:(id)arg2;
- (void)willLoadLanguage:(id)arg1;
- (void)languagePulled:(id)arg1;
- (void)languagesChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end
