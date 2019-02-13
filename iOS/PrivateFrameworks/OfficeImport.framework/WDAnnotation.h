//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDAnnotationData, WDCharacterRun;

__attribute__((visibility("hidden")))
@interface WDAnnotation : WDRun
{
    int mType;
    WDCharacterRun *mReference;
    _Bool mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

- (id)description;
- (void)dealloc;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (id)otherEndOfRangedAnnotation;
- (void)useDataFromOtherEnd;
- (id)data;
- (void)setOwner:(id)arg1;
- (id)owner;
- (void)setDate:(id)arg1;
- (id)date;
- (int)annotationType;
- (int)runType;
- (void)setReferencePropertiesFixed;
- (_Bool)referencePropertiesFixed;
- (id)reference;
- (id)text;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;

@end

