//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSRegularExpression.h>

@interface NSDataDetector : NSRegularExpression
{
    unsigned long long _types;
}

+ (_Bool)supportsSecureCoding;
+ (id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id *)arg2;
+ (void)initialize;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)numberOfCaptureGroups;
- (unsigned long long)options;
- (id)pattern;
@property(readonly) unsigned long long checkingTypes;
- (id)description;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithTypes:(unsigned long long)arg1 error:(id *)arg2;

@end

