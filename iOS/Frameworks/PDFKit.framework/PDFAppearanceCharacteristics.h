//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSDictionary, NSString, PDFAppearanceCharacteristicsPrivate, UIColor;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying>
{
    PDFAppearanceCharacteristicsPrivate *_private;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;
@property(copy, nonatomic) NSString *downCaption;
@property(copy, nonatomic) NSString *rolloverCaption;
@property(copy, nonatomic) NSString *caption;
@property(nonatomic) long long controlType;
- (void)addColor:(id)arg1 forKey:(struct __CFString *)arg2 toDictionaryRef:(struct __CFDictionary *)arg3;
- (struct __CFDictionary *)createDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forControlType:(long long)arg2;
- (_Bool)scaleProportional;
- (struct CGPDFForm *)icon;
@property(nonatomic) long long rotation;
@property(copy, nonatomic) UIColor *borderColor;
@property(copy, nonatomic) UIColor *backgroundColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

