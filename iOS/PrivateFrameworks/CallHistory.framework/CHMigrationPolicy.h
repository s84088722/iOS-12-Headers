//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSMutableDictionary, NSString;

@interface CHMigrationPolicy : NSEntityMigrationPolicy
{
    NSMutableDictionary *mccToISOCountryCodeMap;
    NSString *lastQueriedISOCountryCode;
    NSString *currentLocale;
}

- (void).cxx_destruct;
- (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
- (id)isoCountryCodeIfAbsent:(id)arg1;
- (id)isoCountryCodeForMCC:(id)arg1;
- (id)init;

@end

