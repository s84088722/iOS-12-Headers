//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BirthdayRecord : NSObject
{
    NSMutableDictionary *_record;
    _Bool _isEmpty;
}

@property(readonly, nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
- (void).cxx_destruct;
- (_Bool)doesPerson:(void *)arg1 haveBirthday:(id)arg2;
- (void)recordBirthday:(id)arg1 forPerson:(void *)arg2;
- (id)init;

@end

