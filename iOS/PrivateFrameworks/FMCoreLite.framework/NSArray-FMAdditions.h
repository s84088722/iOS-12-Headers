//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (FMAdditions)
+ (id)fm_arrayWithSafeObject:(id)arg1;
+ (id)fm_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;
- (id)fm_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;
- (id)fm_arrayByFlattening;
- (void)fm_each:(CDUnknownBlockType)arg1;
- (_Bool)fm_all:(CDUnknownBlockType)arg1;
- (_Bool)fm_any:(CDUnknownBlockType)arg1;
- (id)fm_filter:(CDUnknownBlockType)arg1;
- (id)fm_map:(CDUnknownBlockType)arg1;
- (id)fm_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;
- (id)fm_firstObjectPassingTest:(CDUnknownBlockType)arg1;
@end

