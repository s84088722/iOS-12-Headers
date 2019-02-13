//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HSDAAPPropertyInfo : NSObject
{
    NSMutableDictionary *_codeMap;
    NSMutableDictionary *_valueTypeMap;
}

+ (id)sharedContainerPropertyInfo;
+ (id)sharedItemPropertyInfo;
@property(retain, nonatomic) NSMutableDictionary *valueTypeMap; // @synthesize valueTypeMap=_valueTypeMap;
@property(retain, nonatomic) NSMutableDictionary *codeMap; // @synthesize codeMap=_codeMap;
- (void).cxx_destruct;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;
- (id)_init;
- (long long)valueTypeForProperty:(id)arg1;
- (unsigned int)elementCodeForProperty:(id)arg1;
- (_Bool)hasInfoForProperty:(id)arg1;

@end

