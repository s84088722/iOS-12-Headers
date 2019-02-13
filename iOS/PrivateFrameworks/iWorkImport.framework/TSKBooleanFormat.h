//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKBooleanFormat : TSKFormat <NSCopying>
{
    NSString *_trueString;
    NSString *_falseString;
}

@property(readonly, nonatomic) NSString *falseString; // @synthesize falseString=_falseString;
@property(readonly, nonatomic) NSString *trueString; // @synthesize trueString=_trueString;
- (void).cxx_destruct;
- (id)asBooleanFormat;
- (id)stringFromBool:(_Bool)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTrueString:(id)arg1 falseString:(id)arg2;

@end

