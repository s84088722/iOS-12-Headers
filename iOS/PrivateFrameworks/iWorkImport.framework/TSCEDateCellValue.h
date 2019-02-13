//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCEDateCellValue : TSCECellValue
{
    struct TSCEDateValue *_dateValue;
}

- (void)encodeToArchive:(struct DateCellValueArchive *)arg1;
- (void)setPopulatedCustomFormat:(id)arg1;
- (id)initWithArchive:(const struct DateCellValueArchive *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)format;
- (struct TSCEValue)tsceValue;
- (struct TSCEDateValue *)dateValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDateValue:(struct TSCEDateValue *)arg1 locale:(id)arg2;
- (id)initWithDate:(id)arg1 locale:(id)arg2;

@end

