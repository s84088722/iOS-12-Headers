//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContainerPropertyDescription : NSObject
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (id)CNValueForContainer:(id)arg1;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) Class valueClass;
@property(readonly, nonatomic) _Bool isWritable;
@property(readonly, copy, nonatomic) NSString *key;
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;
- (void *)ABValueForABSource:(void *)arg1;
- (_Bool)isConvertibleABValue:(void *)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (void *)ABValueFromCNValue:(id)arg1;
- (int)abPropertyID;

@end

