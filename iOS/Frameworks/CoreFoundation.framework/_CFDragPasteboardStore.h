//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/_CFPasteboardStore.h>

@class _CFPasteboardClientInstanceID;

__attribute__((visibility("hidden")))
@interface _CFDragPasteboardStore : _CFPasteboardStore
{
    struct __CFDictionary *_nextUniquingNumbers;
    _CFPasteboardClientInstanceID *_sourceProcessID;
}

+ (id)dragPasteboard;
- (void)requestDataForGeneration:(unsigned long long)arg1 itemIdentifier:(unsigned long long)arg2 flavor:(struct __CFString *)arg3 inResponseToMessage:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleUniquePromiseFile:(id)arg1;
- (struct __CFURL *)_createUniqueFileURLInDirectory:(struct __CFURL *)arg1 withBaseName:(struct __CFString *)arg2 extension:(struct __CFString *)arg3 locale:(struct __CFLocale *)arg4;
- (void)_onqueue_handleNewEntries:(struct __CFArray *)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(_Bool *)arg3;
- (void)_onqueue_clearGenerationSpecificData;
- (_Bool)_isManagedPromiseDragForGeneration:(unsigned long long)arg1 itemIdentifier:(unsigned long long)arg2;
- (void)dealloc;

@end

