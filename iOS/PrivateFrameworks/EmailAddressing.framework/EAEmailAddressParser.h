//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAEmailAddressParser : NSObject
{
}

+ (void)insertPreviousRoute:(unsigned short *)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short **)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short *)arg5 addSpace:(_Bool)arg6;
+ (id)displayNameFromAddress:(id)arg1;
+ (void)_componentsForFullAddress:(id)arg1 rawAddressIndexes:(id *)arg2 localPartIndexes:(id *)arg3 domainIndexes:(id *)arg4;
+ (id)addressDomainFromAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (_Bool)addressIsEmptyGroup:(id)arg1;
+ (_Bool)isLegalEmailAddress:(id)arg1;
+ (id)unsafeAddressLocalPartCharacterSet;

@end

