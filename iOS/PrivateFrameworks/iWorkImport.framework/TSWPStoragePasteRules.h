//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObject, TSWPColumnStyle, TSWPListStyle, TSWPParagraphStyle, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStoragePasteRules : NSObject
{
    unsigned int _actionFlags[6];
    struct {
        TSWPParagraphStyle *parStyle;
        TSPObject *section;
        TSWPColumnStyle *columnStyle;
        TSWPListStyle *listStyle;
        struct TSWPParagraphData parData;
        struct TSWPParagraphData parStartData;
        struct TSWPParagraphData parBidiData;
    } _paragraphs[4];
    _Bool _mapDestTrailCS;
    unsigned int _flags;
    unsigned int _lastFlag;
    TSWPStorage *_destStorage;
    unsigned long long _sourceColumnStyleCount;
    unsigned long long _sourceSectionCount;
    struct _NSRange _srcLeadRange;
    struct _NSRange _srcTrailRange;
}

@property(nonatomic) unsigned long long sourceSectionCount; // @synthesize sourceSectionCount=_sourceSectionCount;
@property(nonatomic) unsigned long long sourceColumnStyleCount; // @synthesize sourceColumnStyleCount=_sourceColumnStyleCount;
@property(retain, nonatomic) TSWPStorage *destStorage; // @synthesize destStorage=_destStorage;
@property(nonatomic) _Bool mapDestTrailCS; // @synthesize mapDestTrailCS=_mapDestTrailCS;
@property(nonatomic) struct _NSRange srcTrailRange; // @synthesize srcTrailRange=_srcTrailRange;
@property(nonatomic) struct _NSRange srcLeadRange; // @synthesize srcLeadRange=_srcLeadRange;
@property(nonatomic) unsigned int lastFlag; // @synthesize lastFlag=_lastFlag;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didPasteWithIOTransaction:(struct TSWPStorageTransaction *)arg1 atDestRange:(struct _NSRange)arg2;
- (void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange)arg3 srcStylesAmbiguous:(_Bool)arg4;
- (void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange)arg3 srcStylesAmbiguous:(_Bool)arg4;
- (void)mapCharacterStyles:(int)arg1 toRange:(struct _NSRange)arg2 useParagraphProperties:(_Bool)arg3 ioTransaction:(struct TSWPStorageTransaction *)arg4;
- (void)mapCharacterStyleProperties:(id)arg1 toRange:(struct _NSRange)arg2 ioTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)addActionFlag:(int)arg1;
- (void)dealloc;

@end

