//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNVCardWriting : NSObject
{
}

+ (void)makevCardWithBuilder:(id)arg1 serializer:(id)arg2 options:(id)arg3;
+ (void)serializePerson:(id)arg1 withSerializer:(id)arg2 options:(id)arg3;
+ (id)scopeForPerson:(id)arg1 options:(id)arg2;
+ (id)blacklistedMeCardFields;
+ (id)blacklistFieldsForPerson:(id)arg1 options:(id)arg2;
+ (id)dataWithPerson:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)dataWithPeople:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)stringWithPerson:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)stringWithPeople:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

