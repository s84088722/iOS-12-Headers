//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSFormatter;
@protocol NSCopying><NSSecureCoding><NSObject;

__attribute__((visibility("hidden")))
@interface _NSStringProxyForContext : NSString
{
    NSString *_string;
    NSFormatter *_formatter;
    id <NSCopying><NSSecureCoding><NSObject> _item;
}

@property(copy) id item; // @synthesize item=_item;
@property(copy) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(copy) NSString *string; // @synthesize string=_string;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2;
- (void)_retainFormatter:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;

@end

