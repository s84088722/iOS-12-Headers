//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLNode : NSObject
{
    struct _xmlNode *_xmlNode;
}

+ (id)getJavascriptFromNode:(struct _xmlNode *)arg1;
+ (id)stringValueForAttribute:(id)arg1 inNode:(struct _xmlNode *)arg2;
- (void)dealloc;
- (long long)_intValueFromAttribute:(id)arg1;
- (id)_stringValueFromAttribute:(id)arg1;
- (struct _xmlNode *)xmlNode;
- (void)setXmlNode:(struct _xmlNode *)arg1;
- (id)initWithNode:(struct _xmlNode *)arg1;

@end

