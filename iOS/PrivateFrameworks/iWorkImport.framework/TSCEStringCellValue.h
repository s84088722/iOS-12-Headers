//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCEStringCellValue : TSCECellValue
{
    struct TSCEStringValue *_stringValue;
}

- (void)setPopulatedCustomFormat:(id)arg1;
- (void)encodeToArchive:(struct StringCellValueArchive *)arg1;
- (id)initWithArchive:(const struct StringCellValueArchive *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)format;
- (struct TSCEStringValue *)stringValue;
- (struct TSCEValue)tsceValue;
- (void)dealloc;
- (id)initWithStringValue:(struct TSCEStringValue *)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 locale:(id)arg2;

@end

