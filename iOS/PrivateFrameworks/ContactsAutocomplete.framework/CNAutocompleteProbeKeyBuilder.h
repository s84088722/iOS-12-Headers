//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNAutocompleteProbeKeyBuilder : NSObject
{
    NSString *_key;
    NSArray *_prefixes;
    NSArray *_suffixes;
}

+ (id)builderWithKey:(id)arg1;
@property(retain, nonatomic) NSArray *suffixes; // @synthesize suffixes=_suffixes;
@property(retain, nonatomic) NSArray *prefixes; // @synthesize prefixes=_prefixes;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)build;
- (id)addDuetModelID;
- (id)prefixedSearch;
- (id)prediction;
- (id)addBatchIndex:(unsigned long long)arg1;
- (id)addDuetReturnedResults:(_Bool)arg1;
- (void)useString:(id)arg1 forSuffixAtIndex:(unsigned long long)arg2;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

