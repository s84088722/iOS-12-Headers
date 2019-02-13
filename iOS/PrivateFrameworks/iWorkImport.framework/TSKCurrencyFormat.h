//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCurrencyFormat : TSKFormat <NSCopying>
{
    _Bool _showThousandsSeparator;
    _Bool _accountingStyle;
    _Bool _usePlusSign;
    int _negativeStyle;
    unsigned long long _decimalPlaces;
    unsigned long long _currencyCodeIndex;
}

@property(nonatomic) unsigned long long currencyCodeIndex; // @synthesize currencyCodeIndex=_currencyCodeIndex;
@property(readonly, nonatomic) _Bool usePlusSign; // @synthesize usePlusSign=_usePlusSign;
@property(readonly, nonatomic) _Bool accountingStyle; // @synthesize accountingStyle=_accountingStyle;
@property(readonly, nonatomic) _Bool showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle; // @synthesize negativeStyle=_negativeStyle;
@property(readonly, nonatomic) unsigned long long decimalPlaces; // @synthesize decimalPlaces=_decimalPlaces;
- (id)asCurrencyFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *currencyCode;
- (id)initWithDecimalPlaces:(unsigned long long)arg1 negativeStyle:(int)arg2 showSeparator:(_Bool)arg3 accountingStyle:(_Bool)arg4 currencyCode:(id)arg5;
- (id)initWithLocale:(id)arg1;
- (id)initWithFormatType:(int)arg1;

@end

