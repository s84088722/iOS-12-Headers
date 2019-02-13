//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColor : NSObject
{
}

+ (void)writeColor:(id)arg1 to:(id)arg2;
+ (void)writePlaceholderColor:(id)arg1 to:(id)arg2;
+ (void)writeSystemColor:(id)arg1 to:(id)arg2;
+ (void)writeSchemeColor:(id)arg1 to:(id)arg2;
+ (void)writeRgbColor:(id)arg1 to:(id)arg2;
+ (void)writePresetColor:(id)arg1 to:(id)arg2;
+ (id)readSchemeColorFromAttribute:(id)arg1;
+ (id)readSystemColorFromAttribute:(id)arg1;
+ (id)readPresetColorFromAttribute:(id)arg1;
+ (id)readColorFromNode:(struct _xmlNode *)arg1;
+ (id)readColorFromParentXmlNode:(struct _xmlNode *)arg1;
+ (id)stringSRgbColor:(id)arg1;
+ (id)presetColorRGBEnumMap;
+ (id)schemeColorEnumMap;
+ (id)systemColorEnumMap;
+ (id)presetColorEnumMap;
+ (id)readSchemeColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSystemColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPresetColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readHslColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSRgbColorFromXmlNode:(struct _xmlNode *)arg1 attribute:(const char *)arg2;
+ (id)readScRgbColorFromXmlNode:(struct _xmlNode *)arg1;

@end

