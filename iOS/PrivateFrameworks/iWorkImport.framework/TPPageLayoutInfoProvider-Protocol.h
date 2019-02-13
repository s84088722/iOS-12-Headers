//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, TSDFill, TSPObject;
@protocol TPMasterDrawableProvider, TSWPHeaderFooterProvider;

@protocol TPPageLayoutInfoProvider <NSObject>
- (NSString *)displayPageNumberForPageIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForCharIndex:(unsigned long long)arg1;
- (_Bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (unsigned long long)contentFlagsForPageIndex:(unsigned long long)arg1;
- (NSString *)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (TSPObject<TPMasterDrawableProvider> *)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (id <TSWPHeaderFooterProvider>)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (TSDFill *)backgroundFillForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideInfoForPageIndex:(unsigned long long)arg1;
@end

